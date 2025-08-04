#include "Point.h"
using namespace System;

namespace SecurityModel {
    public ref class Zone {
    public:
        property int Id;
        property Point^ Coordenada;
        property String^ Zona;
        Zone() {}
        Zone(Point^ p, String^ zone) { //coordenadas de ubicacion 
            Coordenada = p;
            Zona = zone;
        }

    };
}