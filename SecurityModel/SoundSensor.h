#include "Sensors.h"


using namespace System;


namespace SecurityModel {
    public ref class SoundSensor : public Sensors {
    public:
        String^ Name;
        property double Decibeles;

        SoundSensor() {}
        SoundSensor(String^ name, double decibeles) {
            this->Name = name;
            this->Decibeles = decibeles;
        }
    public:
        double GetDecibeles(); //Valor de intensidad de sonido
    };
}
