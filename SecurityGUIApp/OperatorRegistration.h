#pragma once
#include "ValidateOpForm.h"
using namespace SecurityModel; 
using namespace SecurityController; 

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OperatorRegistration
	/// </summary>
	public ref class OperatorRegistration : public System::Windows::Forms::Form
	{
	public:
		OperatorRegistration(void)
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
		~OperatorRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtOpPassword;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSecurityUser;
	private: System::Windows::Forms::TextBox^ txtOpDNI;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtOpLastName;

	private: System::Windows::Forms::TextBox^ txtOpName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSolicitarRegistro;

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
			this->txtOpPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSecurityUser = (gcnew System::Windows::Forms::TextBox());
			this->txtOpDNI = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtOpLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtOpName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSolicitarRegistro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtOpPassword
			// 
			this->txtOpPassword->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtOpPassword->Enabled = false;
			this->txtOpPassword->Location = System::Drawing::Point(385, 407);
			this->txtOpPassword->Name = L"txtOpPassword";
			this->txtOpPassword->ReadOnly = true;
			this->txtOpPassword->Size = System::Drawing::Size(100, 22);
			this->txtOpPassword->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label6->Location = System::Drawing::Point(144, 407);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(400, 25);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Contraseña: ";
			// 
			// txtSecurityUser
			// 
			this->txtSecurityUser->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtSecurityUser->Enabled = false;
			this->txtSecurityUser->Location = System::Drawing::Point(385, 347);
			this->txtSecurityUser->Name = L"txtSecurityUser";
			this->txtSecurityUser->ReadOnly = true;
			this->txtSecurityUser->Size = System::Drawing::Size(100, 22);
			this->txtSecurityUser->TabIndex = 32;
			//this->txtSecurityUser->TextChanged += gcnew System::EventHandler(this, &OperatorRegistration::txtSecurityUser_TextChanged);
			// 
			// txtOpDNI
			// 
			this->txtOpDNI->Location = System::Drawing::Point(385, 293);
			this->txtOpDNI->Name = L"txtOpDNI";
			this->txtOpDNI->Size = System::Drawing::Size(100, 22);
			this->txtOpDNI->TabIndex = 31;
			this->txtOpDNI->TextChanged += gcnew System::EventHandler(this, &OperatorRegistration::txtOpDNI_TextChanged);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(144, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(400, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Usuario: ";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label5->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label5->Location = System::Drawing::Point(144, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(400, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"DNI: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(259, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 32);
			this->label1->TabIndex = 28;
			this->label1->Text = L"REGISTRO";
			// 
			// txtOpLastName
			// 
			this->txtOpLastName->Location = System::Drawing::Point(385, 237);
			this->txtOpLastName->Name = L"txtOpLastName";
			this->txtOpLastName->Size = System::Drawing::Size(100, 22);
			this->txtOpLastName->TabIndex = 27;
			// 
			// txtOpName
			// 
			this->txtOpName->Location = System::Drawing::Point(385, 183);
			this->txtOpName->Name = L"txtOpName";
			this->txtOpName->Size = System::Drawing::Size(100, 22);
			this->txtOpName->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(144, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Apellidos: ";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(144, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nombres: ";
			// 
			// btnSolicitarRegistro
			// 
			this->btnSolicitarRegistro->Location = System::Drawing::Point(583, 478);
			this->btnSolicitarRegistro->Name = L"btnSolicitarRegistro";
			this->btnSolicitarRegistro->Size = System::Drawing::Size(105, 74);
			this->btnSolicitarRegistro->TabIndex = 23;
			this->btnSolicitarRegistro->Text = L"SOLICITAR REGISTRO";
			this->btnSolicitarRegistro->UseVisualStyleBackColor = true;
			this->btnSolicitarRegistro->Click += gcnew System::EventHandler(this, &OperatorRegistration::btnSolicitarRegistro_Click);
			// 
			// OperatorRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 571);
			this->Controls->Add(this->txtOpPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSecurityUser);
			this->Controls->Add(this->txtOpDNI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtOpLastName);
			this->Controls->Add(this->txtOpName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSolicitarRegistro);
			this->Name = L"OperatorRegistration";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSolicitarRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			
			String^ OperatorName = txtOpName->Text->Trim();
			if (OperatorName->Length == 0) {
				MessageBox::Show("Debe ingresar su nombre.");
				return;
			}
			
			String^ OperatorLastName = txtOpLastName->Text->Trim();
			if (OperatorLastName->Length == 0) {
				MessageBox::Show("Debe ingresar su apellido.");
				return;
			}
			String^ OperatorDNI = txtOpDNI->Text;
			if (OperatorDNI == "") {
				MessageBox::Show("Debe ingresar un número válido.");
				return;
			}
			//txtSecurityUser->Text = txtOpDNI->Text;
			//txtSecurityUser->ReadOnly = true;
	

			//String^ OperatorPassword = ReversePassword(OperatorDNI);
			//txtOpPassword->Text = OperatorPassword;

			String^ OperatorPassword = txtOpPassword->Text;

			String^ OperatorUser = txtSecurityUser->Text;

			SecurityOperator^ operador = gcnew SecurityOperator(OperatorName, OperatorLastName, OperatorDNI, OperatorPassword);

			if (Controller::AddOperatortoValidation(operador) == 1) {
				MessageBox::Show("Registrado correctamente.");
				ClearControls();
			}
			else {
				MessageBox::Show("No se ha podido registar su cuenta " + OperatorName);
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido registar su cuenta por el siguiente motivo:\n" +
				ex->Message);

		}
	}
	public:
		   String^ ReversePassword(String^ number) {
			   if (number->Length != 8) {
				   Console::WriteLine("El número debe tener exactamente 8 dígitos.");
				   return nullptr;
			   }

			   // Invertir el string manualmente
			   array<wchar_t>^ arr = number->ToCharArray();
			   Array::Reverse(arr);
			   return gcnew String(arr);
		   }
	public:
		void ClearControls() {
			for each(Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
	private: System::Void txtOpDNI_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ OperatorDNI = txtOpDNI->Text;
		String^ OperatorPassword = ReversePassword(OperatorDNI);
		txtOpPassword->Text = OperatorPassword;
		txtSecurityUser->Text = txtOpDNI->Text;
		txtSecurityUser->ReadOnly = true;
	}

};

}
