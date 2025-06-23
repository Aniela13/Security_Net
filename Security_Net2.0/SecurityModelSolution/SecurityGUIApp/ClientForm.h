#pragma once
#include "FAQForm.h"
#include "ZoneLocation.h"
#include "EmergencyForm.h"

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
			this->SuspendLayout();
			// 
			// btnFAQ
			// 
			this->btnFAQ->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnFAQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFAQ.Image")));
			this->btnFAQ->Location = System::Drawing::Point(125, 165);
			this->btnFAQ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnLocationClient->Location = System::Drawing::Point(411, 165);
			this->btnLocationClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnAlert->Location = System::Drawing::Point(589, 384);
			this->btnAlert->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAlert->Name = L"btnAlert";
			this->btnAlert->Size = System::Drawing::Size(115, 96);
			this->btnAlert->TabIndex = 5;
			this->btnAlert->UseVisualStyleBackColor = false;
			this->btnAlert->Click += gcnew System::EventHandler(this, &ClientForm::btnAlert_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(586, 482);
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
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(751, 527);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnAlert);
			this->Controls->Add(this->btnLocationClient);
			this->Controls->Add(this->btnFAQ);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btnFAQ_Click(System::Object^ sender, System::EventArgs^ e) {
		FAQForm^ fAQForm = gcnew FAQForm();
		//this->Hide();
		fAQForm->Show();
	}

	
	private: System::Void btnLocationClient_Click(System::Object^ sender, System::EventArgs^ e) {
		ZoneLocation^ zonelocationForm = gcnew ZoneLocation();
		//this->Hide();
		zonelocationForm->Show();
	}
	private: System::Void btnAlert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			WarningType^ type = gcnew WarningType(); 
			type->Name = "Por definir";
			Warning^ warning = gcnew Warning(DateTime::Now, DateTime::Now,type, "Por definir...");

			if (Controller::AddWarning(warning) == 1) {
				EmergencyForm^ emergencia = gcnew EmergencyForm();
				emergencia->Show();
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