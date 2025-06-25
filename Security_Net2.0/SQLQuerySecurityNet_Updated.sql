IF OBJECT_ID('dbo.ROBOT_LOCATION','U') IS NOT NULL	
	drop table ROBOT_LOCATION;
IF OBJECT_ID('dbo.MAP_ZONE','U') IS NOT NULL	
	drop table MAP_ZONE;
IF OBJECT_ID('dbo.SECURITY_ROBOT','U') IS NOT NULL	
drop table SECURITY_ROBOT;
IF OBJECT_ID('dbo.SENSOR','U') IS NOT NULL	
	drop table SENSOR;
IF OBJECT_ID('dbo.QUESTION','U') IS NOT NULL	
	drop table QUESTION;
IF OBJECT_ID('dbo.WARNING','U') IS NOT NULL	
	drop table WARNING;	
IF OBJECT_ID('dbo.USER_NET','U') IS NOT NULL	
	drop table USER_NET;
--Sentencia SQL DDL (data definition language) para crear la tabla ROBOT_WAITER
CREATE TABLE USER_NET (
	ID				INT	NOT NULL PRIMARY KEY IDENTITY(1,1),
	NAME			VARCHAR(100) NOT NULL,
	LASTNAME		VARCHAR(100) NOT NULL,
	DNI				VARCHAR(10),
	USERNAME		VARCHAR(100)  NULL,
	PASSWORD 		VARCHAR(100)  , 
	AUTHORIZED		CHAR(3)  NULL,-- SecOp 1:yes, 0: no
	HELPNEEDED		CHAR(1)  NULL, -- SecOp	1:yes, 0: no
	USER_TYPE		CHAR(1) NOT NULL, -- 0: Administrator, 1: Security Operator, 2:Client
	-- EXTRAS --
	DOCUMENT_TYPE	CHAR(1), -- 0: DNI, 1: Carnet de extranjería, 2: Pasaporte
	BIRTHDAY		DATETIME,
	ADDRESS			VARCHAR(50),
	GENDER			CHAR(1),
	PHONE_NUMBER	VARCHAR(15),
	PHOTO			IMAGE, -- SecOp
	SALARY			DECIMAL(10,2),-- SecOp
	SCHEDULE		VARCHAR(20),-- SecOp
	HIRE_DATE		DATETIME,-- SecOp
	EMAIL			VARCHAR(50),
	SATISFACTION	VARCHAR(1), -- 1: Good, 0: Bad
	STATUS			CHAR(2) NULL, -- A: habilitado / U: Deshabilitado-eliminado
);
GO
-- Creamos procedimiento sql para inicializar  username como dni 
/*IF OBJECT_ID('trg_SetUsernameAsDNI', 'TR') IS NOT NULL
    DROP TRIGGER trg_SetUsernameAsDNI;
GO

CREATE TRIGGER trg_SetUsernameAsDNI
ON USER_NET
AFTER INSERT
AS
BEGIN
    UPDATE USER_NET
    SET USERNAME = I.DNI
    FROM USER_NET U
    INNER JOIN INSERTED I ON U.ID = I.ID
    WHERE U.USERNAME IS NULL;
END
GO*/
CREATE TABLE WARNING(
	ID	INT	NOT NULL PRIMARY KEY IDENTITY(1,1),
	START_DATE		DATETIME,
	END_DATE		DATETIME,
	WARNING_TYPE		CHAR(1) NOT NULL, -- 0: Camera, 1: Noise, 2: Button by client
	DESCRIPTION		VARCHAR(500) NULL,
	ZONE 			VARCHAR(50) NULL,
	ACTIVE		VARCHAR(1) -- Alarm active or not

);
GO
CREATE TABLE QUESTION (
	ID		INT	NOT NULL PRIMARY KEY IDENTITY(1,1),
	QUESTION		VARCHAR(500) NOT NULL,
	ANSWER			VARCHAR(500),
	FAQ				CHAR(1), -- 1: faq, 0: not faq
	STATUS			CHAR(1),
);

