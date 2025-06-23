#include "pch.h"
#include "SecurityPersistance.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization::Formatters::Binary;


SqlConnection^ SecurityPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "XgKnzbGDasqJ"; // "1INF53_POO#123";
    String^ serverName = "200.16.7.140";
    conn->ConnectionString = "Server=" + serverName + ";Database = a20216777;User ID = a20216777; Password = " +
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
            writer->WriteLine("{0}|{1}|{2}|{3}", warning->StartingDate, warning->EndingDate, warning->Type->Name, warning->Description);
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
            WarningType^ type = gcnew WarningType();
            type->Name = record[2];
            Warning^ al = gcnew Warning(DateTime::Parse(record[0]), DateTime::Parse(record[1]), type, record[3]);
            ((List<Warning^>^)result)->Add(al);
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
            qst = gcnew Question(record[0], record[1]);
            ((List<Question^>^)result)->Add(qst);
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

int SecurityPersistance::Persistance::AddOperator(SecurityOperator^ operador)
{
    int operatorId;
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
        cmd->Parameters->Add("@AUTHORIZED", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@HELPNEEDED", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@USER_TYPE", System::Data::SqlDbType::Char, 1);
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

        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = operador->Name;
        cmd->Parameters["@LASTNAME"]->Value = operador->LastName;
        cmd->Parameters["@DNI"]->Value = operador->DNI;
        cmd->Parameters["@USERNAME"]->Value = operador->UserName;
        cmd->Parameters["@PASSWORD"]->Value = operador->Password;
        cmd->Parameters["@AUTHORIZED"]->Value = operador->Authorized;
        cmd->Parameters["@HELPNEEDED"]->Value = operador->HelpNeeded;
        cmd->Parameters["@USER_TYPE"]->Value = '1';
        cmd->Parameters["@DOCUMENT_TYPE"]->Value = '0';
        cmd->Parameters["@BIRTHDAY"]->Value = operador->BirthDay;
        cmd->Parameters["@ADDRESS"]->Value = operador->Address;
        cmd->Parameters["@GENDER"]->Value = operador->Gender;
        cmd->Parameters["@PHONE_NUMBER"]->Value = operador->Phone_Number;
        cmd->Parameters["@SALARY"]->Value = operador->Salary;
        cmd->Parameters["@SCHEDULE"]->Value = operador->Schedule;
        cmd->Parameters["@HIRE_DATE"]->Value = operador->Hire_Date;
        cmd->Parameters["@EMAIL"]->Value = operador->Email;

        if (operador->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = operador->Photo;
        
        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        operatorId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return operatorId;
}

SecurityOperator^ SecurityPersistance::Persistance::QueryOperatorById(int operatorId)
{
    SecurityOperator^ operador;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryOperatorById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = operatorId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            operador = gcnew SecurityOperator();
            operador->Name = reader["NAME"]->ToString();
            operador->LastName = reader["LASTNAME"]->ToString();
            operador->DNI = reader["DNI"]->ToString();
            operador->Authorized = reader["AUTHORIZED"]->ToString()->Equals("S") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            operador->UserName = reader["USERNAME"]->ToString();
            operador->BirthDay = reader["BIRTHDAY"]->ToString()->Equals("S") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            operador->HelpNeeded = reader["HELPNEEDED"]->ToString()->Equals("S") ? true : false;
            
            
            brand->Id = Convert::ToInt32(reader["BRAND_ID"]->ToString());
            
            brand->Country = reader["COUNTRY"]->ToString();
            brand->Warranty = reader["WARRANTY"]->ToString();
            robot->Brand = brand;
            robot->Name = reader["NAME"]->ToString();
            robot->LoadCapacity = Convert::ToDouble(reader["LOAD_CAPACITY"]->ToString());
            robot->Model = reader["MODEL"]->ToString();
            robot->Speed = Convert::ToDouble(reader["SPEED"]->ToString());
            robot->Status = reader["STATUS"]->ToString();
            if (!DBNull::Value->Equals(reader["PURCHASE_DATE"]))
                robot->PurchaseDate = Convert::ToDateTime(reader["PURCHASE_DATE"]);
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                robot->Photo = (array<Byte>^)reader["PHOTO"];
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



