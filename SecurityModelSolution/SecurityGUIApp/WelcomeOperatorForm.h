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
	private: System::Windows::Forms::Button^ btnIngresarSecurity;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->btnLogInSecurity = (gcnew System::Windows::Forms::Button());
			this->txtSecurityPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtSecurityUser = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresarSecurity = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogInSecurity
			// 
			this->btnLogInSecurity->Location = System::Drawing::Point(270, 361);
			this->btnLogInSecurity->Name = L"btnLogInSecurity";
			this->btnLogInSecurity->Size = System::Drawing::Size(121, 34);
			this->btnLogInSecurity->TabIndex = 19;
			this->btnLogInSecurity->Text = L"INICIAR SESION";
			this->btnLogInSecurity->UseVisualStyleBackColor = true;
			this->btnLogInSecurity->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnLogInSecurity_Click);
			// 
			// txtSecurityPassword
			// 
			this->txtSecurityPassword->Location = System::Drawing::Point(455, 294);
			this->txtSecurityPassword->Name = L"txtSecurityPassword";
			this->txtSecurityPassword->Size = System::Drawing::Size(100, 22);
			this->txtSecurityPassword->TabIndex = 18;
			// 
			// txtSecurityUser
			// 
			this->txtSecurityUser->Location = System::Drawing::Point(455, 240);
			this->txtSecurityUser->Name = L"txtSecurityUser";
			this->txtSecurityUser->Size = System::Drawing::Size(100, 22);
			this->txtSecurityUser->TabIndex = 17;
			// 
			// btnIngresarSecurity
			// 
			this->btnIngresarSecurity->Location = System::Drawing::Point(455, 361);
			this->btnIngresarSecurity->Name = L"btnIngresarSecurity";
			this->btnIngresarSecurity->Size = System::Drawing::Size(105, 34);
			this->btnIngresarSecurity->TabIndex = 16;
			this->btnIngresarSecurity->Text = L"REGISTRAR";
			this->btnIngresarSecurity->UseVisualStyleBackColor = true;
			this->btnIngresarSecurity->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnIngresarSecurity_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(214, 294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 25);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(214, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(331, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 32);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Bienvenido";
			// 
			// WelcomeOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 560);
			this->Controls->Add(this->btnLogInSecurity);
			this->Controls->Add(this->txtSecurityPassword);
			this->Controls->Add(this->txtSecurityUser);
			this->Controls->Add(this->btnIngresarSecurity);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"WelcomeOperatorForm";
			this->Text = L"WelcomeOperatorForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void btnIngresarSecurity_Click(System::Object^ sender, System::EventArgs^ e) {
		OperatorRegistration^ operadorRegistrationForm = gcnew OperatorRegistration();
		this->Hide(); 
		operadorRegistrationForm->Show();
	}
	private: System::Void btnLogInSecurity_Click(System::Object^ sender, System::EventArgs^ e) {
		SecurityOperatorForm^ operationsOperadorForm = gcnew SecurityOperatorForm();
		this->Hide();
		operationsOperadorForm->Show();
	}
};
}
