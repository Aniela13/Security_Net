#include "pch.h"

#include "SecurityController.h"

int SecurityController::Controller::ValidateAdmin(Administrator^ administrator)
{
	if (administrator->UserName == "user" && administrator->Password == "password") {
		return 1;
	}
	return 0;
}

int SecurityController::Controller::AddUser(SecurityOperator^ operador)
{
	try {
		operators->Add(operador);
		Persistance::PersistUsersTextFile(TXT_USERS_FILE_NAME,operators);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

int SecurityController::Controller::ValidateOperator(String^ OpUser, String^ OpPassword)
{
	for each (SecurityOperator ^ operador in operators)
	{
		if (operador->UserName == OpUser && operador->Password == OpPassword) {
			return 1;
		}
	}
	return 0;
}

int SecurityController::Controller::DeleteUser(SecurityOperator^ OpUser)
{
	for (int i = 0; i < operators->Count; i++)
	{
		if (operators[i]->UserName == OpUser->UserName) {
			operators->RemoveAt(i);
			Persistance::PersistUsersTextFile(TXT_USERS_FILE_NAME, operators);
			return 1;
		}
	}
	return 0;
}

SecurityOperator^ SecurityController::Controller::QueryOperatorByDNI(String^ operatorDNI)
{
	/*operators = (List<SecurityOperator^>^)Persistance::LoadUsersFromTextFile(TXT_USERS_FILE_NAME);
	for (int i = 0; i < operators->Count; i++) {
		if (operators[i]->DNI == username) {
			return operators[i];
		}
	}
	return nullptr;
	*/
	return Persistance::QueryOperatorByDNI(Convert::ToInt32(operatorDNI));
}

List<SecurityOperator^>^ SecurityController::Controller::QueryAllUsers(){
	try {
		
		operators = (List<SecurityOperator^>^)Persistance::LoadUsersFromTextFile(TXT_USERS_FILE_NAME);
		if (operators == nullptr)
			operators = gcnew List<SecurityOperator^>();
		return operators;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
	
}

int SecurityController::Controller::UpdateSecurityOperator(SecurityOperator^ operador)
{
	return Persistance::UpdateSecurityOperator(operador);
}


int SecurityController::Controller::AddQuestion(Question^ newquestion)
{
	for each (Question^ pregunta in questions){
		if (pregunta->question == newquestion->question) {
			return 0;
		}
	}
	try {
		questions->Add(newquestion);
		Persistance::PersistQuestionsTextFile(TXT_FAQ_FILE_NAME, questions);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;

}

void SecurityController::Controller::DeleteQuestion(String^ q)
{
	for (int i = 0; i < questions->Count; i++) {
		if (questions[i]->question == q) {
			questions->RemoveAt(i);
			Persistance::PersistQuestionsTextFile(TXT_FAQ_FILE_NAME, questions);
			
		}
	}
}

int SecurityController::Controller::UpdateQuestion(Question^ question)
{
	for (int i = 0; i < questions->Count; i++) {
		if (questions[i]->question == question->question) {
			questions[i] = question;
			Persistance::PersistQuestionsTextFile(TXT_FAQ_FILE_NAME, questions);
			return 1;
		}
	}
	return 0;
}

List<Question^>^ SecurityController::Controller::QueryAllFAQ()
{
	try {
		questions = (List<Question^>^)Persistance::LoadQuestionsFromTextFile(TXT_FAQ_FILE_NAME);
		if (questions == nullptr)
			questions = gcnew List<Question^>();
		return questions;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
}



List<String^>^ SecurityController::Controller::QueryAllOnlyQuestions()
{
	List<String^>^ onlyquestions = gcnew List<String^>();

	for (int i = 0; i < questions->Count; i++)
	{
		onlyquestions->Add(questions[i]->question);
	}
	return onlyquestions;
}

String^ SecurityController::Controller::QueryAnswerByQuestion(String^ question)
{
	for each (Question ^ q in questions)
	{
		if (q->question == question) {
			return q->Answer;
		}
	}
	return nullptr;
}

int SecurityController::Controller::AddWarning(Warning^ alarm)
{
	try {
		alarms->Add(alarm);
		Persistance::PersistAlarmTextFile(TXT_ALARM_HISTORIAL_FILE_NAME,alarms);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

int SecurityController::Controller::UpdateWarning(Warning^ warning)
{
	for (int i = 0; i < alarms->Count; i++) {
		if (alarms[i]->StartingDate == warning->StartingDate) {
			alarms[i] = warning;
			Persistance::PersistAlarmTextFile(TXT_ALARM_HISTORIAL_FILE_NAME, alarms);
			return 1;
		}
	}
	return 0;
}

List<Warning^>^ SecurityController::Controller::QueryAllWarnings()
{
	alarms = (List<Warning^>^)Persistance::LoadAlarmFromTextFile(TXT_ALARM_HISTORIAL_FILE_NAME);
	try{	
		if (alarms == nullptr) {
			alarms = gcnew List<Warning^>();
		}
		return alarms;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
}

List<WarningType^>^ SecurityController::Controller::QueryAllWarningsType()
{
	try {
		alarmtypes = (List<WarningType^>^)Persistance::LoadAlarmTypesFromTextFile(TXT_WARNING_TYPE_FILE_NAME);
		if (alarmtypes == nullptr)
			alarmtypes = gcnew List<WarningType^>();
	}
	catch (FileNotFoundException^ ex) {
		throw ex;
	}
	return alarmtypes;
}

WarningType^ SecurityController::Controller::QueryWarningTypeByName(String^ nametype)
{
	alarmtypes = QueryAllWarningsType();
	for (int i = 0; i < alarmtypes->Count; i++) {
		if (alarmtypes[i]->Name == nametype) {
			return alarmtypes[i];
		}
	}
	return nullptr;
}

WarningType^ SecurityController::Controller::QueryWarningTypeById(int id)
{
	alarmtypes = QueryAllWarningsType();
	for (int i = 0; i < alarmtypes->Count; i++) {
		if (alarmtypes[i]->Id == id) {
			return alarmtypes[i];
		}
	}
	return nullptr;
}



Queue<Warning^>^ SecurityController::Controller::QueryAllWarningsbyEmergencyButton()
{
	//Queue<Warning^>^ alarmsbyclient = gcnew Queue<Warning^>();
	try {
		for each (Warning ^ alarm in  alarms) {
			if (alarm->Description == "Por definir...") {
				alarmsbyclient->Enqueue(alarm);
			}
		}
		return alarmsbyclient;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
}

int SecurityController::Controller::AddOperatortoValidation(SecurityOperator^ operador)
{
	/*try {
		operadoresporvalidar->Add(operador);
		Persistance::PersistValidationOperatorsTextFile(TXT_REGISTRATION_OP_FILE_NAME, operadoresporvalidar);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
	*/
	return Persistance::AddOperator(operador);
}

void SecurityController::Controller::DeleteOperatortoValidation(String^ dni)
{
	for (int i = 0; i < operadoresporvalidar->Count; i++) {
		if (operadoresporvalidar[i]->DNI == dni) {
			operadoresporvalidar->RemoveAt(i);
			Persistance::PersistValidationOperatorsTextFile(TXT_REGISTRATION_OP_FILE_NAME, operadoresporvalidar);

		}
	}
}

SecurityOperator^ SecurityController::Controller::QueryNoOperatorbyDNI(String^ dni)
{
	/*for (int i = 0; i < operadoresporvalidar->Count; i++) {
		if (operadoresporvalidar[i]->DNI == dni) {
			return operadoresporvalidar[i];
		}
	}
	return nullptr;
	*/
	return Persistance::QueryNotAuthorizedOperatorByDNI(Convert::ToInt32(dni));
}

List<SecurityOperator^>^ SecurityController::Controller::QueryAllNoRegisteredOperators()
{
	/*try {
		operadoresporvalidar = (List<SecurityOperator^>^)Persistance::LoadValidationOperatorsFromTextFile(TXT_REGISTRATION_OP_FILE_NAME);
		if (operadoresporvalidar == nullptr)
			operadoresporvalidar = gcnew List<SecurityOperator^>();
		return operadoresporvalidar;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
	*/

	return Persistance::QueryAllNotAuthorizedOperators();
}

int SecurityController::Controller::AddNewQuestion(String^ newquestion)
{
	try {
		newquestions->Add(newquestion);
		Persistance::PersistNewQuestionsTextFile(TXT_NEW_QUESTION_FILE_NAME, newquestions);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
	
}

void SecurityController::Controller::DeleteNewQuestion(String^ newquestion)
{
	for (int i = 0; i < newquestions->Count; i++) {
		if (newquestions[i] == newquestion) {
			newquestions->RemoveAt(i);
			Persistance::PersistNewQuestionsTextFile(TXT_NEW_QUESTION_FILE_NAME, newquestions);

		}
	}
	
}

List<String^>^ SecurityController::Controller::QueryAllNewQuestions()
{
	try {
		newquestions = (List<String^>^)Persistance::LoadQuestionsFromTextFile(TXT_NEW_QUESTION_FILE_NAME);
		if (newquestions == nullptr)
			newquestions = gcnew List<String^>();
		return newquestions;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
}

int SecurityController::Controller::AddZoneMap(String^ namezone, Point^ coordenada)
{
	try {
		mallmap->Zones->Add(namezone, coordenada);
		Persistance::PersistBinaryFile(BINARY_MAP_ZONES_FILE_NAME, mallmap);
		return 1;
	}
	catch (FileNotFoundException^ ex) {
		throw ex;
	}
	return 0;
}

int SecurityController::Controller::UpdateZoneMap(String^ namezone, Point^ coordenada)
{
	// Buscar por nombre
	if (mallmap->Zones->ContainsKey(namezone)) {
		mallmap->Zones[namezone] = coordenada;
		Persistance::PersistBinaryFile(BINARY_MAP_ZONES_FILE_NAME, mallmap);
		return 1;
	}

	// Buscar por valor (coordenada)
	for each (KeyValuePair<String^, Point^> zona in mallmap->Zones) {
		if (zona.Value->X == coordenada->X && zona.Value->Y == coordenada->Y) {
			// Guardar el valor y eliminar la clave antigua
			mallmap->Zones->Remove(zona.Key);
			mallmap->Zones->Add(namezone, coordenada);
			Persistance::PersistBinaryFile(BINARY_MAP_ZONES_FILE_NAME, mallmap);
			return 1;
		}
	}

	// No se encontró ni nombre ni coordenada
	return 0;
}

int SecurityController::Controller::DeleteZoneMap(String^ namezone)
{

	if (mallmap->Zones->ContainsKey(namezone)) {
		mallmap->Zones->Remove(namezone);
		Persistance::PersistBinaryFile(BINARY_MAP_ZONES_FILE_NAME, mallmap);
		return 1;
	}
	return 0;

}

Dictionary<String^, Point^>^ SecurityController::Controller::QueryAllZones()
{

	try {
		mallmap = (MallMap^)Persistance::LoadBinaryFile(BINARY_MAP_ZONES_FILE_NAME);
		if (mallmap == nullptr) {
			mallmap = gcnew MallMap();
		}
		return mallmap->Zones;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;

}

Point^ SecurityController::Controller::QueryZonebyName(String^ namezone)
{

	try {
		Dictionary<String^, Point^>^ zones = QueryAllZones();
		if (zones != nullptr) {
			if (zones->ContainsKey(namezone)) {
				Point^ coordenada = zones[namezone];
				return coordenada ;
			}
			
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;

}

int SecurityController::Controller::AddRoute(Route^ route)
{
	try {
		routes->Add(route);
		Persistance::PersistBinaryFile(BINARY_ROUTE_ROBOT_FILE_NAME, routes);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Route^>^ SecurityController::Controller::QueryAllRoutes()
{
	routes = (List<Route^>^)Persistance::LoadBinaryFile(BINARY_ROUTE_ROBOT_FILE_NAME);
	if (routes == nullptr) {
		routes = gcnew List<Route^>();
	}
	return routes;
	
}

int SecurityController::Controller::GetLastRouteId()
{
	return QueryAllRoutes()->Count;
}

