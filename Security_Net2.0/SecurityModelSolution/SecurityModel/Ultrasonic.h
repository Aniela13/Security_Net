#include "Sensors.h"


using namespace System;


namespace SecurityModel {
    public ref class Ultrasonic : public Sensors {
    public:
        String^ Name;
        property double Distance;
        Ultrasonic() {}
        Ultrasonic(String^ name, double distance) {
            this->Name = name;
            this->Distance = distance;
        }
    public:
        void GetDistance(); //Valor de proximidad a otros objetos cercanos al robot 
    };
}