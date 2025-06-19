#include "WarningType.h"
using namespace System;

namespace SecurityModel {


    public ref class Warning {
    public:
        property DateTime^ StartingDate; // fecha y hora de alerta activada
        property DateTime^ EndingDate; //fecha y hora de alerta desactivada
        property WarningType^ Type; //tipo de alarma
        property String^ Description; // descripcion de alerta


        Warning() {}
        Warning(DateTime^ startingDate, DateTime^ endingDate, WarningType^ type, String^ description) {
            StartingDate = startingDate;
            EndingDate = endingDate;
            Type = type;
            Description = description;
        }
    };
}