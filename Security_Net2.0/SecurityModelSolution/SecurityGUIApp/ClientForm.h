#pragma once
#include "FAQForm.h"
#include "ZoneLocation.h"
#include "EmergencyForm.h"
#include "WebMapForm.h"
#include "SecurityOperatorForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ btnFAQ;
	private: System::Windows::Forms::Button^ btnLocationClient;

	private: System::Windows::Forms::Button^ btnAlert;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientForm::typeid));
			this->btnFAQ = (gcnew System::Windows::Forms::Button());
			this->btnLocationClient = (gcnew System::Windows::Forms::Button());
			this->btnAlert = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnFAQ
			// 
			this->btnFAQ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnFAQ->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnFAQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFAQ.Image")));
			this->btnFAQ->Location = System::Drawing::Point(95, 176);
			this->btnFAQ->Margin = System::Windows::Forms::Padding(20, 20, 60, 20);
			this->btnFAQ->Name = L"btnFAQ";
			this->btnFAQ->Size = System::Drawing::Size(135, 111);
			this->btnFAQ->TabIndex = 3;
			this->btnFAQ->UseVisualStyleBackColor = false;
			this->btnFAQ->Click += gcnew System::EventHandler(this, &ClientForm::btnFAQ_Click);
			// 
			// btnLocationClient
			// 
			this->btnLocationClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnLocationClient->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocationClient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLocationClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLocationClient.Image")));
			this->btnLocationClient->Location = System::Drawing::Point(388, 176);
			this->btnLocationClient->Margin = System::Windows::Forms::Padding(20, 20, 10, 20);
			this->btnLocationClient->Name = L"btnLocationClient";
			this->btnLocationClient->Size = System::Drawing::Size(175, 111);
			this->btnLocationClient->TabIndex = 4;
			this->btnLocationClient->UseVisualStyleBackColor = false;
			this->btnLocationClient->Click += gcnew System::EventHandler(this, &ClientForm::btnLocationClient_Click);
			// 
			// btnAlert
			// 
			this->btnAlert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAlert->BackColor = System::Drawing::Color::FloralWhite;
			this->btnAlert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlert.Image")));
			this->btnAlert->Location = System::Drawing::Point(593, 372);
			this->btnAlert->Margin = System::Windows::Forms::Padding(20, 20, 20, 5);
			this->btnAlert->Name = L"btnAlert";
			this->btnAlert->Size = System::Drawing::Size(138, 81);
			this->btnAlert->TabIndex = 5;
			this->btnAlert->UseVisualStyleBackColor = false;
			this->btnAlert->Click += gcnew System::EventHandler(this, &ClientForm::btnAlert_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(593, 463);
			this->label5->Margin = System::Windows::Forms::Padding(20, 5, 20, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 34);
			this->label5->TabIndex = 8;
			this->label5->Text = L"SOLO PARA \r\nEMERGENCIAS";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10.02232F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.73482F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10.51931F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				27.43009F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.56857F)));
			this->tableLayoutPanel1->Controls->Add(this->btnFAQ, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->btnLocationClient, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnAlert, 4, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 29.64224F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 28.73102F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.553442F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.1481F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.9252F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(751, 527);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(751, 527);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void btnFAQ_Click(System::Object^ sender, System::EventArgs^ e) {
		FAQForm^ fAQForm = gcnew FAQForm();
		//this->Hide();
		fAQForm->Show();
	}

	
	private: System::Void btnLocationClient_Click(System::Object^ sender, System::EventArgs^ e) {
		//ZoneLocation^ zonelocationForm = gcnew ZoneLocation();
		//this->Hide();
		//zonelocationForm->Show();
		WebMapForm^ map = gcnew WebMapForm();
		map->Show();
	}
	private: System::Void btnAlert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			WarningType^ type = gcnew WarningType();
			type->Id = 0;
			type->Name = "Por definir";
			Warning^ warning = gcnew Warning(DateTime::Now, DateTime::Now, type, "Por definir por operador");
			int warningid = Controller::AddWarning(warning);
			if ( warningid > 0) {
				SecurityOperatorForm::numero_alarmas = warningid;//Pasar el id, si es mayor a 0 alertara que hay alarmas
				EmergencyForm^ emergencia = gcnew EmergencyForm();
				emergencia->Show();
			}
			else {
				MessageBox::Show("No se ha podido agregar la alarma. Acercate al operador de seguridad más cercano");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la alarma por el siguiente motivo:\n" +
				ex->Message);
		}


		
	}

};
}