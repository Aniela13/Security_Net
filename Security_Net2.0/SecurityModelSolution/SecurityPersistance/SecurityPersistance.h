#pragma once
#using <System.Web.Extensions.dll>
using namespace System;
using namespace System::Collections::Generic;
using namespace SecurityModel;
using namespace System::Data::SqlClient;
using namespace System::Net;
using namespace System::Threading::Tasks;
using namespace System::Web::Script::Serialization; // Para deserializar JSON


namespace SecurityPersistance {
	public ref class Persistance
	{
	private:
		static SqlConnection^ GetConnection();

	public:
		//Métodos para guardar y leer los datos de usuarios en archivos de texto plano
		static void PersistUsersTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadUsersFromTextFile(String^ fileName);

		//Métodos para guardar y leer los datos de registro de operadores por validar en archivos de texto plano
		static void PersistValidationOperatorsTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadValidationOperatorsFromTextFile(String^ fileName);

		//Métodos para guardar y leer los datos de historial de alarmas en archivos de texto plano
		static void PersistAlarmTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadAlarmFromTextFile(String^ fileName);

		//Métodos para guardar y leer los datos de FAQ en archivos de texto plano
		static void PersistQuestionsTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadQuestionsFromTextFile(String^ fileName);

		//Métodos para guardar y leer las nuevas preguntas en archivos de texto plano
		static void PersistNewQuestionsTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadNewQuestionsFromTextFile(String^ fileName);
        

		//Metodo para leer los tipos de alarmas en archivo de texto plano
		static Object^ LoadAlarmTypesFromTextFile(String^ fileName);

		//Metodo para guardar y leer las zonas del mapa en archivo binarios
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		//------- PROGRAMACIÓN CON BASE DE DATOS ------
		static SecurityOperator^ ValidateOperator(String^ username, String^ password);
		static int AddOperator(SecurityOperator^ operador); //Añaddir Operador (no validado)
		static SecurityOperator^ QueryOperatorByDNI(String^ operatorDNI);    //Consultar un operador por DNI (autorizado)
		static SecurityOperator^ QueryNotAuthorizedOperatorByDNI(String^ operatorDNI);    //Consultar un operador por DNI (no autorizado)
		static int UpdateSecurityOperator(SecurityOperator^ operador);
		static List<SecurityOperator^>^ QueryAllNotAuthorizedOperators();
		static List<SecurityOperator^>^ QueryAllOperators();          //Consultar todos los operadores (autorizados)
	    //--------COMBOBOX ACTUALIZADOS------------------------------
		static List<Tuple<String^, String^>^>^ QueryDocumentTypes();
		static List<WarningType^>^ QueryWarningTypes();
		static WarningType^ QueryWarningTypebyId(int id);

		// -------- WARNINGS --------------
		static int AddWarning(Warning^ warning);
		static int UpdateWarning(Warning^ warning);
		static List<Warning^>^ QueryAllWarnings();
		static List<Warning^>^ QueryAllWarningsbydate(DateTime start, DateTime end);
		static List<Warning^>^ QueryAllWarningsbytype(int id);
		static List<Warning^>^ QueryActivatedWarnings();
		// ---------QUESTIONS -----------
		static int AddQuestion(Question^ question);
		static List<Question^>^ QueryAllFAQ();
		static List<Question^>^ QueryAllNewQuestions();
		static Question^ QueryByQuestion(String^ question);  //Obtener respuesta por pregunta
		static Question^ QueryById(int question_id);
		static int DeleteQuestion(int questionId);
		static int UpdateQuestion(Question^ question);
		//-------CAMERA ------------------
		static array<Byte>^ GetImageFromCamara(String^ url); // me devolvera en bytes la imagen
		static void InsertarImagenEnSQL(String^ rutaImagen);
		
		//-----ROBOT---------
		static int AddRobot(SecurityBot^ robot);
		static List<SecurityBot^>^ QueryAllRobots();
		static SecurityBot^ QueryRobotById(int robotId);
		//------zonas
		static int AddPoint(Point^ p);
		static int AddZone(Zona^ z);
		static List<Zona^>^ QueryAllZonas();
	};
}