using namespace System;

namespace SecurityModel {
    public ref class SecurityBot {
    public:
        String^ Name;
        String^ Model;
        String^ InspectedZones;
        property int Speed;
        property bool AlertActivated;

        SecurityBot() {}
        SecurityBot(String^ name, String^ model, String^ InspectedZones, int speed, bool AlertActivated) {
            this->Name = name;
            this->Model = model;
            this->InspectedZones = InspectedZones;
            this->Speed = speed;
            this->AlertActivated = AlertActivated; //Comenzará como falso, se activa cuando identifique una alerta
        }



    public:
        void Move(); //Desplazar el robot de seguridad por el mall

        void ShowWarning(); //Mostrar la alerta identificada por los sensores

        void SearchDestination(); //Elegir las coordenadas de llegada del robot. Es decir, la zona a vigilar por el robot

        void MoveToDestination();// Desplazar el robot desde el punto de partida hasta el destino 

        void ShowUbication(); //Mostrar las coordenadas de ubicación actual del robot

        void GetInspectedZones(); //Guardar una lista de las zonas ya inspeccionadas por el robot

        void Stop(); //Detener el robot

        void Report(); //Obtener un reporte actual del robot (datos de sensores, ubicacion, #alertas)

        void ConsultSensor(); // Obtener los datos de un sensor específico (foto o intensidad del sonido)
    };
}