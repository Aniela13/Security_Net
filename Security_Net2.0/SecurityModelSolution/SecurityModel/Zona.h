#include "Point.h"
using namespace System;

namespace SecurityModel {
    public ref class Zona {
    public:
        property int Id;
        property Point^ Coordenada;
        property String^ Zonita;
        Zona() {}
        Zona(Point^ p, String^ zone) { //coordenadas de ubicacion 
            Coordenada = p;
            Zonita = zone;
        }

    };
}