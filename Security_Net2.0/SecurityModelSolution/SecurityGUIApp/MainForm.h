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


	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnOp;
	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;





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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAdmin
			// 
			this->btnAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnAdmin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnAdmin->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdmin.Image")));
			this->btnAdmin->Location = System::Drawing::Point(90, 0);
			this->btnAdmin->Margin = System::Windows::Forms::Padding(90, 0, 0, 0);
			this->btnAdmin->MaximumSize = System::Drawing::Size(170, 170);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(149, 155);
			this->btnAdmin->TabIndex = 3;
			this->btnAdmin->UseVisualStyleBackColor = false;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MainForm::btnAdmin_Click_1);
			// 
			// btnClient
			// 
			this->btnClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnClient->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnClient->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->Location = System::Drawing::Point(375, 0);
			this->btnClient->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->btnClient->MaximumSize = System::Drawing::Size(170, 170);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(156, 155);
			this->btnClient->TabIndex = 4;
			this->btnClient->UseVisualStyleBackColor = false;
			this->btnClient->Click += gcnew System::EventHandler(this, &MainForm::btnClient_Click_1);
			// 
			// btnOp
			// 
			this->btnOp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnOp->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnOp->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnOp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOp.Image")));
			this->btnOp->Location = System::Drawing::Point(671, 0);
			this->btnOp->Margin = System::Windows::Forms::Padding(0, 0, 90, 0);
			this->btnOp->MaximumSize = System::Drawing::Size(170, 170);
			this->btnOp->Name = L"btnOp";
			this->btnOp->Size = System::Drawing::Size(142, 155);
			this->btnOp->TabIndex = 5;
			this->btnOp->UseVisualStyleBackColor = false;
			this->btnOp->Click += gcnew System::EventHandler(this, &MainForm::btnOp_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.44481F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.44482F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.11037F)));
			this->tableLayoutPanel1->Controls->Add(this->btnClient, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnAdmin, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnOp, 2, 0);
			this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel1->Location = System::Drawing::Point(5, 205);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(903, 155);
			this->tableLayoutPanel1->TabIndex = 6;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(920, 724);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel1->ResumeLayout(false);
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
		WelcomeOperatorForm^ validateoperatorForm = gcnew WelcomeOperatorForm();
		//this->Hide();
		validateoperatorForm->Show();
	}

private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}