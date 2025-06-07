#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SecurityModel;
using namespace SecurityPersistance;


namespace SecurityController {
	public ref class Controller
	{
	public:
		static String^ TXT_USERS_FILE_NAME = "usuarios.txt";
		static String^ TXT_REGISTRATION_OP_FILE_NAME = "registrooperadores.txt";
		static String^ TXT_FAQ_FILE_NAME = "preguntasfrecuentes.txt";
		static String^ TXT_NEW_QUESTION_FILE_NAME = "preguntasnuevas.txt";
		static String^ TXT_ALARM_HISTORIAL_FILE_NAME = "alarmas.txt";
		static String^ TXT_MAPS_ZONES_FILE_NAME = "zonas.txt";//Agregar para el mapa 



	private:
		static Administrator^ administrator = gcnew Administrator();   //Administrador
		static List<SecurityOperator^>^ operators = gcnew List<SecurityOperator^>();  // Lista de operadores
		static List<Question^>^ questions = gcnew List<Question^>();
		static List <Warning^>^ alarms = gcnew List <Warning^>();
		static List<SecurityOperator^>^ operadoresporvalidar = gcnew List<SecurityOperator^>();
		static List<String^>^ newquestions = gcnew  List<String^>();

	public:
		/*-------VALIDATE ADMINISTRADOR-------*/
		static int ValidateAdmin(Administrator^ administrator);

		/*-------VALIDATE OPERADOR-------*/
		static int AddUser(SecurityOperator^ operador);
		static int ValidateOperator(String^ OpUser, String^ OpPassword);
		static int DeleteUser(SecurityOperator^ OpUser);
		static SecurityOperator^ QueryUserbyUsername(String^ username);
		static List<SecurityOperator^>^ QueryAllUsers();

		/*-------CRUD PREGUNTAS FRECUENTES-------*/
		static int AddQuestion(Question^ newquestion);
		static void DeleteQuestion(String^ q);
		static int UpdateQuestion(Question^ question);
		static List<Question^>^ QueryAllFAQ(); 
		static List<String^>^ QueryAllOnlyQuestions();
		static String^ QueryAnswerByQuestion(String^ question);  //Obtener respuesta por pregunta


		/*-------CRUD HISTORIAL DE ALARMAS-------*/
		static int AddWarning(Warning^ alarm);
		static List<Warning^>^ QueryAllWarnings();

		/*-------REGISTER OPERADOR-------*/
		static int AddOperatortoValidation(SecurityOperator^ operador);
		static void DeleteOperatortoValidation(String^ dni);
		static SecurityOperator^ QueryNoOperatorbyDNI(String^ dni);
		static List<SecurityOperator^>^ QueryAllNoRegisteredOperators(); 

		/*------SISTEMA DE PREGUNTAS NUEVAS-----*/ //interacción operador y cliente
		static int AddNewQuestion(String^ newquestion); 
		static void DeleteNewQuestion(String^ question);
		static List<Question^>^ QueryAllNewQuestions();
	};


}