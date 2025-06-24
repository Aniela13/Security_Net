#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace SecurityModel;
using namespace SecurityPersistance;


namespace SecurityController {
	public ref class Controller
	{
	private:
		static Administrator^ administrator = gcnew Administrator();   //Administrador
		static List<SecurityOperator^>^ operators = gcnew List<SecurityOperator^>();  // Lista de operadores
		static List<Question^>^ questions = gcnew List<Question^>();
		static List <Warning^>^ alarms = gcnew List <Warning^>();
		static List <WarningType^>^ alarmtypes = gcnew List <WarningType^>();
		static List<SecurityOperator^>^ operadoresporvalidar = gcnew List<SecurityOperator^>();
		static List<String^>^ newquestions = gcnew  List<String^>();
		static Queue<Warning^>^ alarmsbyclient = gcnew Queue<Warning^>();
		static MallMap^ mallmap = gcnew MallMap();
		//static MallMap^ mallmap = gcnew MallMap(0, "Piso 1", "Plaza San Miguel");
		static List<Route^>^ routes = gcnew List<Route^>();
	
	public:
		static String^ TXT_USERS_FILE_NAME = "usuarios.txt";
		static String^ TXT_REGISTRATION_OP_FILE_NAME = "registrooperadores.txt";
		static String^ TXT_FAQ_FILE_NAME = "preguntasfrecuentes.txt";
		static String^ TXT_NEW_QUESTION_FILE_NAME = "preguntasnuevas.txt";
		static String^ TXT_ALARM_HISTORIAL_FILE_NAME = "alarmas.txt";
		static String^ BINARY_MAP_ZONES_FILE_NAME = "mapa.bin";//Agregar para el mapa 
		static String^ TXT_WARNING_TYPE_FILE_NAME = "tiposdealarmas.txt";
		static String^ BINARY_ROUTE_ROBOT_FILE_NAME = "rutas.bin";//Agregar ruta al robot
	
	public:
		/*-------VALIDATE ADMINISTRADOR-------*/
		static int ValidateAdmin(Administrator^ administrator);

		/*-------VALIDATE OPERADOR-------*/                 
		static int AddUser(SecurityOperator^ operador);              //         
		static int ValidateOperator(String^ OpUser, String^ OpPassword);     
		static int DeleteUser(SecurityOperator^ OpUser);
		static SecurityOperator^ QueryOperatorByDNI(String^ operatorDNI);      //L
		static List<SecurityOperator^>^ QueryAllUsers();
		static int UpdateSecurityOperator(SecurityOperator^ operador);

		/*-------CRUD PREGUNTAS FRECUENTES-------*/
		static int AddQuestion(Question^ newquestion);
		static int DeleteQuestion(int questionId);
		static int UpdateQuestion(Question^ question);
		static List<Question^>^ QueryAllFAQ(); 
		static List<String^>^ QueryAllOnlyQuestions();
		static String^ QueryAnswerByQuestion(String^ question);  //Obtener respuesta por pregunta
		


		/*-------CRUD HISTORIAL DE ALARMAS-------*/
		static int AddWarning(Warning^ alarm);
		static int UpdateWarning(Warning^ warning);
		static List<Warning^>^ QueryAllWarnings();
		static List<WarningType^>^ QueryAllWarningsType();
		static WarningType^ QueryWarningTypeByName(String^ nametype);
		static WarningType^ QueryWarningTypeById(int id);
		static Queue<Warning^>^ QueryAllWarningsbyEmergencyButton();


		/*-------REGISTER OPERADOR-------*/
		static int AddOperatortoValidation(SecurityOperator^ operador);  //-------------AddOperator (sin validar)
		static int DeleteOperatortoValidation(SecurityOperator^ operadori);
		static SecurityOperator^ QueryNoOperatorbyDNI(String^ dni);      //-------------QueryNotAuthorizedOperatorByDNI
		static List<SecurityOperator^>^ QueryAllNoRegisteredOperators();   //

		/*------SISTEMA DE PREGUNTAS NUEVAS-----*/ //interacción operador y cliente
		static int AddNewQuestion(Question^ newquestion); 
		static int DeleteNewQuestion(int questionId);

		/*------CRUD MAPA y transaccciones-----*/ //interacción operador y cliente
		static int AddZoneMap(String^ namezone, Point^ coordenada);
		static int UpdateZoneMap(String^ namezone, Point^ coordenada);
		static int DeleteZoneMap(String^ namezone);
		static Dictionary<String^, Point^>^ QueryAllZones();
		static Point^ QueryZonebyName(String^ namezone);

		/*---------SISTEMA DE ASIGNACIÓN DE RUTAS-----*/
		static int AddRoute(Route^ route);
		static List<Route^>^ QueryAllRoutes();
		static int GetLastRouteId();

	};
}