CREATE TABLE SENSOR (
	ID			INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	NAME		VARCHAR(200) NOT NULL,
	DESCRIPTION	VARCHAR(400),	
	PRICE		DECIMAL (10,2) NOT NULL,
	STOCK		INT NOT NULL,	
	AVAILABLE	CHAR(1), --  1:yes, 0: no
	SENSOR_TYPE	CHAR(1) NOT NULL, -- 0: Ultrasonic , 1: Sound , 2: Camera
	DECIBELES	DECIMAL(10,2),-- Sound
	DISTANCE	DECIMAL(10,2),-- Ultrasonic
	PHOTO		IMAGE, -- Camera
	PHOTO_DATE	DATETIME,-- Camera

);
GO
CREATE TABLE SECURITY_ROBOT(
	ID				INT	NOT NULL PRIMARY KEY IDENTITY(1,1),
	NAME			VARCHAR(200) NOT NULL,
	BRAND 			INT,
	MODEL			VARCHAR(100),
	LOAD_CAPACITY	DECIMAL(10,2),
	SPEED			DECIMAL(10,2),
	STATUS			CHAR(1),
	PURCHASE_DATE	DATETIME,
	PHOTO			IMAGE NULL
);
GO
CREATE TABLE MAP_ZONE(
	ID			INT NOT NULL PRIMARY KEY,
	ZONE_NAME	VARCHAR(200) NOT NULL,
	MAP_NAME	VARCHAR(200) NOT NULL,
);
GO
CREATE TABLE ROBOT_LOCATION(
	X		DECIMAL(10,2), -- Longitud
	Y		DECIMAL(10,2), -- Latitud
);
GO
--  Sentencia SQL DML (data modifying language) para insertar registros a la tabla QUESTION
INSERT INTO QUESTION ( QUESTION, ANSWER, FAQ, STATUS) VALUES
(  'Donde estan los baños?',     'Al finalizar el pasillo',    '1','A'), 
(  'Donde esta la salida de emergencia?',         'Al costado de FCI', '1','A'),
(  'Donde esta el estacionamiento?', 'En el sotano 1',      '1','A'),
(  'Donde estan  los ascensores?',             'Al costado de EEGGCC',    '1','A'),
(  'Donde esta el topico?', 'En medio de EEGGCC y EEGGLL', '1','A');
INSERT INTO QUESTION ( QUESTION, FAQ, STATUS) VALUES
( 'Donde esta EEGGCC?','0','A'),
( 'Donde esta  EEGGLL?', '0','A'),
( 'Hay promociones por yape?', '0','A'),
(  'Que hago si me robaron?', '0','A'),
( 'Que hago si la maquina expendedora se comio mi dinero?', '0','A');
GO
--  Sentencia SQL DML (data modifying language) para insertar registros a la tabla MALL_ZONE
INSERT INTO MAP_ZONE (ID, ZONE_NAME, MAP_NAME) VALUES
(1,  'EEGGLL','PUCP'),
(2,  'EEGGCC', 'PUCP'),
(3,  'FCI', 'PUCP'),
(4,  'CIA', 'PUCP'),
(5,  'POLI', 'PUCP');
--  Sentencia SQL DML (data modifying language) para insertar registros a la tabla WARNING
INSERT INTO WARNING (START_DATE, END_DATE, WARNING_TYPE, DESCRIPTION, ZONE, ACTIVE) VALUES
('18/06/2025 07:33:19',  '18/06/2025 07:33:51','2','Botón de emergencia presionado por un usuario', NULL, '0');
-- Sentencia SQL DML (data modifying language) para insertar registros a la tabla SECURITY_ROBOT
INSERT INTO SECURITY_ROBOT (NAME, BRAND, MODEL, LOAD_CAPACITY, SPEED, STATUS, PURCHASE_DATE, PHOTO)
VALUES  ('JHOPE', 1, 'BellaBot PD-10040', 40.00, 0.50, 'A', '20250115', NULL),
		('JUNGKOOK', 2, 'Servi Standard', 30.00, 1.20, 'A', '20241110', NULL),
		('TAEHYUNG', 2, 'Servi Plus', 40.00, 1.20, 'A', '20250305', NULL);
