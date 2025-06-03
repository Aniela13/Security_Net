#include "Point.h"
using namespace System;

namespace SecurityModel {
    public ref class Route {
    public:
        Point^ StartingPoint;
        Point^ EndingPoint;

        Route() {}
        Route(Point^ start, Point^ end) {
            this->StartingPoint = start;
            this->EndingPoint = end;
        }
    };
}