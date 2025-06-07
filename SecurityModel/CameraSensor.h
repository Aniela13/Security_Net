#include "Sensors.h"


using namespace System;

namespace SecurityModel {
    public ref class CameraSensor : public Sensors {
    public:
        array<Byte>^ Photo;
        String^ Name;
        DateTime Time; //fecha y hora de foto realizada
        CameraSensor() {}
        CameraSensor(array<Byte>^ photo, String^ name, DateTime time) {
            this->Photo = photo;
            this->Name = name;
            this->Time = time;
        }
        void GetImages(); //Tomar una foto del centro comercial para ser reportada al operador
    };

}