-- Sentencias SQL DML (data modifying language) para insertar registros a la tabla SENSOR
--Ultrasonido
INSERT INTO SENSOR (NAME, DESCRIPTION, PRICE, STOCK, AVAILABLE, SENSOR_TYPE, DISTANCE)
VALUES ('Sensor de Ultrasonido','Mide distancias', 25, 3, '1', '0', NULL);
--Sonido
INSERT INTO SENSOR (NAME, DESCRIPTION, PRICE, STOCK, AVAILABLE, SENSOR_TYPE, DECIBELES)
VALUES ('Sensor de Sonido','Mide sonido', 15, 1, '1', '1', NULL);
--Camara
INSERT INTO SENSOR (NAME, DESCRIPTION, PRICE, STOCK, AVAILABLE, SENSOR_TYPE, PHOTO, PHOTO_DATE)
VALUES ('Sensor Camara','Captura imagenes', 32, 1, '1', '2', NULL, NULL);

GO
-- Sentencias SQL DML (data modifying language) para insertar registros a la tabla USER_NET	 --BIRTHDAY --YEAR-MONTH-DAY
--Administrators
INSERT INTO USER_NET (NAME, LASTNAME, DNI, PASSWORD, USER_TYPE, DOCUMENT_TYPE, BIRTHDAY, ADDRESS, GENDER, PHONE_NUMBER, PHOTO, SALARY, SCHEDULE,EMAIL, STATUS)
VALUES ('erwin', 'smith', '12345678', '87654321', '0','1','19850115','Av. Universitaria 1600', 'M','967430423',NULL,4000,'T-N','erwin@gmail.com','A');	
-- Security Operators authorized	
INSERT INTO USER_NET (NAME, LASTNAME, DNI, USERNAME, PASSWORD, AUTHORIZED, HELPNEEDED, USER_TYPE, DOCUMENT_TYPE, BIRTHDAY, ADDRESS, GENDER, PHONE_NUMBER, PHOTO, SALARY, SCHEDULE,HIRE_DATE,EMAIL, STATUS)
VALUES ('letizia', 'castillo', '12345678', '12345678', '87654321', 'SI','N','1','0','1990-06-01','Jirón Las Hormigas 125', 'F','967430963',NULL,250000,'T-N','1990-06-01', 'leti@correo.com', 'A'),
		('angelica', 'apaza', '23456789', '23456789', '98765432', 'SI','N','1','0','1990-06-01','Jirón Las Hormigas 126', 'F','96743096',NULL,250000,'T-N','1990-06-01', 'angelica@correo.com', 'A');
