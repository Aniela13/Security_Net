#include"Point.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SecurityModel {
    [Serializable]
    public ref class MallMap {
    public:
        Dictionary<String^, Point^>^ Zones;
        String^ MallName;
        String^ District;
        property int Id; 

        MallMap() {
            Zones = gcnew Dictionary<String^, Point^>();
        }
        MallMap(int id, String^ mallName, String^ district) {
            this->MallName = mallName;
            this->District = district; 
            this->Id = id;
            Zones = gcnew Dictionary<String^, Point^>();
        }
      

        void ShowMap();

    };
}