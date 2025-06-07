#include "UserNet.h"


using namespace System;


namespace SecurityModel {
    public ref class SecurityOperator : public UserNet {
    public:
        String^ Name;
        String^ LastName;
        String^ DNI;
        property bool Authorized;
        property bool HelpNeeded;

        SecurityOperator() {}
        SecurityOperator(String^ name, String^ lastName, String^ dni, String^ password) : UserNet(dni, password) {
            Name = name;
            LastName = lastName;
            DNI = dni;
            UserName = dni;
            Password = password;
            Authorized = false;  //validar que el operador sea un empleado vigente y encargado del control del robot
            HelpNeeded = true;   //Se transforma a True tras la verificación del operador de seguridad.
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