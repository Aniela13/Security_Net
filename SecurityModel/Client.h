


using namespace System;

namespace SecurityModel {
    public ref class Client {
    public:

        property bool ButtonActivated;

        Client() {}
        Client( bool ButtonActivated) {
            this->ButtonActivated = ButtonActivated;
        }
        void AskQuestion(); /* Realizar una pregunta en la pantalla del robot(puede seleccionar una pregunta de la lista
                               o una nueva introducida por el cliente */
        void InvokeSOSAlert(); /*El cliente puede realizar una alerta inmediata */

        void ShowZoneLocation(); /*Mostrar la ubicación de un lugar en específico que el cliente desconoce*/


    };

}