-- Security Operators not authorized	
INSERT INTO USER_NET (NAME, LASTNAME, DNI, USERNAME, PASSWORD, AUTHORIZED, HELPNEEDED, USER_TYPE, DOCUMENT_TYPE, BIRTHDAY, ADDRESS, GENDER, PHONE_NUMBER, PHOTO,EMAIL, STATUS)
VALUES ('aniela', 'ubillus', '34567891', '34567891', '19876543', 'NO','N','1','0','1990-06-01','Jirón Las Hormigas 666', 'F','1990-06-01',NULL, 'aniela@correo.com', 'A'),
('geraldine', 'peña', '45678912', '45678912', '21987654', 'NO','N','1','0','1990-06-01','Jirón Las Hormigas 127', 'F','1990-06-01',NULL,'geral@correo.com','A');
-- Clients
/*INSERT INTO USER_NET (NAME, LASTNAME, DNI, USER_TYPE, DOCUMENT_TYPE, BIRTHDAY, ADDRESS, GENDER, PHONE_NUMBER,EMAIL,SATISFACTION, STATUS)
VALUES ('nhyo', 'rivas', '12345678', '2', '0','1990-06-01','Jirón La Floresta 690', 'M','967430430', 'nhyorivas@correo.com','1', 'A'),
		('jesus', 'nazaret', '98756314', '2', '1','1990-06-01','Belen', 'M','967430430', 'yisus@correo.com','0', 'A'),
		('dil', 'gil', '12345678', '2', '0','1990-06-01','Cerro Candela 6666', 'M','967430430', 'gildil@correo.com','1', 'A');
GO*/
-- Sentencia SQL para añadir un operador
IF EXISTS(	SELECT *
			FROM sysobjects
			WHERE id = object_id (N'[dbo].[usp_AddOperator]')
				AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_AddOperator
END
GO
CREATE PROCEDURE dbo.usp_AddOperator(
	@NAME			VARCHAR(100) ,
	@LASTNAME		VARCHAR(100) ,
	@DNI			VARCHAR(10),
	@USERNAME		VARCHAR(100),
	@PASSWORD 		VARCHAR(100), 
	@AUTHORIZED		CHAR(1) ,-- SecOp SI/NO
	@HELPNEEDED		CHAR(1) , -- SecOp	SI/NO
--@USER_TYPE		CHAR(1), -- 0: Administrator, 1: Security Operator , 2: Client
	@DOCUMENT_TYPE	CHAR(1), -- 0: DNI, 1: Carnet de extranjería, 2: Pasaporte
	@BIRTHDAY		DATETIME,
	@ADDRESS		VARCHAR(50),
	@GENDER			CHAR(1),
	@PHONE_NUMBER	VARCHAR(15),
	@PHOTO			IMAGE, -- SecOp, Admin
	@SALARY			DECIMAL(10,2),-- SecOp, Admin
	@SCHEDULE		VARCHAR(20),-- SecOp, Admin
	@HIRE_DATE		DATETIME,-- SecOp
	@EMAIL			VARCHAR(50),
	@STATUS         CHAR(2),
	@ID				INT OUT 
) AS
  BEGIN
		INSERT INTO USER_NET(NAME, LASTNAME, DNI, USERNAME, PASSWORD, AUTHORIZED, HELPNEEDED, USER_TYPE, DOCUMENT_TYPE, BIRTHDAY, ADDRESS, GENDER, PHONE_NUMBER, PHOTO, SALARY, SCHEDULE,HIRE_DATE,EMAIL,STATUS)
		SELECT @NAME, @LASTNAME, @DNI, @USERNAME,@PASSWORD, @AUTHORIZED, @HELPNEEDED, '1', @DOCUMENT_TYPE, @BIRTHDAY, @ADDRESS, @GENDER, @PHONE_NUMBER, @PHOTO, @SALARY, @SCHEDULE,@HIRE_DATE,@EMAIL, @STATUS
		SET @ID = SCOPE_IDENTITY()
  END
GO

-- Sentencia SQL para validar un operador
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_ValidateOperator]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_ValidateOperator
END
GO
CREATE PROCEDURE dbo.usp_ValidateOperator (
    @USERNAME         VARCHAR(100),
	@PASSWORD         VARCHAR(100)
) AS 
BEGIN
	SELECT * FROM USER_NET 
	WHERE USERNAME=@USERNAME AND PASSWORD=@PASSWORD AND AUTHORIZED='1' AND USER_TYPE='1' AND STATUS='A'
END
GO
/*
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_ValidateUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_ValidateUser]
END
GO
CREATE PROCEDURE dbo.usp_ValidateUser (
    @USERNAME         VARCHAR(100),
	@PASSWORD         VARCHAR(100)
) AS 
BEGIN
	SELECT * FROM USER_NET 
	WHERE USERNAME=@USERNAME AND PASSWORD=@PASSWORD AND STATUS='A'AND AUTHORIZED='1'
END
GO*/
-- Sentencia SQL para editar un user net por dni 
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_UpdateSecurityOperator]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_UpdateSecurityOperator
END
GO
CREATE PROCEDURE dbo.usp_UpdateSecurityOperator(
	@ID             INT,
	@NAME			VARCHAR(100) ,
	@LASTNAME		VARCHAR(100) ,
	@DNI			VARCHAR(10)  ,
	@USERNAME		VARCHAR(100),
	@PASSWORD 		VARCHAR(100), 
	@AUTHORIZED		CHAR(3) ,-- SI/NO
	@HELPNEEDED		CHAR(1) , -- SecOp	1:yes, 0: no
	@DOCUMENT_TYPE	CHAR(1), -- 0: DNI, 1: Carnet de extranjería, 2: Pasaporte
	@BIRTHDAY		DATETIME,
	@ADDRESS		VARCHAR(50),
	@GENDER			CHAR(1),
	@PHONE_NUMBER	VARCHAR(15),
	@PHOTO			IMAGE, -- 
	@SALARY			DECIMAL(10,2),-- 
	@SCHEDULE		VARCHAR(20),-- 
	@HIRE_DATE		DATETIME,-- 
	@EMAIL			VARCHAR(50),
	@STATUS			CHAR(2)
) AS
	BEGIN
		UPDATE USER_NET 
		SET NAME=@NAME, LASTNAME=@LASTNAME, DNI=@DNI,USERNAME=@USERNAME,PASSWORD=@PASSWORD, AUTHORIZED=@AUTHORIZED, HELPNEEDED=@HELPNEEDED, 
		DOCUMENT_TYPE=@DOCUMENT_TYPE, BIRTHDAY=@BIRTHDAY, ADDRESS=@ADDRESS, GENDER=@GENDER, PHONE_NUMBER=@PHONE_NUMBER, PHOTO=@PHOTO,
		SALARY=@SALARY, SCHEDULE=@SCHEDULE,HIRE_DATE=@HIRE_DATE,EMAIL=@EMAIL
		WHERE ID=@ID
	END
