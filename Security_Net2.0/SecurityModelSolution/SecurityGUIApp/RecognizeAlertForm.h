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
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::TextBox^ txtNameZone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->txtNameZone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			this->btnStopWarning = (gcnew System::Windows::Forms::Button());
			this->dgvPendingAlarms = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(405, 78);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 414);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(437, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 29);
			this->label1->TabIndex = 56;
			this->label1->Text = L"CAMARA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(749, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 29);
			this->label2->TabIndex = 58;
			this->label2->Text = L"RUIDO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(755, 78);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(197, 197);
			this->pictureBox2->TabIndex = 57;
			this->pictureBox2->TabStop = false;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(889, 449);
			this->txtPointY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->Size = System::Drawing::Size(57, 22);
			this->txtPointY->TabIndex = 64;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(889, 414);
			this->txtPointX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->Size = System::Drawing::Size(57, 22);
			this->txtPointX->TabIndex = 63;
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(889, 382);
			this->txtNameZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(156, 22);
			this->txtNameZone->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(760, 452);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(760, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Coordenada X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(760, 382);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 16);
			this->label5->TabIndex = 59;
			this->label5->Text = L"Nombre Zona: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(757, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 29);
			this->label6->TabIndex = 65;
			this->label6->Text = L"POSICION";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->BackColor = System::Drawing::Color::RosyBrown;
			this->btnReviewAlarm->Location = System::Drawing::Point(1069, 322);
			this->btnReviewAlarm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(133, 73);
			this->btnReviewAlarm->TabIndex = 66;
			this->btnReviewAlarm->Text = L"INICIAR ALERTA";
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->txtNameZone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RecognizeAlertForm";
			this->Text = L"RecognizeAlertForm";
			this->Load += gcnew System::EventHandler(this, &RecognizeAlertForm::RecognizeAlertForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	}
	private: System::Void btnStopWarning_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿La alarma ha sido atendida?",
				"Confirmación para detener la alarma", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				List<Warning^>^ alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
				Warning^ alarm = alarmsbybtn[0]; //se atiende la primera alarma creada 
				alarm->EndingDate = DateTime::Now;
				alarm->Active = false; 
				if (Controller::UpdateWarning(alarm) == 1) {
					System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea añadirla al historial de alarmas?",
						"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
						//ABRIR EL FORM COMO SHOW DIALOG Y ENVIARLE EL DATO DE LA ALARMA EN EL CPP DE CREATE ALARM FORM
						CreateAlarmForm^ alarmform = gcnew CreateAlarmForm();
						alarmform->SetWarning(alarm);
						//this->Hide();
						alarmform->Show();
					}
					else {
						alarm->Type->Id = 0; 
						alarm->Description = "Alarma descartada";
						if (Controller::UpdateWarning(alarm) == 1){
							MessageBox::Show("Se ha actualizado la alarma activada como falsa alarma");
							return;
						}
					}


				}

			}
			else {
				MessageBox::Show("No se ha podido detener la alarma. La alarma sigue estando activa");
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar al operador de seguridad por el siguiente motivo:\n" +
				ex->Message);
		}
	}

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
