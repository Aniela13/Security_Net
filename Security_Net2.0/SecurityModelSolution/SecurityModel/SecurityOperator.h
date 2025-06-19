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

        SecurityOperator() {}
        // Constructor 
        SecurityOperator(String^ name, String^ lastName, String^ dni, String^ password, bool authorized, bool helpneeded) : UserNet(dni, password) {
            Name = name;
            LastName = lastName;
            DNI = dni;
            UserName = dni;
            Password = password;
            Authorized = authorized;  // Se asigna el valor proporcionado
            HelpNeeded = helpneeded;
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