#include "WarningType.h"
using namespace System;

namespace SecurityModel {


    public ref class Warning {
    public:
        int ID;
        property DateTime^ StartingDate; // fecha y hora de alerta activada
        property DateTime^ EndingDate; //fecha y hora de alerta desactivada
        property String^ Type; //tipo de alarma
        property String^ Description; // descripcion de alerta
        property String^ Zone;
        bool Active;

        Warning() {}
        Warning(int id, DateTime^ startingDate, DateTime^ endingDate, String^ type, String^ description, String^ zone, bool active) {
            ID = id;
            StartingDate = startingDate;
            EndingDate = endingDate;
            Type = type;
            Description = description;
            Zone = zone;
            Active = active;
        }
    };
}