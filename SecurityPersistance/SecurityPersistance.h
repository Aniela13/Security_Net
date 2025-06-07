#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SecurityModel;


namespace SecurityPersistance {
	public ref class Persistance
	{
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

	

	};
}