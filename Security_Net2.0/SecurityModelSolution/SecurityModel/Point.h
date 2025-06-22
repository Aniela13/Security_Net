using namespace System;

namespace SecurityModel {
    [Serializable]
    public ref class Point {
    public:
        property double X;
        property double Y;
        Point() {}
        Point(double x, double y) { //coordenadas de ubicacion 
            this->X = x;
            this->Y = y;
        }

    };
}