#include "UserNet.h"
using namespace System;

namespace SecurityModel {
    public ref class Administrator : public UserNet {
    public:
        property String^ UserName;
        property String^ Password;
        Administrator() {};
        Administrator(String^ userName, String^ password) :  UserNet(userName, password) {
            UserName = userName;
            Password = password;
        }

    public:
        void AddEmployee(); //Agregar un usuario (un operador del centro comercial) para controlar el robot 

        void ApproveSecurityOperator(); //Dar pase 

        void ConsultWarningHistorial(); //Revisar el historial de alertas activadas 

        void MantainUser();
        void AddZone();
        void DeleteZone();
        void GetZones();



        //polimorfismo: la forma de registro e ingresos de datos (nombre y usuario) es diferente para cada usuario
        void Register() override;
        void Login() override;


    };
}