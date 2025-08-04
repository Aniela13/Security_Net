#include "AlarmHistorialForm.h"
#include "ReportAlarms.h"

System::Void SecurityGUIApp::AlarmHistorialForm::ReporteToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    ReportAlarms^ reporte = gcnew ReportAlarms();
    reporte->Show();
}
