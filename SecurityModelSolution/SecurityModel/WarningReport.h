#include "Warning.h"
using namespace System::Collections::Generic;

namespace SecurityModel {
    public ref class WarningReport {
    public:
        List<Warning^>^ WarningHistorial;

        
        void AddWarning(); //Crea un historial de las alertas identificadas en el mall en un determinado plazo (diario o semanal)
    };
}
