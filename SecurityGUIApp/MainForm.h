#pragma once
#include "AdminForm.h"
#include "ClientForm.h"
#include "WelcomeOperatorForm.h"


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
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnOp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnOp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(105, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(471, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"BIENVENIDO A SECURITYNET";
			// 
			// btnAdmin
			// 
			this->btnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdmin.Image")));
			this->btnAdmin->Location = System::Drawing::Point(102, 280);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(126, 103);
			this->btnAdmin->TabIndex = 3;
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MainForm::btnAdmin_Click_1);
			// 
			// btnClient
			// 
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->Location = System::Drawing::Point(271, 280);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(126, 103);
			this->btnClient->TabIndex = 4;
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MainForm::btnClient_Click_1);
			// 
			// btnOp
			// 
			this->btnOp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOp.Image")));
			this->btnOp->Location = System::Drawing::Point(451, 280);
			this->btnOp->Name = L"btnOp";
			this->btnOp->Size = System::Drawing::Size(116, 103);
			this->btnOp->TabIndex = 5;
			this->btnOp->UseVisualStyleBackColor = true;
			this->btnOp->Click += gcnew System::EventHandler(this, &MainForm::btnOp_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 399);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ADMINISTRADOR";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(294, 403);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"CLIENTE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(477, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"OPERADOR";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 573);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnOp);
			this->Controls->Add(this->btnClient);
			this->Controls->Add(this->btnAdmin);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//}
	

	private: System::Void btnAdmin_Click_1(System::Object^ sender, System::EventArgs^ e) {
		AdminForm^ adminForm = gcnew AdminForm();
		this->Hide();
		adminForm->Show();
	}
	private: System::Void btnClient_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ClientForm^ clientForm = gcnew ClientForm();
		this->Hide();
		clientForm->Show();
	}
	private: System::Void btnOp_Click_1(System::Object^ sender, System::EventArgs^ e) {
		WelcomeOperatorForm^ operatorForm = gcnew WelcomeOperatorForm();
		this->Hide();
		operatorForm->Show();
	}
};
}