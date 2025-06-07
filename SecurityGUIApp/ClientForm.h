#pragma once
#include "FAQForm.h"
#include "ZoneLocation.h"

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnFAQ;
	private: System::Windows::Forms::Button^ btnLocationClient;

	private: System::Windows::Forms::Button^ btnAlert;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnFAQ = (gcnew System::Windows::Forms::Button());
			this->btnLocationClient = (gcnew System::Windows::Forms::Button());
			this->btnAlert = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(199, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(140, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"¿En qué puedo ayudarte\?";
			// 
			// btnFAQ
			// 
			this->btnFAQ->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnFAQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFAQ.Image")));
			this->btnFAQ->Location = System::Drawing::Point(134, 173);
			this->btnFAQ->Name = L"btnFAQ";
			this->btnFAQ->Size = System::Drawing::Size(120, 112);
			this->btnFAQ->TabIndex = 3;
			this->btnFAQ->UseVisualStyleBackColor = false;
			this->btnFAQ->Click += gcnew System::EventHandler(this, &ClientForm::btnFAQ_Click);
			// 
			// btnLocationClient
			// 
			this->btnLocationClient->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLocationClient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLocationClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLocationClient.Image")));
			this->btnLocationClient->Location = System::Drawing::Point(326, 173);
			this->btnLocationClient->Name = L"btnLocationClient";
			this->btnLocationClient->Size = System::Drawing::Size(117, 112);
			this->btnLocationClient->TabIndex = 4;
			this->btnLocationClient->UseVisualStyleBackColor = false;
			this->btnLocationClient->Click += gcnew System::EventHandler(this, &ClientForm::btnLocationClient_Click);
			// 
			// btnAlert
			// 
			this->btnAlert->BackColor = System::Drawing::Color::FloralWhite;
			this->btnAlert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlert.Image")));
			this->btnAlert->Location = System::Drawing::Point(473, 369);
			this->btnAlert->Name = L"btnAlert";
			this->btnAlert->Size = System::Drawing::Size(114, 96);
			this->btnAlert->TabIndex = 5;
			this->btnAlert->UseVisualStyleBackColor = false;
			this->btnAlert->Click += gcnew System::EventHandler(this, &ClientForm::btnAlert_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(121, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Preguntas frecuentes";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(343, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Mapa de zonas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(484, 468);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 30);
			this->label5->TabIndex = 8;
			this->label5->Text = L"SOLO PARA \r\nEMERGENCIAS";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(636, 512);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnAlert);
			this->Controls->Add(this->btnLocationClient);
			this->Controls->Add(this->btnFAQ);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btnFAQ_Click(System::Object^ sender, System::EventArgs^ e) {
		FAQForm^ fAQForm = gcnew FAQForm();
		this->Hide();
		fAQForm->Show();
	}

	
	private: System::Void btnLocationClient_Click(System::Object^ sender, System::EventArgs^ e) {
		ZoneLocation^ zonelocationForm = gcnew ZoneLocation();
		this->Hide();
		zonelocationForm->Show();
	}
	private: System::Void btnAlert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Warning^ warning = gcnew Warning();
			warning->Type = "Por Definir...";
			warning->StartingDate = DateTime::Now;
			if (Controller::AddWarning(warning) == 1) {
				MessageBox::Show("Espere, recibira ayuda pronto.");
			}
			else {
				MessageBox::Show("No se ha podido agregar la alarma");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la alarma por el siguiente motivo:\n" +
				ex->Message);
		}


		
	}
};
}