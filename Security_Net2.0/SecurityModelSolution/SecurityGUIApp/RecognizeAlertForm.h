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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Label^ label7;


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
			this->btnGoBackMenu->Location = System::Drawing::Point(802, 344);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 55;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(304, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(233, 336);
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
			this->label1->Location = System::Drawing::Point(328, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 24);
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
			this->label2->Location = System::Drawing::Point(562, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 24);
			this->label2->TabIndex = 58;
			this->label2->Text = L"RUIDO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(566, 63);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(148, 160);
			this->pictureBox2->TabIndex = 57;
			this->pictureBox2->TabStop = false;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(667, 365);
			this->txtPointY->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->Size = System::Drawing::Size(44, 20);
			this->txtPointY->TabIndex = 64;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(667, 336);
			this->txtPointX->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->Size = System::Drawing::Size(44, 20);
			this->txtPointX->TabIndex = 63;
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(667, 310);
			this->txtNameZone->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(118, 20);
			this->txtNameZone->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(570, 367);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(570, 336);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Coordenada X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(570, 310);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
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
			this->label6->Location = System::Drawing::Point(568, 262);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 24);
			this->label6->TabIndex = 65;
			this->label6->Text = L"POSICION";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->BackColor = System::Drawing::Color::RosyBrown;
			this->btnReviewAlarm->Location = System::Drawing::Point(802, 262);
			this->btnReviewAlarm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(100, 59);
			this->btnReviewAlarm->TabIndex = 66;
			this->btnReviewAlarm->Text = L"INICIAR ALERTA";
			this->btnReviewAlarm->UseVisualStyleBackColor = false;
			this->btnReviewAlarm->Click += gcnew System::EventHandler(this, &RecognizeAlertForm::btnReviewAlarm_Click);
			// 
			// btnStopWarning
			// 
			this->btnStopWarning->Location = System::Drawing::Point(802, 184);
			this->btnStopWarning->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnStopWarning->Name = L"btnStopWarning";
			this->btnStopWarning->Size = System::Drawing::Size(100, 64);
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
			this->dgvPendingAlarms->Location = System::Drawing::Point(29, 63);
			this->dgvPendingAlarms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvPendingAlarms->Name = L"dgvPendingAlarms";
			this->dgvPendingAlarms->RowHeadersWidth = 51;
			this->dgvPendingAlarms->RowTemplate->Height = 24;
			this->dgvPendingAlarms->Size = System::Drawing::Size(226, 336);
			this->dgvPendingAlarms->TabIndex = 68;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha de alarma activada";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripción";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 48);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(214, 13);
			this->label7->TabIndex = 69;
			this->label7->Text = L"Alarmas activadas por botón de emergencia";
			// 
			// RecognizeAlertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 516);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
			System::Collections::Generic::Queue<Warning^>^ Alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
			if (Alarmsbybtn != nullptr) {
				dgvPendingAlarms->Rows->Clear();
				
				for each (Warning^ warning in Alarmsbybtn) {
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
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea detener la alarma?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				System::Collections::Generic::Queue<Warning^>^ Alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
				Warning^ alarm = Alarmsbybtn->Dequeue();
				alarm->EndingDate = DateTime::Now;
				if (Controller::UpdateWarning(alarm) == 1) {
					System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea añadirla al historial de alarmas?",
						"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
						Alarmsbybtn->Enqueue(alarm);
						CreateAlarmForm^ alarmform = gcnew CreateAlarmForm();
						//this->Hide();
						alarmform->Show();
					}
					else {
						alarm->Description = "Alarma descartada";
						if (Controller::UpdateWarning(alarm) == 1){
							MessageBox::Show("Se ha actualizado la alarma activada como falsa alarma");
						}
					}


				}

			}
			else {
				MessageBox::Show("No se ha podido detener la alarma");
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
			type->Name = "Por definir";
			int id;
			id = Controller::QueryAllWarnings()->Count + 1;
			Warning^ warning = gcnew Warning(id,DateTime::Now, DateTime::Now, type, "Por definir...");

			if (Controller::AddWarning(warning) == 1) {
				MessageBox::Show("Se ha iniciado una alarma. Todos los operadores de seguridad serán notificados");
				return;
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
