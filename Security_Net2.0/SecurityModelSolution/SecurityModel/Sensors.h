
using namespace System;


namespace SecurityModel {
    public ref class Sensors {
    public:
        String^ Type; //Tipo: ultrasonico, sensor de sonido, camera
        bool State; // 1= sensor activo y 0 = sensor no activo
        Sensors() {}
        Sensors(String^ type, bool state) {
            this->Type = type;
            this->State = state;
        }
    };
}