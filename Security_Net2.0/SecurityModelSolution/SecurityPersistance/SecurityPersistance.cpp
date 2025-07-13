#include "pch.h"
#include "SecurityPersistance.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Net;
using namespace System::Data;
using namespace System::Data::SqlClient;


SqlConnection^ SecurityPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "u9k6uquqBFfX$"; 
    String^ serverName = "200.16.7.140";
    conn->ConnectionString = "Server=" + serverName + ";Database = a20221662;User ID = a20221662; Password = " +
        password + ";";
    conn->Open();
    return conn;
}

void SecurityPersistance::Persistance::PersistUsersTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        List<SecurityOperator^>^ operators = (List<SecurityOperator^>^) persistObject;
        for (int i = 0; i < operators->Count; i++) {
             SecurityOperator^ op = operators[i];
             writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}", op->Name, op->LastName, op->DNI, op->Password, op->Authorized, op->HelpNeeded);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

Object^ SecurityPersistance::Persistance::LoadUsersFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<SecurityOperator^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            SecurityOperator^ op = gcnew SecurityOperator(record[0], record[1], record[2], record[3], Boolean::Parse(record[4]), Boolean::Parse(record[5]));
            ((List<SecurityOperator^>^)result)->Add(op);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

void SecurityPersistance::Persistance::PersistValidationOperatorsTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        List<SecurityOperator^>^ operadoresporvalidar = (List<SecurityOperator^>^) persistObject;
        for (int i = 0; i < operadoresporvalidar->Count; i++) {
            SecurityOperator^ op = operadoresporvalidar[i];
            writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}", op->Name, op->LastName, op->DNI, op->Password, op->Authorized, op->HelpNeeded);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }


}

Object^ SecurityPersistance::Persistance::LoadValidationOperatorsFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<SecurityOperator^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            SecurityOperator^ op = gcnew SecurityOperator(record[0], record[1], record[2], record[3], Boolean::Parse(record[4]), Boolean::Parse(record[5]));
            ((List<SecurityOperator^>^)result)->Add(op);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
    
}

void SecurityPersistance::Persistance::PersistAlarmTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        List<Warning^>^ alarms = (List<Warning^>^) persistObject;
        for (int i = 0; i < alarms->Count; i++) {
            Warning^ warning = alarms[i];
            writer->WriteLine("{0}|{1}|{2}|{3}", warning->StartingDate, warning->EndingDate, warning->Type, warning->Description);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
    
}

Object^ SecurityPersistance::Persistance::LoadAlarmFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Warning^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            String^ type;
            type = record[2];
            //Warning^ al = gcnew Warning(DateTime::Parse(record[0]), DateTime::Parse(record[1]), type, record[3]);
            //((List<Warning^>^)result)->Add(al);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
    
}

void SecurityPersistance::Persistance::PersistQuestionsTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        if (persistObject->GetType() == List<Question^>::typeid) {
            List<Question^>^ qsts = (List<Question^>^) persistObject;
            for (int i = 0; i < qsts->Count; i++) {
                Question^ qst = qsts[i];
                writer->WriteLine("{0}|{1}",
                    qst->question, qst->Answer);
            }
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

Object^ SecurityPersistance::Persistance::LoadQuestionsFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Question^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            Question^ qst = nullptr;
           // qst = gcnew Question(record[0], record[1]);
           // ((List<Question^>^)result)->Add(qst);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

void SecurityPersistance::Persistance::PersistNewQuestionsTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        if (persistObject->GetType() == List<String^>::typeid) {
            List<String^>^ newqsts = (List<String^>^) persistObject;
            for (int i = 0; i < newqsts->Count; i++) {
                String^ newqst = newqsts[i];
                writer->WriteLine("{0}",
                    newqst);
            }
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

Object^ SecurityPersistance::Persistance::LoadNewQuestionsFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<Question^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            String^ newqst = nullptr;
            newqst = gcnew String(record[0]);
            ((List<String^>^)result)->Add(newqst);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

Object^ SecurityPersistance::Persistance::LoadAlarmTypesFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = gcnew List<WarningType^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            if (record->Length >= 3) {
                WarningType^ typealarm = gcnew WarningType(); // CORREGIDO
                typealarm->Id = Convert::ToInt32(record[0]);
                typealarm->Name = record[1];
                typealarm->Description = record[2];
                ((List<WarningType^>^)result)->Add(typealarm);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}
void SecurityPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        if (file != nullptr) file->Close();
        delete file;
    }
}

