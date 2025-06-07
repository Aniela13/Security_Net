#pragma once
#include "OperationsAdminForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SecurityModel;
	using namespace SecurityController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtAdminName;


	private: System::Windows::Forms::TextBox^ txtAdminPassword;


	private: System::Windows::Forms::Button^ btnValidateAdmin;
	private: System::Windows::Forms::Label^ lblErrorValidation;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAdminName = (gcnew System::Windows::Forms::TextBox());
			this->txtAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnValidateAdmin = (gcnew System::Windows::Forms::Button());
			this->lblErrorValidation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(202, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(85, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(85, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// txtAdminName
			// 
			this->txtAdminName->Location = System::Drawing::Point(288, 108);
			this->txtAdminName->Name = L"txtAdminName";
			this->txtAdminName->Size = System::Drawing::Size(154, 22);
			this->txtAdminName->TabIndex = 3;
			// 
			// txtAdminPassword
			// 
			this->txtAdminPassword->Location = System::Drawing::Point(288, 156);
			this->txtAdminPassword->Name = L"txtAdminPassword";
			this->txtAdminPassword->PasswordChar = '*';
			this->txtAdminPassword->Size = System::Drawing::Size(154, 22);
			this->txtAdminPassword->TabIndex = 4;
			// 
			// btnValidateAdmin
			// 
			this->btnValidateAdmin->Location = System::Drawing::Point(380, 229);
			this->btnValidateAdmin->Name = L"btnValidateAdmin";
			this->btnValidateAdmin->Size = System::Drawing::Size(105, 34);
			this->btnValidateAdmin->TabIndex = 5;
			this->btnValidateAdmin->Text = L"INGRESAR";
			this->btnValidateAdmin->UseVisualStyleBackColor = true;
			this->btnValidateAdmin->Click += gcnew System::EventHandler(this, &AdminForm::btnValidateAdmin_Click);
			// 
			// lblErrorValidation
			// 
			this->lblErrorValidation->AutoSize = true;
			this->lblErrorValidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorValidation->ForeColor = System::Drawing::Color::Red;
			this->lblErrorValidation->Location = System::Drawing::Point(85, 89);
			this->lblErrorValidation->Name = L"lblErrorValidation";
			this->lblErrorValidation->Size = System::Drawing::Size(268, 18);
			this->lblErrorValidation->TabIndex = 6;
			this->lblErrorValidation->Text = L"*Contrasela y/o usuario incorrecto";
			this->lblErrorValidation->Visible = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 286);
			this->Controls->Add(this->lblErrorValidation);
			this->Controls->Add(this->btnValidateAdmin);
			this->Controls->Add(this->txtAdminPassword);
			this->Controls->Add(this->txtAdminName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
	private: System::Void btnValidateAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ AdminName = txtAdminName->Text->Trim();
			if (AdminName->Length == 0) {
				MessageBox::Show("Ingrese su usuario.");
				return;
			}
			String^ AdminPassword = txtAdminPassword->Text->Trim();
			if (AdminPassword->Length == 0) {
				MessageBox::Show("Ingrese su contraseña.");
				return;
			}

			Administrator^ admin = gcnew Administrator();
			admin->UserName = AdminName;
			admin->Password = AdminPassword;
			if (Controller::ValidateAdmin(admin) == 1) {
				lblErrorValidation->Visible = false;
				MessageBox::Show("Registro validado");
				OperationsAdminForm^ operationAdminForm = gcnew OperationsAdminForm();
				this->Hide();
				operationAdminForm->Show();

			}
			else if (Controller::ValidateAdmin(admin) == 0){
				lblErrorValidation->Visible = true;
				ClearControls();
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido realizar la validación por el siguiente motivo:\n" +
				ex->Message);
			return;
		}
	}

};
}