GO
-- Sentencia SQL para eliminar un operador (autorizado)/
/*
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_DeleteOperator]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_DeleteOperator
END
GO
CREATE PROCEDURE usp_DeleteOperator(
	@ID		INT
) AS
	BEGIN
		UPDATE USER_NET
		SET STATUS = 'E'
		WHERE ID=@ID AND USER_TYPE='1' AND AUTHORIZED='1'
	END
GO
-- Sentencia SQL para eliminar un operador (no autorizado)
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_DeleteOperator]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_DeleteOperator
END
GO
CREATE PROCEDURE usp_DeleteOperator(
	@ID		INT
) AS
	BEGIN
		UPDATE USER_NET
		SET STATUS = 'E'
		WHERE ID=@ID AND USER_TYPE='1' AND AUTHORIZED='0'
	END
GO
*/
-- Sentencia SQL para consultar todos los operadores (autorizados)
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAllOperators]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAllOperators
END
GO
CREATE PROCEDURE dbo.usp_QueryAllOperators AS
	BEGIN
		SELECT *
		FROM USER_NET
		WHERE USER_TYPE='1' AND AUTHORIZED= '1'
	END
GO
-- Sentencia SQL para consultar todos los operadores (no autorizados)
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAllNotAuthorizedOperators]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAllNotAuthorizedOperators
END
GO
CREATE PROCEDURE dbo.usp_QueryAllNotAuthorizedOperators AS
	BEGIN
		SELECT *
		FROM USER_NET
		WHERE USER_TYPE='1' AND AUTHORIZED= 'NO'
	END
GO
-- Sentencia SQL para consultar un operador por DNI (autorizado)
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryOperatorByDNI]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryOperatorByDNI
END
GO
CREATE PROCEDURE dbo.usp_QueryOperatorByDNI(
	@DNI		VARCHAR(20)
) AS 
	BEGIN
		SELECT * FROM USER_NET 
		WHERE USER_TYPE='1' AND DNI=@DNI AND AUTHORIZED='SI'
	END
GO
-- Sentencia SQL para consultar un operador por DNI (no autorizado)
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryNotAuthorizedOperatorByDNI]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryNotAuthorizedOperatorByDNI
END
GO
CREATE PROCEDURE dbo.usp_QueryNotAuthorizedOperatorByDNI(
	@DNI		VARCHAR(20)
) AS 
	BEGIN
		SELECT * FROM USER_NET 
		WHERE USER_TYPE='1' AND AUTHORIZED='NO' AND DNI=@DNI
	END
GO
-- Sentencia SQL para consultar registros de la tabla USER_NET
SELECT * FROM USER_NET
GO
-- Sentencia SQL para anadir una pregunta
IF EXISTS(	SELECT *
			FROM sysobjects
			WHERE id = object_id (N'[dbo].[usp_AddQuestion]')
				AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_AddQuestion
END
GO
CREATE PROCEDURE dbo.usp_AddQuestion(
	@QUESTION		VARCHAR(500),
	@ANSWER			VARCHAR(500),
	@FAQ				CHAR(1),
	@STATUS				CHAR(1),
	@ID         INT OUT 
) AS
  BEGIN
		INSERT INTO QUESTION(QUESTION,ANSWER, FAQ, STATUS)
		SELECT @QUESTION, @ANSWER, @FAQ , @STATUS	
		SET @ID = SCOPE_IDENTITY()
  END
GO
-- Sentencia SQL para eliminar una pregunta
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_DeleteQuestion]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_DeleteQuestion
END
GO
CREATE PROCEDURE dbo.usp_DeleteQuestion(
	@ID		INT
) AS
	BEGIN
		UPDATE QUESTION
		SET STATUS = 'E'
		WHERE ID=@ID 
	END
