#pragma once
#include "CreateAlarmForm.h"

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
	using namespace System::IO;


	/// <summary>
	/// Resumen de RecognizeAlertForm
	/// </summary>
	public ref class RecognizeAlertForm : public System::Windows::Forms::Form
	{
	public:

		RecognizeAlertForm(void)
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
		~RecognizeAlertForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::PictureBox^ pbCamera;

	protected:

	private: System::Windows::Forms::Label^ label1;









	private: System::Windows::Forms::Button^ btnReviewAlarm;
	private: System::Windows::Forms::Button^ btnStopWarning;
	private: System::Windows::Forms::DataGridView^ dgvPendingAlarms;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RecognizeAlertForm::typeid));
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->pbCamera = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			this->btnStopWarning = (gcnew System::Windows::Forms::Button());
			this->dgvPendingAlarms = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCamera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPendingAlarms))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(1069, 423);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 55;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// pbCamera
			// 
			this->pbCamera->Location = System::Drawing::Point(509, 78);
			this->pbCamera->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbCamera->Name = L"pbCamera";
			this->pbCamera->Size = System::Drawing::Size(458, 414);
			this->pbCamera->TabIndex = 54;
			this->pbCamera->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(504, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 31);
			this->label1->TabIndex = 56;
			this->label1->Text = L"CAMARA";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->BackColor = System::Drawing::Color::RosyBrown;
			this->btnReviewAlarm->Location = System::Drawing::Point(1069, 322);
			this->btnReviewAlarm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(133, 73);
			this->btnReviewAlarm->TabIndex = 66;
			this->btnReviewAlarm->Text = L"CONFIRMAR ALERTA";
			this->btnReviewAlarm->UseVisualStyleBackColor = false;
			this->btnReviewAlarm->Click += gcnew System::EventHandler(this, &RecognizeAlertForm::btnReviewAlarm_Click);
			// 
			// btnStopWarning
			// 
			this->btnStopWarning->Location = System::Drawing::Point(1069, 226);
			this->btnStopWarning->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnStopWarning->Name = L"btnStopWarning";
			this->btnStopWarning->Size = System::Drawing::Size(133, 79);
			this->btnStopWarning->TabIndex = 67;
			this->btnStopWarning->Text = L"DETENER ALERTA";
			this->btnStopWarning->UseVisualStyleBackColor = true;
			this->btnStopWarning->Click += gcnew System::EventHandler(this, &RecognizeAlertForm::btnStopWarning_Click);
			// 
			// dgvPendingAlarms
			// 
			this->dgvPendingAlarms->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPendingAlarms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dgvPendingAlarms->Location = System::Drawing::Point(39, 78);
			this->dgvPendingAlarms->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvPendingAlarms->Name = L"dgvPendingAlarms";
			this->dgvPendingAlarms->ReadOnly = true;
			this->dgvPendingAlarms->RowHeadersWidth = 51;
			this->dgvPendingAlarms->RowTemplate->Height = 24;
			this->dgvPendingAlarms->Size = System::Drawing::Size(348, 414);
			this->dgvPendingAlarms->TabIndex = 68;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha de alarma activada";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripción";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(273, 16);
			this->label7->TabIndex = 69;
			this->label7->Text = L"Alarmas activadas por botón de emergencia";
			// 
			// RecognizeAlertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1244, 635);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvPendingAlarms);
			this->Controls->Add(this->btnStopWarning);
			this->Controls->Add(this->btnReviewAlarm);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pbCamera);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RecognizeAlertForm";
			this->Text = L"RecognizeAlertForm";
			this->Load += gcnew System::EventHandler(this, &RecognizeAlertForm::RecognizeAlertForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCamera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPendingAlarms))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void ShowWarnings() {
			List<Warning^>^ alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
			if (alarmsbybtn != nullptr) {
				dgvPendingAlarms->Rows->Clear();
				
				for each (Warning^ warning in alarmsbybtn) {
					dgvPendingAlarms->Rows->Add(gcnew array<String^> {
						warning->StartingDate->ToString("dd/MM/yyyy HH:mm"),
						warning->Description
					});
				}

			}

		}
	private: System::Void RecognizeAlertForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowWarnings();
		array<Byte>^ imagen = Controller::GetImageFromCamara("http://10.101.51.237/capture");
		if (imagen != nullptr) {
			MemoryStream^ ms = gcnew MemoryStream(imagen);
			//Usar memoryStream para convertir los bytes de la imagen en una imagen para subirla  
			System::Drawing::Image^ img = System::Drawing::Image::FromStream(ms);
			pbCamera->Image = img;
			pbCamera->SizeMode = PictureBoxSizeMode::StretchImage;
		}
		else {
			MessageBox::Show("No se pudo obtener la imagen de la cámara.");
		}
	}
	private: System::Void btnStopWarning_Click(System::Object^ sender, System::EventArgs^ e); 

	private: System::Void btnReviewAlarm_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			WarningType^ type = gcnew WarningType();
			type->Id = 0;
			type->Name = "Por definir";
			Warning^ warning = gcnew Warning(DateTime::Now, DateTime::Now, type, "Por definir");
			int warningid = Controller::AddWarning(warning);
			if (warningid > 0) {
				MessageBox::Show("Se ha iniciado una alarma. Todos los operadores de seguridad serán notificados");
				return;
			}
			else {
				MessageBox::Show("No se ha podido agregar la alarma");
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la alarma por el siguiente motivo:\n" +
				ex->Message);
		}
	}
};
}
