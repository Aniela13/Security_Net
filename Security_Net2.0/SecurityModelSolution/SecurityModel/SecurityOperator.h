#include "UserNet.h"


using namespace System;


namespace SecurityModel {
    public ref class SecurityOperator : public UserNet {
    public:
        String^ Name;
        String^ LastName;
        String^ DNI;
        bool Authorized;
        bool HelpNeeded;
        String^ UserName;
        DateTime^ BirthDay;
        String^ Address;
        String^ Gender;
        String^ Phone_Number;
        array<Byte>^ Photo;
        Double^ Salary;
        String^ Schedule;
        DateTime^ Hire_Date;
        String^ Email;
        int Id;

        SecurityOperator() {}
        // Constructor 
        SecurityOperator(String^ name, String^ lastName, String^ dni, String^ password, bool authorized, bool helpneeded) : UserNet(dni, password) {
            Name = name;
            LastName = lastName;
            DNI = dni;
            UserName = dni;
            Id = Convert::ToInt32(dni);
            Password = password;
            Authorized = authorized;  // Se asigna el valor proporcionado
            HelpNeeded = helpneeded;
            BirthDay = nullptr;
            Address = nullptr;
            Gender = nullptr;
            Phone_Number = nullptr;
            Photo = nullptr;
            Salary = nullptr;
            Schedule = nullptr;
            Hire_Date = nullptr;
            Email = nullptr;
        }

    public:

        void AssignZoneInspection();

        void DefineStartingPoint();

        void StopAlarm();

        void ShowRobotCam();

        void GetRobotPosition();

        void GetNoiseReport();

        void ChangeRoute();

        void RecognizeWarning();


        //polimorfismo : la forma de registro e ingresos de datos (nombre y usuario) es diferente para cada usuario
        void Register() override;
        void Login() override;
    };
}