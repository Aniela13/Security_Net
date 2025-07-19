#include "RecognizeAlertForm.h"
#include "CreateAlarmForm.h"

System::Void SecurityGUIApp::RecognizeAlertForm::btnStopWarning_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿La alarma ha sido atendida?",
			"Confirmación para detener la alarma", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			List<Warning^>^ alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
			Warning^ alarm = alarmsbybtn[0]; //se atiende la primera alarma creada 
			alarm->EndingDate = DateTime::Now;
			alarm->Active = false;
			if (Controller::UpdateWarning(alarm) == 1) {
				System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea añadirla al historial de alarmas?",
					"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
					//ABRIR EL FORM COMO SHOW DIALOG Y ENVIARLE EL DATO DE LA ALARMA EN EL CPP DE CREATE ALARM FORM
					CreateAlarmForm^ alarmform = gcnew CreateAlarmForm(alarm);
					alarmform->Show();
					return System::Void();

				}
				else {
					alarm->Type->Id = 0;
					alarm->Description = "Alarma descartada";
					if (Controller::UpdateWarning(alarm) == 1) {
						MessageBox::Show("Se ha actualizado la alarma activada como falsa alarma");
						return;
					}
				}


			}

		}
		else {
			MessageBox::Show("No se ha podido detener la alarma. La alarma sigue estando activa");
			return;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar al operador de seguridad por el siguiente motivo:\n" +
			ex->Message);
	}
}
