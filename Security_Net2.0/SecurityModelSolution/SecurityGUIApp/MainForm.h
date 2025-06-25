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

	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnOp;




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
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnOp = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAdmin
			// 
			this->btnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdmin.Image")));
			this->btnAdmin->Location = System::Drawing::Point(84, 207);
			this->btnAdmin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(94, 84);
			this->btnAdmin->TabIndex = 3;
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MainForm::btnAdmin_Click_1);
			// 
			// btnClient
			// 
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->Location = System::Drawing::Point(304, 207);
			this->btnClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(94, 84);
			this->btnClient->TabIndex = 4;
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MainForm::btnClient_Click_1);
			// 
			// btnOp
			// 
			this->btnOp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOp.Image")));
			this->btnOp->Location = System::Drawing::Point(528, 207);
			this->btnOp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnOp->Name = L"btnOp";
			this->btnOp->Size = System::Drawing::Size(87, 84);
			this->btnOp->TabIndex = 5;
			this->btnOp->UseVisualStyleBackColor = true;
			this->btnOp->Click += gcnew System::EventHandler(this, &MainForm::btnOp_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(694, 601);
			this->Controls->Add(this->btnOp);
			this->Controls->Add(this->btnClient);
			this->Controls->Add(this->btnAdmin);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(710, 640);
			this->MinimumSize = System::Drawing::Size(710, 640);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	//private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//}
	

	private: System::Void btnAdmin_Click_1(System::Object^ sender, System::EventArgs^ e) {
		AdminForm^ adminForm = gcnew AdminForm();
		//this->Hide();
		adminForm->Show();
	}
	private: System::Void btnClient_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ClientForm^ clientForm = gcnew ClientForm();
		//this->Hide();
		clientForm->Show();
	}
	private: System::Void btnOp_Click_1(System::Object^ sender, System::EventArgs^ e) {
		WelcomeOperatorForm^ operatorForm = gcnew WelcomeOperatorForm();
		//this->Hide();
		operatorForm->Show();
	}

};
}