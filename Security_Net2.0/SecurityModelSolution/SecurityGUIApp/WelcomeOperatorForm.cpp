#include "WelcomeOperatorForm.h"
#include "OperatorRegistration.h"
#include "SecurityOperatorForm.h"

System::Void SecurityGUIApp::WelcomeOperatorForm::btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e)
{
	OperatorRegistration^ operadorRegistrationForm = gcnew OperatorRegistration();
	//this->Hide();
	operadorRegistrationForm->Show();
}

System::Void SecurityGUIApp::WelcomeOperatorForm::btnLogInSecurity_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (refMainForm->GetType() == SecurityOperatorForm::typeid) {
			String^ username = txtSecurityUser->Text->Trim();
			String^ password = txtSecurityPassword->Text->Trim();
			SecurityOperator^ op = Controller::ValidateOperator(username, password);
			// Devuelve nullptr si no esta en el archivo de usuarios validados
			if (op != nullptr) {
				SecurityOperatorForm::OperadorRegistrado = op;
				refMainForm->Text = "Sistema de seguridad - Usuario: " + SecurityOperatorForm::OperadorRegistrado->Name + " " + SecurityOperatorForm::OperadorRegistrado->LastName + " (" + SecurityOperatorForm::OperadorRegistrado->UserName + ") - " + DateTime::Now;
				//SecurityOperatorForm^ operationsOperadorForm = gcnew SecurityOperatorForm();
				this->Hide();
				//operationsOperadorForm->Show();
				
			}
			else {
				MessageBox::Show("El usuario ingresado no ha sido registrado o validado.");
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible validar el usuario por el siguiente motivo:\n" +
			ex->Message);
	}
}
