#pragma once
#include "OperatorRegistration.h"
#include "SecurityOperatorForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SORegister
	/// </summary>
	public ref class WelcomeOperatorForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeOperatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WelcomeOperatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogInSecurity;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ txtSecurityPassword;
	private: System::Windows::Forms::TextBox^ txtSecurityUser;
	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeOperatorForm::typeid));
			this->btnLogInSecurity = (gcnew System::Windows::Forms::Button());
			this->txtSecurityPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtSecurityUser = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogInSecurity
			// 
			this->btnLogInSecurity->Location = System::Drawing::Point(212, 297);
			this->btnLogInSecurity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogInSecurity->Name = L"btnLogInSecurity";
			this->btnLogInSecurity->Size = System::Drawing::Size(121, 34);
			this->btnLogInSecurity->TabIndex = 19;
			this->btnLogInSecurity->Text = L"INICIAR SESION";
			this->btnLogInSecurity->UseVisualStyleBackColor = true;
			this->btnLogInSecurity->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnLogInSecurity_Click);
			// 
			// txtSecurityPassword
			// 
			this->txtSecurityPassword->Location = System::Drawing::Point(411, 230);
			this->txtSecurityPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSecurityPassword->Name = L"txtSecurityPassword";
			this->txtSecurityPassword->Size = System::Drawing::Size(100, 22);
			this->txtSecurityPassword->TabIndex = 18;
			// 
			// txtSecurityUser
			// 
			this->txtSecurityUser->Location = System::Drawing::Point(411, 176);
			this->txtSecurityUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSecurityUser->Name = L"txtSecurityUser";
			this->txtSecurityUser->Size = System::Drawing::Size(100, 22);
			this->txtSecurityUser->TabIndex = 17;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(411, 297);
			this->btnRegistrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(105, 34);
			this->btnRegistrar->TabIndex = 16;
			this->btnRegistrar->Text = L"REGISTRAR";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnRegistrar_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(169, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 25);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(169, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Usuario:";
			// 
			// WelcomeOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(792, 478);
			this->Controls->Add(this->btnLogInSecurity);
			this->Controls->Add(this->txtSecurityPassword);
			this->Controls->Add(this->txtSecurityUser);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"WelcomeOperatorForm";
			this->Text = L"WelcomeOperatorForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		OperatorRegistration^ operadorRegistrationForm = gcnew OperatorRegistration();
		this->Hide(); 
		operadorRegistrationForm->Show();
	}
	private: System::Void btnLogInSecurity_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			String^ username = txtSecurityUser->Text->Trim();
			String^ password = txtSecurityPassword->Text->Trim();
			SecurityOperator^ op = Controller::ValidateOperator(username, password);
			// Devuelve nullptr si no esta en el archivo de usuarios validados
			if (op != nullptr) {
				SecurityOperatorForm^ operationsOperadorForm = gcnew SecurityOperatorForm();
				//this->Hide();
				operationsOperadorForm->Show();
			}
			else {
				MessageBox::Show("El usuario ingresado no ha sido registrado o validado.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible validar el usuario por el siguiente motivo:\n" +
				ex->Message);
		}
	}
};
}
