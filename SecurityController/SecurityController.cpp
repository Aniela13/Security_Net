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

SecurityOperator^ SecurityController::Controller::QueryUserbyUsername(String^ username)
{
	for (int i = 0; i < operators->Count; i++) {
		if (operators[i]->DNI == username) {
			return operators[i];
		}
	}
	return nullptr;
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

int SecurityController::Controller::AddOperatortoValidation(SecurityOperator^ operador)
{
	try {
		operadoresporvalidar->Add(operador);
		Persistance::PersistValidationOperatorsTextFile(TXT_REGISTRATION_OP_FILE_NAME, operadoresporvalidar);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
	
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
	for (int i = 0; i < operadoresporvalidar->Count; i++) {
		if (operadoresporvalidar[i]->DNI == dni) {
			return operadoresporvalidar[i];
		}
	}
	return nullptr;
	
}

List<SecurityOperator^>^ SecurityController::Controller::QueryAllNoRegisteredOperators()
{
	try {
		operadoresporvalidar = (List<SecurityOperator^>^)Persistance::LoadValidationOperatorsFromTextFile(TXT_REGISTRATION_OP_FILE_NAME);
		if (operadoresporvalidar == nullptr)
			operadoresporvalidar = gcnew List<SecurityOperator^>();
		return operadoresporvalidar;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
	
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

void SecurityController::Controller::DeleteNewQuestion(String^ question)
{
	for (int i = 0; i < newquestions->Count; i++) {
		if (newquestions[i] == question) {
			newquestions->RemoveAt(i);
			Persistance::PersistNewQuestionsTextFile(TXT_NEW_QUESTION_FILE_NAME, newquestions);

		}
	}
	
}

List<Question^>^ SecurityController::Controller::QueryAllNewQuestions()
{
	try {
		newquestions = (List<String^>^)Persistance::LoadQuestionsFromTextFile(TXT_NEW_QUESTION_FILE_NAME);
		if (questions == nullptr)
			questions = gcnew List<Question^>();
		return questions;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return nullptr;
}