GO
-- Sentencia SQL para editar una pregunta
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_UpdateQuestion]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_UpdateQuestion
END
GO
CREATE PROCEDURE dbo.usp_UpdateQuestion(
	@QUESTION		VARCHAR(500),
	@ANSWER			VARCHAR(500),
	@FAQ				CHAR(1),
	@STATUS				CHAR(1),
	@ID         INT OUT 
) AS
	BEGIN
		UPDATE QUESTION 
		SET QUESTION=@QUESTION, ANSWER=@ANSWER, FAQ=@FAQ, STATUS=@STATUS	
		WHERE ID=@ID
	END
GO
-- Sentencia SQL para consultar todos los preguntas FAQ
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAllFAQ]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAllFAQ
END
GO
CREATE PROCEDURE dbo.usp_QueryAllFAQ AS
	BEGIN
		SELECT *
		FROM QUESTION
		WHERE FAQ='1'
	END
GO
-- Sentencia SQL para consultar todos los preguntas nuevas
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAllNewQuestions]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAllNewQuestions
END
GO
CREATE PROCEDURE dbo.usp_QueryAllNewQuestions AS
	BEGIN
		SELECT *
		FROM QUESTION
		WHERE FAQ='0' AND ANSWER = NULL -- las preguntas sin respuesta son nuevas
	END
GO
-- Sentencia SQL para consultar un respuesta por pregunta
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAnswerByQuestion]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAnswerByQuestion
END
GO
CREATE PROCEDURE dbo.usp_QueryAnswerByQuestion(
    @QUESTION         VARCHAR
) AS 
	BEGIN
		SELECT ANSWER  FROM QUESTION 
		WHERE QUESTION=@QUESTION
	END
GO
-- Sentencia SQL para anadir alarma
IF EXISTS(	SELECT *
			FROM sysobjects
			WHERE id = object_id (N'[dbo].[usp_AddWarning]')
				AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_AddWarning
END
GO
CREATE PROCEDURE dbo.usp_AddWarning(
	@START_DATE		DATETIME,
	@END_DATE		DATETIME,
	@WARNING_TYPE		CHAR(1) , 
	@DESCRIPTION		VARCHAR(500),
	@ZONE 			VARCHAR(50),
	@ACTIVE		VARCHAR(1),
	@ID         INT OUT 
) AS
  BEGIN
		INSERT INTO WARNING(START_DATE,END_DATE, WARNING_TYPE, DESCRIPTION, ZONE, ACTIVE)
		SELECT 	@START_DATE, @END_DATE, @WARNING_TYPE, @DESCRIPTION, @ZONE, @ACTIVE	
		SET @ID = SCOPE_IDENTITY()
	END
GO
-- Sentencia SQL para editar alarma
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_UpdateWarning]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_UpdateWarning
END
GO
CREATE PROCEDURE dbo.usp_UpdateWarning(
	@START_DATE		DATETIME,
	@END_DATE		DATETIME,
	@WARNING_TYPE		CHAR(1) , 
	@DESCRIPTION		VARCHAR(500),
	@ZONE 			VARCHAR(50),
	@ACTIVE		VARCHAR(1),
	@ID         INT OUT 
) AS
	BEGIN
		UPDATE WARNING 
		SET 	START_DATE=@START_DATE, END_DATE=@END_DATE, WARNING_TYPE=@WARNING_TYPE, DESCRIPTION=@DESCRIPTION, ZONE=@ZONE, ACTIVE=@ACTIVE	
		WHERE ID=@ID
	END
GO
-- Sentencia SQL para consultar todas alarma
IF EXISTS(  SELECT * 
			FROM sysobjects
			WHERE id = object_id(N'[dbo].[usp_QueryAllWarnings]')
			  AND OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
	DROP PROCEDURE [dbo].usp_QueryAllWarnings
END
GO
CREATE PROCEDURE dbo.usp_QueryAllWarnings AS
	BEGIN
		SELECT *
		FROM WARNING
	END
GO



