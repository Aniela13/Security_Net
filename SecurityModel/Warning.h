using namespace System;

namespace SecurityModel {
    public ref class Warning {
    public:
        String^ Type; //tipo de alerta o descripcion de alerta
        DateTime^ StartingDate; // fecha y hora de alerta activada
        DateTime^ EndingDate; //fecha y hora de alerta desactivada


        Warning() {}
        Warning(String^ type, DateTime^ startingDate, DateTime^ endingDate) {
            this->Type = type;
            this->StartingDate = startingDate;
            this->EndingDate = endingDate;
        }
    };
}