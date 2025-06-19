#include "pch.h"
#include "SecurityPersistance.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;



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



