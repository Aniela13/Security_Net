#include "Point.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SecurityModel {
    [Serializable]
    public ref class Route {
    private:
        List<Tuple<String^, Point^>^>^ routeZones;
    public:
        property int Id;
        property String^ Date;
        property String^ Status; //En proceso, Finalizada, Interrumpida
        property List<Tuple<String^, Point^>^>^ RouteZones
        {
           List<Tuple<String^, Point^>^>^ get()
           {
               return routeZones;
           }
           void set(List<Tuple<String^, Point^>^>^ value)
           {
               routeZones = value;
           }
        }

        Route() {
            routeZones = gcnew List<Tuple<String^, Point^>^>();
        }
        Route(int id, String^ date, String^ status) {
            this->Id = id;
            this->Date = date;
            this->Status = status;
            this->routeZones = gcnew List<Tuple<String^, Point^>^>();
        }
    };
}