Object^ SecurityPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
        delete file;
    }
    return result;
}

SecurityOperator^ SecurityPersistance::Persistance::ValidateOperator(String^ username, String^ password)
{
    SecurityOperator^ operador;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_ValidateOperator";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
     
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = username;
        cmd->Parameters["@PASSWORD"]->Value = password;
        //Paso 3: Se ejecuta la sentencia
        reader = cmd->ExecuteReader();
        //Paso 4: Se procesa los resultados
        if (reader->Read()) {
            operador = gcnew SecurityOperator();
            operador->Id = Convert::ToInt32(reader["ID"]->ToString());
            operador->UserName = reader["USERNAME"]->ToString();
            operador->Password = reader["PASSWORD"]->ToString();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->Status = reader["STATUS"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->Document_Type = reader["DOCUMENT_TYPE"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Trim()->Equals("SI") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            if (!DBNull::Value->Equals(reader["BIRTHDAY"]))
                operador->BirthDay = Convert::ToDateTime(reader["BIRTHDAY"]);
            operador->Address = reader["ADDRESS"]->ToString();
            operador->Gender = reader["GENDER"]->ToString();
            operador->Phone_Number = reader["PHONE_NUMBER"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operador->Photo = (array<Byte>^)reader["PHOTO"];
            if (!DBNull::Value->Equals(reader["SALARY"]))
                operador->Salary = Convert::ToDouble(reader["SALARY"]);
            if (!DBNull::Value->Equals(reader["EMAIL"]))
                operador->Email = Convert::ToString(reader["EMAIL"]);
            if (!DBNull::Value->Equals(reader["HIRE_DATE"]))
                operador->Hire_Date = Convert::ToDateTime(reader["HIRE_DATE"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return operador;

}

int SecurityPersistance::Persistance::AddOperator(SecurityOperator^ operador)
{
    int userId=0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddOperator";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@AUTHORIZED", System::Data::SqlDbType::Char, 3);
        cmd->Parameters->Add("@HELPNEEDED", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@DOCUMENT_TYPE", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@BIRTHDAY", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@ADDRESS", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@SALARY", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALARY"]->Precision = 10;
        cmd->Parameters["@SALARY"]->Scale = 2;
        cmd->Parameters->Add("@SCHEDULE", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@HIRE_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 2);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = operador->Name;
        cmd->Parameters["@LASTNAME"]->Value = operador->LastName;
        cmd->Parameters["@DNI"]->Value = operador->DNI;
        cmd->Parameters["@USERNAME"]->Value = operador->UserName;
        cmd->Parameters["@PASSWORD"]->Value = operador->Password;
        cmd->Parameters["@AUTHORIZED"]->Value = operador->Authorized ? "SI" : "NO";
        cmd->Parameters["@HELPNEEDED"]->Value = operador->HelpNeeded ? "S" : "N";
        cmd->Parameters["@DOCUMENT_TYPE"]->Value = operador->Document_Type;
        if (operador->BirthDay == nullptr)
            cmd->Parameters["@BIRTHDAY"]->Value = DBNull::Value;
        else
            cmd->Parameters["@BIRTHDAY"]->Value = operador->BirthDay;

        if (operador->Address == nullptr)
            cmd->Parameters["@ADDRESS"]->Value = DBNull::Value;
        else
            cmd->Parameters["@ADDRESS"]->Value = operador->Address;

        if (operador->Gender == nullptr)
            cmd->Parameters["@GENDER"]->Value = DBNull::Value;
        else
            cmd->Parameters["@GENDER"]->Value = operador->Gender;

        if (operador->Phone_Number == nullptr)
            cmd->Parameters["@PHONE_NUMBER"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHONE_NUMBER"]->Value = operador->Phone_Number;
        if (operador->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = operador->Photo;

        if (operador->Salary == nullptr)
            cmd->Parameters["@SALARY"]->Value = DBNull::Value;
        else
            cmd->Parameters["@SALARY"]->Value = operador->Salary;

        if (operador->Schedule == nullptr)
            cmd->Parameters["@SCHEDULE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@SCHEDULE"]->Value = operador->Schedule;
        
        if (operador->Hire_Date == nullptr)
            cmd->Parameters["@HIRE_DATE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@HIRE_DATE"]->Value = operador->Hire_Date;

        if (operador->Email == nullptr)
            cmd->Parameters["@EMAIL"]->Value = DBNull::Value;
        else
            cmd->Parameters["@EMAIL"]->Value = operador->Email;
        cmd->Parameters["@STATUS"]->Value = operador->Status;
        
        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados
        userId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return userId;
}

SecurityOperator^ SecurityPersistance::Persistance::QueryOperatorByDNI(String^ operatorDNI)
{
    SecurityOperator^ operador;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryOperatorByDNI";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 10);
        cmd->Prepare();
        cmd->Parameters["@DNI"]->Value = operatorDNI;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            operador = gcnew SecurityOperator();
            operador->Id = Convert::ToInt32(reader["ID"]->ToString());
            operador->UserName = reader["USERNAME"]->ToString();
            operador->Password = reader["PASSWORD"]->ToString();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->Status = reader["STATUS"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->Document_Type = reader["DOCUMENT_TYPE"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Equals("SI") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            if (!DBNull::Value->Equals(reader["BIRTHDAY"]))
                operador->BirthDay = Convert::ToDateTime(reader["BIRTHDAY"]);
            operador->Address = reader["ADDRESS"]->ToString();
            operador->Gender = reader["GENDER"]->ToString();
            operador->Phone_Number = reader["PHONE_NUMBER"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operador->Photo = (array<Byte>^)reader["PHOTO"];
            if (!DBNull::Value->Equals(reader["SALARY"]))
                operador->Salary = Convert::ToDouble(reader["SALARY"]);
            if (!DBNull::Value->Equals(reader["EMAIL"]))
                operador->Email = Convert::ToString(reader["EMAIL"]);
            if (!DBNull::Value->Equals(reader["HIRE_DATE"]))
                operador->Hire_Date = Convert::ToDateTime(reader["HIRE_DATE"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return operador;
}

SecurityOperator^ SecurityPersistance::Persistance::QueryNotAuthorizedOperatorByDNI(String^ operatorDNI)
{
    SecurityOperator^ operador;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryNotAuthorizedOperatorByDNI";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar,10);
        cmd->Prepare();
        cmd->Parameters["@DNI"]->Value = operatorDNI;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            operador = gcnew SecurityOperator();
            operador->Id = Convert::ToInt32(reader["ID"]->ToString());
            operador->UserName = reader["USERNAME"]->ToString();
            operador->Password = reader["PASSWORD"]->ToString();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->Status = reader["STATUS"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->Document_Type = reader["DOCUMENT_TYPE"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Equals("SI") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            if (!DBNull::Value->Equals(reader["BIRTHDAY"]))
                operador->BirthDay = Convert::ToDateTime(reader["BIRTHDAY"]);
            operador->Address = reader["ADDRESS"]->ToString();
            operador->Gender = reader["GENDER"]->ToString();
            operador->Phone_Number = reader["PHONE_NUMBER"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operador->Photo = (array<Byte>^)reader["PHOTO"];
            if (!DBNull::Value->Equals(reader["SALARY"]))
                operador->Salary = Convert::ToDouble(reader["SALARY"]);
            if (!DBNull::Value->Equals(reader["EMAIL"]))
                operador->Email = Convert::ToString(reader["EMAIL"]);
            if (!DBNull::Value->Equals(reader["HIRE_DATE"]))
                operador->Hire_Date = Convert::ToDateTime(reader["HIRE_DATE"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return operador;
}

int SecurityPersistance::Persistance::UpdateSecurityOperator(SecurityOperator^ operador)
{
    int res = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateSecurityOperator";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@AUTHORIZED", System::Data::SqlDbType::Char, 3);
        cmd->Parameters->Add("@HELPNEEDED", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@DOCUMENT_TYPE", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@BIRTHDAY", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@ADDRESS", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@SALARY", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALARY"]->Precision = 10;
        cmd->Parameters["@SALARY"]->Scale = 2;
        cmd->Parameters->Add("@SCHEDULE", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@HIRE_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 2);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = operador->Id;
        cmd->Parameters["@NAME"]->Value = operador->Name;
        cmd->Parameters["@LASTNAME"]->Value = operador->LastName;
        cmd->Parameters["@DNI"]->Value = operador->DNI;
        cmd->Parameters["@USERNAME"]->Value = operador->UserName;
        cmd->Parameters["@PASSWORD"]->Value = operador->Password;
        cmd->Parameters["@AUTHORIZED"]->Value = operador->Authorized ? "SI" : "NO";
        cmd->Parameters["@HELPNEEDED"]->Value = operador->HelpNeeded ? "S" : "N";
        cmd->Parameters["@DOCUMENT_TYPE"]->Value = operador->Document_Type;
        if (operador->BirthDay == nullptr)
            cmd->Parameters["@BIRTHDAY"]->Value = DBNull::Value;
        else
            cmd->Parameters["@BIRTHDAY"]->Value = operador->BirthDay;

        if (operador->Address == nullptr)
            cmd->Parameters["@ADDRESS"]->Value = DBNull::Value;
        else
            cmd->Parameters["@ADDRESS"]->Value = operador->Address;

        if (operador->Gender == nullptr)
            cmd->Parameters["@GENDER"]->Value = DBNull::Value;
        else
            cmd->Parameters["@GENDER"]->Value = operador->Gender;

        if (operador->Phone_Number == nullptr)
            cmd->Parameters["@PHONE_NUMBER"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHONE_NUMBER"]->Value = operador->Phone_Number;

        if (operador->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = operador->Photo;

        if (operador->Salary == nullptr)
            cmd->Parameters["@SALARY"]->Value = DBNull::Value;
        else
            cmd->Parameters["@SALARY"]->Value = operador->Salary;

        if (operador->Schedule == nullptr)
            cmd->Parameters["@SCHEDULE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@SCHEDULE"]->Value = operador->Schedule;

        if (operador->Hire_Date == nullptr)
            cmd->Parameters["@HIRE_DATE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@HIRE_DATE"]->Value = operador->Hire_Date;

        if (operador->Email == nullptr)
            cmd->Parameters["@EMAIL"]->Value = DBNull::Value;
        else
            cmd->Parameters["@EMAIL"]->Value = operador->Email;
        cmd->Parameters["@STATUS"]->Value = operador->Status;
        

        //Paso 3: Se ejecuta las sentncia SQL
        res= cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return res;
}

List<SecurityOperator^>^ SecurityPersistance::Persistance::QueryAllNotAuthorizedOperators()
{
    List<SecurityOperator^>^ operadoresList = gcnew List<SecurityOperator^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllNotAuthorizedOperators";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            SecurityOperator^ operador = gcnew SecurityOperator();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->UserName = reader["USERNAME"]->ToString();
            operador->Password = reader["PASSWORD"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Equals("SI") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            operador->Document_Type = reader["DOCUMENT_TYPE"]->ToString();
            if (!DBNull::Value->Equals(reader["BIRTHDAY"]))
                operador->BirthDay = Convert::ToDateTime(reader["BIRTHDAY"]);
            operador->Address = reader["ADDRESS"]->ToString();
            operador->Gender = reader["GENDER"]->ToString();
            operador->Phone_Number = reader["PHONE_NUMBER"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operador->Photo = (array<Byte>^)reader["PHOTO"];
            operador->Schedule = reader["SCHEDULE"]->ToString();
            if (!DBNull::Value->Equals(reader["HIRE_DATE"]))
                operador->Hire_Date = Convert::ToDateTime(reader["HIRE_DATE"]);
            operador->Email = reader["EMAIL"]->ToString();
            operador->Status = reader["STATUS"]->ToString();
            operador->Id = Convert::ToInt32(reader["ID"]->ToString());

            operadoresList->Add(operador);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return operadoresList;
}

List<SecurityOperator^>^ SecurityPersistance::Persistance::QueryAllOperators()
{
    List<SecurityOperator^>^ operadoresList = gcnew List<SecurityOperator^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllOperators";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            SecurityOperator^ operador = gcnew SecurityOperator();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Equals("SI") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            operador->UserName = reader["USERNAME"]->ToString();
            if (!DBNull::Value->Equals(reader["BIRTHDAY"]))
                operador->BirthDay = Convert::ToDateTime(reader["BIRTHDAY"]);
            operador->Address = reader["ADDRESS"]->ToString();
            operador->Gender = reader["GENDER"]->ToString();
            operador->Phone_Number = reader["PHONE_NUMBER"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operador->Photo = (array<Byte>^)reader["PHOTO"];
            operador->Salary = Convert::ToDouble(reader["SALARY"]->ToString());
            operador->Schedule = reader["SCHEDULE"]->ToString();
            if (!DBNull::Value->Equals(reader["HIRE_DATE"]))
                operador->Hire_Date = Convert::ToDateTime(reader["HIRE_DATE"]);
            operador->Email = reader["EMAIL"]->ToString();
            operador->Id = Convert::ToInt32(reader["ID"]->ToString());

            operadoresList->Add(operador);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return operadoresList;
}

List<Tuple<String^, String^>^>^ SecurityPersistance::Persistance::QueryDocumentTypes()
{
    List<Tuple<String^, String^>^>^ lista = gcnew List<Tuple<String^, String^>^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllDocumentTypes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            String^ id = reader["ID_TYPE"]->ToString();
            String^ name = reader["NAME_TYPE"]->ToString();
            Tuple<String^, String^>^ tipo = gcnew Tuple<String^, String^>(id, name);
            lista->Add(tipo);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return lista;
}

List<WarningType^>^ SecurityPersistance::Persistance::QueryWarningTypes()
{
    List<WarningType^>^ wtypes = gcnew List<WarningType^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllWarningTypes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            WarningType^ type = gcnew WarningType();

            type->Id = Convert::ToInt32(reader["ID"]->ToString());
            type->Name = reader["NAME"]->ToString();
            type->Description = reader["DESCRIPTION"]->ToString();
            wtypes->Add(type);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return wtypes;
}

WarningType^ SecurityPersistance::Persistance::QueryWarningTypebyId(int id)
{
    WarningType^ type;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryWarningTypebyId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = id;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            type = gcnew WarningType();
            type->Id = Convert::ToInt32(reader["ID"]->ToString());
            type->Name = reader["NAME"]->ToString();
            type->Description = reader["DESCRIPTION"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return type;
}

int SecurityPersistance::Persistance::AddWarning(Warning^ warning)
{
    int warningId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddWarning";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@START_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@END_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@WARNING_TYPE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@ZONE", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@ACTIVE", System::Data::SqlDbType::VarChar, 3);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@START_DATE"]->Value = warning->StartingDate;
        cmd->Parameters["@END_DATE"]->Value = warning->EndingDate;
        cmd->Parameters["@WARNING_TYPE"]->Value = warning->Type->Id;
        cmd->Parameters["@DESCRIPTION"]->Value = warning->Description;
        cmd->Parameters["@ZONE"]->Value = warning->Zone;
        cmd->Parameters["@ACTIVE"]->Value = warning->Active ? "SI" : "NO";

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
        warningId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return warningId;
}

int SecurityPersistance::Persistance::UpdateWarning(Warning^ warning)
{
    int res = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateWarning";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@START_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@END_DATE", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@WARNING_TYPE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@ZONE", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@ACTIVE", System::Data::SqlDbType::VarChar, 3);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = warning->Id;
        cmd->Parameters["@START_DATE"]->Value = warning->StartingDate;
        cmd->Parameters["@END_DATE"]->Value = warning->EndingDate;
        cmd->Parameters["@WARNING_TYPE"]->Value = warning->Type->Id;
        cmd->Parameters["@DESCRIPTION"]->Value = warning->Description;
        cmd->Parameters["@ZONE"]->Value = warning->Zone;
        cmd->Parameters["@ACTIVE"]->Value = warning->Active ? "SI" : "NO";

        //Paso 3: Se ejecuta las sentncia SQL
        res =cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return res;
}

List<Warning^>^ SecurityPersistance::Persistance::QueryAllWarnings()
{
    List<Warning^>^ warningsList = gcnew List<Warning^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllRobotWaiters";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Warning^ warning = gcnew Warning();
            warning->Id = Convert::ToInt32(reader["ID"]->ToString());
            warning->StartingDate = Convert::ToDateTime(reader["START_DATE"]);
            warning->EndingDate = Convert::ToDateTime(reader["END_DATE"]);
            warning->Type->Name= reader["WARNING_TYPE"]->ToString();
            warning->Description = reader["DESCRIPTION"]->ToString();
            warning->Zone = reader["ZONE"]->ToString();
            warning->Active = Convert::ToBoolean(reader["ACTIVE"]);
            /*   if (!DBNull::Value->Equals(reader["PURCHASE_DATE"]))
                   robot->PurchaseDate = Convert::ToDateTime(reader["PURCHASE_DATE"]);
               if (!DBNull::Value->Equals(reader["PHOTO"]))
                   robot->Photo = (array<Byte>^)reader["PHOTO"];*/
            warningsList->Add(warning);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return warningsList;
}

List<Warning^>^ SecurityPersistance::Persistance::QueryAllWarningsbydate(DateTime start, DateTime end)
{
    List<Warning^>^ warningsList = gcnew List<Warning^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllWarningsbyDate";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@start", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@end", System::Data::SqlDbType::DateTime);
        cmd->Prepare();
        cmd->Parameters["@start"]->Value = start;
        cmd->Parameters["@end"]->Value = end;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Warning^ warning = gcnew Warning();
            WarningType^ type = gcnew WarningType();
            // Asignar datos de WARNING
            warning->Id = Convert::ToInt32(reader["ID"]);
            warning->StartingDate = Convert::ToDateTime(reader["START_DATE"]);
            warning->EndingDate = Convert::ToDateTime(reader["END_DATE"]);
            warning->Description = reader["WARNING_DESCRIPTION"]->ToString();
            warning->Zone = reader["ZONE"]->ToString();
            warning->Active = reader["ACTIVE"]->ToString()->Trim()->ToUpper()->Equals("SI") ? true : false;

            // Asignar datos del tipo de warning (instanciarlo primero)
            type->Id = Convert::ToInt32(reader["WARNING_TYPE_ID"]);
            type->Name = reader["WARNING_TYPE_NAME"]->ToString();
            type->Description = reader["WARNING_TYPE_DESCRIPTION"]->ToString();
            warning->Type = type;
            // Agregar a la lista
            warningsList->Add(warning);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return warningsList;
}

List<Warning^>^ SecurityPersistance::Persistance::QueryAllWarningsbytype(int id)
{
    List<Warning^>^ warningsList = gcnew List<Warning^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllWarningsbyType";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id_type", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id_type"]->Value = id;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Warning^ warning = gcnew Warning();
            WarningType^ type = gcnew WarningType();
            // Asignar datos de WARNING
            warning->Id = Convert::ToInt32(reader["ID"]);
            warning->StartingDate = Convert::ToDateTime(reader["START_DATE"]);
            warning->EndingDate = Convert::ToDateTime(reader["END_DATE"]);
            warning->Description = reader["WARNING_DESCRIPTION"]->ToString();
            warning->Zone = reader["ZONE"]->ToString();
            warning->Active = reader["ACTIVE"]->ToString()->Trim()->ToUpper()->Equals("SI") ? true : false;

            // Asignar datos del tipo de warning (instanciarlo primero)
            type->Id = Convert::ToInt32(reader["WARNING_TYPE_ID"]);
            type->Name = reader["WARNING_TYPE_NAME"]->ToString();
            type->Description = reader["WARNING_TYPE_DESCRIPTION"]->ToString();
            warning->Type = type;
            // Agregar a la lista
            warningsList->Add(warning);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return warningsList;
}

List<Warning^>^ SecurityPersistance::Persistance::QueryWarningsInitalizedbyClient()
{
    List<Warning^>^ warningsList = gcnew List<Warning^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryActivatedWarnings";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Warning^ warning = gcnew Warning();
            warning->Id = Convert::ToInt32(reader["ID"]->ToString());
            warning->StartingDate = Convert::ToDateTime(reader["START_DATE"]);
            warning->EndingDate = Convert::ToDateTime(reader["END_DATE"]);
            warning->Type->Id = Convert::ToInt32(reader["WARNING_TYPE"]->ToString());
            warning->Description = reader["DESCRIPTION"]->ToString();
            warning->Zone = reader["ZONE"]->ToString();
            warning->Active = reader["ACTIVE"]->ToString()->Equals("SI") ? true : false;
            warningsList->Add(warning);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return warningsList;
    
}

int SecurityPersistance::Persistance::AddQuestion(Question^ question)
{
    int questionId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_AddQuestion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@QUESTION", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@ANSWER", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@FAQ", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 15);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@QUESTION"]->Value = question->question;
        cmd->Parameters["@ANSWER"]->Value = question->Answer;
        cmd->Parameters["@FAQ"]->Value = question->IsFAQ ? "1" : "0";
        cmd->Parameters["@STATUS"]->Value = question->Status;


        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
        questionId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return questionId;
}

List<Question^>^ SecurityPersistance::Persistance::QueryAllFAQ()
{
    List<Question^>^ FAQquestionsList = gcnew List<Question^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllFAQ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Question^ question = gcnew Question();
            question->Id = Convert::ToInt32(reader["ID"]->ToString());
            question->question = reader["QUESTION"]->ToString();
            question->Answer = reader["ANSWER"]->ToString();
            question->IsFAQ = reader["FAQ"]->ToString()->Equals("1") ? true : false;
            question->Status = reader["STATUS"]->ToString();
            FAQquestionsList->Add(question);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return FAQquestionsList;
}

List<Question^>^ SecurityPersistance::Persistance::QueryAllNewQuestions()
{
    List<Question^>^ newquestionsList = gcnew List<Question^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAllNewQuestions";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Question^ q  = gcnew Question();
            q->Id = Convert::ToInt32(reader["ID"]->ToString());
            q->question = reader["QUESTION"]->ToString();
            q->Answer = reader["ANSWER"]->ToString();
            q->IsFAQ = reader["FAQ"]->ToString()->Equals("1") ? true : false;
            q->Status = reader["STATUS"]->ToString();
       
            newquestionsList->Add(q);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return newquestionsList;
}

Question^ SecurityPersistance::Persistance::QueryByQuestion(String^ question)
{
    Question^ q;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_QueryAnswerByQuestion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@QUESTION", System::Data::SqlDbType::VarChar, 500);
        cmd->Prepare();
        cmd->Parameters["@QUESTION"]->Value = question;
        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            q = gcnew Question();
            q->Id = Convert::ToInt32(reader["ID"]->ToString());
            q->question = reader["QUESTION"]->ToString();
            q->Answer = reader["ANSWER"]->ToString();
            q->Status = reader["STATUS"]->ToString();
            q->IsFAQ = reader["FAQ"]->ToString()->Equals("1") ? true : false;
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return q;

}

int SecurityPersistance::Persistance::DeleteQuestion(int questionId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteQuestion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = questionId;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int SecurityPersistance::Persistance::UpdateQuestion(Question^ question)
{
    int res = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateQuestion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        Question^ question = gcnew Question();
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@QUESTION", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@ANSWER", System::Data::SqlDbType::VarChar, 500);
        cmd->Parameters->Add("@FAQ", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 15);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = question->Id;
        cmd->Parameters["@QUESTION"]->Value = question->question;
        cmd->Parameters["@ANSWER"]->Value = question->Answer;
        cmd->Parameters["@FAQ"]->Value = question->IsFAQ ? '1' : '0';
        cmd->Parameters["@STATUS"]->Value = question->Status;
        //Paso 3: Se ejecuta las sentncia SQL
        res =cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return res;
}

array<Byte>^ SecurityPersistance::Persistance::GetImageFromCamara(String^ url)
{
    try {
        HttpWebRequest^ request = (HttpWebRequest^)WebRequest::Create(url);
        HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();
        Stream^ stream = response->GetResponseStream();

        MemoryStream^ ms = gcnew MemoryStream();
        stream->CopyTo(ms);

        response->Close();
        stream->Close();

        return ms->ToArray();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
        return nullptr;
    }
}

void SecurityPersistance::Persistance::InsertarImagenEnSQL(String^ rutaImagen)
{
    SqlConnection^ conn = nullptr;
    try {
        conn = GetConnection();
        array<Byte>^ datos = File::ReadAllBytes(rutaImagen);
        SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Imagenes (Foto, Fecha) VALUES (@img, GETDATE())", conn);
        cmd->Parameters->Add("@img", SqlDbType::VarBinary)->Value = datos;

        cmd->ExecuteNonQuery();
        conn->Close();
    }

    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    //return res;
}




