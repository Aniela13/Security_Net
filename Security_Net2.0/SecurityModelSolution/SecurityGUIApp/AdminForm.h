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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAdminName = (gcnew System::Windows::Forms::TextBox());
			this->txtAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnValidateAdmin = (gcnew System::Windows::Forms::Button());
			this->lblErrorValidation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(64, 88);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(64, 127);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(300, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// txtAdminName
			// 
			this->txtAdminName->Location = System::Drawing::Point(216, 88);
			this->txtAdminName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAdminName->Name = L"txtAdminName";
			this->txtAdminName->Size = System::Drawing::Size(116, 20);
			this->txtAdminName->TabIndex = 3;
			// 
			// txtAdminPassword
			// 
			this->txtAdminPassword->Location = System::Drawing::Point(216, 127);
			this->txtAdminPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAdminPassword->Name = L"txtAdminPassword";
			this->txtAdminPassword->PasswordChar = '*';
			this->txtAdminPassword->Size = System::Drawing::Size(116, 20);
			this->txtAdminPassword->TabIndex = 4;
			// 
			// btnValidateAdmin
			// 
			this->btnValidateAdmin->Location = System::Drawing::Point(285, 186);
			this->btnValidateAdmin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnValidateAdmin->Name = L"btnValidateAdmin";
			this->btnValidateAdmin->Size = System::Drawing::Size(79, 28);
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
			this->lblErrorValidation->Location = System::Drawing::Point(64, 72);
			this->lblErrorValidation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblErrorValidation->Name = L"lblErrorValidation";
			this->lblErrorValidation->Size = System::Drawing::Size(201, 13);
			this->lblErrorValidation->TabIndex = 6;
			this->lblErrorValidation->Text = L"*Contrasela y/o usuario incorrecto";
			this->lblErrorValidation->Visible = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(444, 296);
			this->Controls->Add(this->lblErrorValidation);
			this->Controls->Add(this->btnValidateAdmin);
			this->Controls->Add(this->txtAdminPassword);
			this->Controls->Add(this->txtAdminName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(460, 335);
			this->MinimumSize = System::Drawing::Size(460, 335);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
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

private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
