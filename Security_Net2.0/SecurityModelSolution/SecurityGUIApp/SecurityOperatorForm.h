#pragma once
#include "RobotPositionForm.h"
#include "SurveillanceCameraForm.h"
#include "RecognizeAlertForm.h"
#include "AnswerForm.h"
#include "AsignZonesForm.h"
#include "WebMapForm.h"
#include "ComboBoxItem.h"
#include "WelcomeOperatorForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace SecurityModel;
	using namespace SecurityController;
	using namespace System::Timers;


	/// <summary>
	/// Resumen de SecurityOperatorForm
	/// </summary>
	public ref class SecurityOperatorForm : public System::Windows::Forms::Form
	{
	public:
		static  SecurityOperator^ OperadorLogueado;
		static  int numero_alarmas;
		SecurityOperatorForm(void)
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
		~SecurityOperatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAsignZone;
	protected:

	protected:





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnDeactivateRobot;
	private: System::Windows::Forms::Button^ btnAccessCamera;
	private: System::Windows::Forms::Button^ btnGetActualPosition;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_Alarm_state;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnReviewAlarm;

	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Button^ butnAnswerQuestion;
	private: System::Windows::Forms::ComboBox^ cmbRobot;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecurityOperatorForm::typeid));
			this->btnAsignZone = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDeactivateRobot = (gcnew System::Windows::Forms::Button());
			this->btnAccessCamera = (gcnew System::Windows::Forms::Button());
			this->btnGetActualPosition = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Alarm_state = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->butnAnswerQuestion = (gcnew System::Windows::Forms::Button());
			this->cmbRobot = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAsignZone
			// 
			this->btnAsignZone->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnAsignZone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAsignZone->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnAsignZone->FlatAppearance->BorderSize = 5;
			this->btnAsignZone->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->btnAsignZone->Location = System::Drawing::Point(3, 2);
			this->btnAsignZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAsignZone->Name = L"btnAsignZone";
			this->btnAsignZone->Size = System::Drawing::Size(136, 69);
			this->btnAsignZone->TabIndex = 26;
			this->btnAsignZone->Text = L"ASIGNAR ZONA DE INSPECCION";
			this->btnAsignZone->UseVisualStyleBackColor = false;
			this->btnAsignZone->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAsignZone_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(283, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 23);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Robot en linea: ";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 34, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(253, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 73);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Bienvenido";
			// 
			// btnDeactivateRobot
			// 
			this->btnDeactivateRobot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnDeactivateRobot->BackColor = System::Drawing::Color::Brown;
			this->btnDeactivateRobot->ForeColor = System::Drawing::SystemColors::Control;
			this->btnDeactivateRobot->Location = System::Drawing::Point(29, 450);
			this->btnDeactivateRobot->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeactivateRobot->Name = L"btnDeactivateRobot";
			this->btnDeactivateRobot->Size = System::Drawing::Size(203, 34);
			this->btnDeactivateRobot->TabIndex = 28;
			this->btnDeactivateRobot->Text = L"DESACTIVAR ROBOT";
			this->btnDeactivateRobot->UseVisualStyleBackColor = false;
			this->btnDeactivateRobot->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnDeactivateRobot_Click);
			// 
			// btnAccessCamera
			// 
			this->btnAccessCamera->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnAccessCamera->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->btnAccessCamera->FlatAppearance->BorderSize = 5;
			this->btnAccessCamera->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->btnAccessCamera->Location = System::Drawing::Point(151, 2);
			this->btnAccessCamera->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAccessCamera->Name = L"btnAccessCamera";
			this->btnAccessCamera->Size = System::Drawing::Size(127, 69);
			this->btnAccessCamera->TabIndex = 29;
			this->btnAccessCamera->Text = L"ACCEDER A CAMARA";
			this->btnAccessCamera->UseVisualStyleBackColor = false;
			this->btnAccessCamera->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAccessCamera_Click);
			// 
			// btnGetActualPosition
			// 
			this->btnGetActualPosition->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnGetActualPosition->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->btnGetActualPosition->FlatAppearance->BorderSize = 5;
			this->btnGetActualPosition->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->btnGetActualPosition->Location = System::Drawing::Point(284, 2);
			this->btnGetActualPosition->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGetActualPosition->Name = L"btnGetActualPosition";
			this->btnGetActualPosition->Size = System::Drawing::Size(136, 69);
			this->btnGetActualPosition->TabIndex = 30;
			this->btnGetActualPosition->Text = L"POSICION ACTUAL";
			this->btnGetActualPosition->UseVisualStyleBackColor = false;
			this->btnGetActualPosition->Visible = false;
			this->btnGetActualPosition->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnGetActualPosition_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Marlett", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::IndianRed;
			this->label3->Location = System::Drawing::Point(739, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 39);
			this->label3->TabIndex = 31;
			this->label3->Text = L"ALARMAS";
			// 
			// txt_Alarm_state
			// 
			this->txt_Alarm_state->Location = System::Drawing::Point(795, 368);
			this->txt_Alarm_state->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_Alarm_state->Name = L"txt_Alarm_state";
			this->txt_Alarm_state->Size = System::Drawing::Size(100, 22);
			this->txt_Alarm_state->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.134328F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(716, 368);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 23);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Estado: ";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnReviewAlarm->BackColor = System::Drawing::Color::YellowGreen;
			this->btnReviewAlarm->Location = System::Drawing::Point(745, 407);
			this->btnReviewAlarm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(133, 73);
			this->btnReviewAlarm->TabIndex = 34;
			this->btnReviewAlarm->Text = L"REVISAR ALARMA";
			this->btnReviewAlarm->UseVisualStyleBackColor = false;
			this->btnReviewAlarm->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnReviewAlarm_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(561, 411);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 36;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnGoBackMenu_Click);
			// 
			// butnAnswerQuestion
			// 
			this->butnAnswerQuestion->BackColor = System::Drawing::Color::RoyalBlue;
			this->butnAnswerQuestion->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->butnAnswerQuestion->FlatAppearance->BorderSize = 5;
			this->butnAnswerQuestion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::CornflowerBlue;
			this->butnAnswerQuestion->Location = System::Drawing::Point(432, 2);
			this->butnAnswerQuestion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->butnAnswerQuestion->Name = L"butnAnswerQuestion";
			this->butnAnswerQuestion->Size = System::Drawing::Size(136, 69);
			this->butnAnswerQuestion->TabIndex = 37;
			this->butnAnswerQuestion->Text = L"RESPONDER PREGUNTAS";
			this->butnAnswerQuestion->UseVisualStyleBackColor = false;
			this->butnAnswerQuestion->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::butnAnswerQuestion_Click);
			// 
			// cmbRobot
			// 
			this->cmbRobot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmbRobot->FormattingEnabled = true;
			this->cmbRobot->Location = System::Drawing::Point(443, 165);
			this->cmbRobot->Margin = System::Windows::Forms::Padding(4);
			this->cmbRobot->Name = L"cmbRobot";
			this->cmbRobot->Size = System::Drawing::Size(160, 24);
			this->cmbRobot->TabIndex = 38;
			this->cmbRobot->SelectedIndexChanged += gcnew System::EventHandler(this, &SecurityOperatorForm::cmbRobot_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.66904F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.33096F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				148)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				141)));
			this->tableLayoutPanel1->Controls->Add(this->btnAsignZone, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnAccessCamera, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->butnAnswerQuestion, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnGetActualPosition, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(129, 251);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(571, 97);
			this->tableLayoutPanel1->TabIndex = 39;
			// 
			// SecurityOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(905, 508);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->cmbRobot);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnReviewAlarm);
			this->Controls->Add(this->txt_Alarm_state);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnDeactivateRobot);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SecurityOperatorForm";
			this->Text = L"SecurityOperatorForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &SecurityOperatorForm::SecurityOperatorForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAsignZone_Click(System::Object^ sender, System::EventArgs^ e) {
		//AsignZonesForm^ asignarrutaform = gcnew AsignZonesForm();
		////this->Hide();
		//asignarrutaform->Show();
		WebMapForm^ cameradataForm = gcnew WebMapForm();
		//this->Hide();
		cameradataForm->Show();
	}
	private: System::Void btnAccessCamera_Click(System::Object^ sender, System::EventArgs^ e) {
		SurveillanceCameraForm^ cameradataForm = gcnew SurveillanceCameraForm();
		//this->Hide();
		cameradataForm->Show();
	}
	private: System::Void btnGetActualPosition_Click(System::Object^ sender, System::EventArgs^ e) {
		RobotPositionForm^ robotpositionForm = gcnew RobotPositionForm();
		//this->Hide();
		robotpositionForm->Show();

	}
	private: System::Void btnReviewAlarm_Click(System::Object^ sender, System::EventArgs^ e) {
		RecognizeAlertForm^ recognizeAlertForm = gcnew RecognizeAlertForm();
		//this->Hide();
		recognizeAlertForm->Show();

	}
	private: System::Void butnAnswerQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		AnswerForm^ answerForm = gcnew AnswerForm();
		//this->Hide();
		answerForm->Show();

	}
	public:
		void FillRobotsInCombo() {
			cmbRobot->Items->Clear();
			List<SecurityBot^>^ robotsList = Controller::QueryAllRobots();
			//MessageBox::Show("Robots encontrados: " + robotsList->Count);
			for (int i = 0; i < robotsList->Count; i++) {
				cmbRobot->Items->Add(gcnew ComboBoxItem(robotsList[i]->Id, robotsList[i]->Name + " "));
			}

		}
		

	private: System::Void cmbRobot_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		SecurityBot^ robot = Controller::QueryRobotById(
			((ComboBoxItem^)(cmbRobot->Items[cmbRobot->SelectedIndex]))->Value);
		//cmbRobot->Text = robot->Name;
	}/*
		   Thread^ ThreadTitle;
		   Thread^ ThreadAlarm;
		   Thread^ ThreadRobot;*/
	private: System::Windows::Forms::Timer^ titleTimer;
	private: System::Windows::Forms::Timer^ alarmTimer;
	private: System::Windows::Forms::Timer^ robotsTimer;

	private: System::Void SecurityOperatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillRobotsInCombo();
		WelcomeOperatorForm^ login = gcnew WelcomeOperatorForm(this);
		login->ShowDialog();
			// --- Timer para título ---
		titleTimer = gcnew System::Windows::Forms::Timer();
		titleTimer->Interval = 1000; // cada 1 segundo
		titleTimer->Tick += gcnew EventHandler(this, &SecurityOperatorForm::TitleTimer_Tick);
		titleTimer->Start();

		// --- Timer para alarma ---
		alarmTimer = gcnew System::Windows::Forms::Timer();
		alarmTimer->Interval = 2000; // cada 2 segundos
		alarmTimer->Tick += gcnew EventHandler(this, &SecurityOperatorForm::AlarmTimer_Tick);
		alarmTimer->Start();

		// --- Timer para robots ---
		robotsTimer = gcnew System::Windows::Forms::Timer();
		robotsTimer->Interval = 5000; // cada 5 segundos
		robotsTimer->Tick += gcnew EventHandler(this, &SecurityOperatorForm::RobotsTimer_Tick);
		robotsTimer->Start();
	}
		   // ==== Timers que disparan threads ====
		private: System::Void TitleTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			Thread^ t = gcnew Thread(gcnew ThreadStart(this, &SecurityOperatorForm::UpdateTitleFromDB));
			t->IsBackground = true;
			t->Start();
		}

		private: System::Void AlarmTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			Thread^ t = gcnew Thread(gcnew ThreadStart(this, &SecurityOperatorForm::UpdateAlarmFromDB));
			t->IsBackground = true;
			t->Start();
		}

		private: System::Void RobotsTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			Thread^ t = gcnew Thread(gcnew ThreadStart(this, &SecurityOperatorForm::UpdateRobotsFromDB));
			t->IsBackground = true;
			t->Start();
		}

	   // ==== Métodos de consulta en segundo plano ====
	   void UpdateTitleFromDB() {
		   try {
			   // Simulación: aquí iría tu consulta real
			   Thread::Sleep(500); // simulando retraso de BD
			   String^ operador = (OperadorLogueado != nullptr)
				   ? OperadorLogueado->Name + " " + OperadorLogueado->LastName
				   : "Operador no registrado";
			   String^ title = "Sistema - " + operador + " - " + DateTime::Now.ToString("HH:mm:ss");

			   this->Invoke(gcnew Action<String^>(this, &SecurityOperatorForm::SetFormTitle), title);
		   }
		   catch (...) {}
	   }

	   void UpdateAlarmFromDB() {
		   try {
			   Thread::Sleep(500); // simulando BD
			   String^ alarmStatus = (numero_alarmas > 0) ? "ALERTA " : "Normal";
			   this->Invoke(gcnew Action<String^>(this, &SecurityOperatorForm::SetAlarmText), alarmStatus);
		   }
		   catch (...) {}
	   }

	   void UpdateRobotsFromDB() {
		   try {
			   Thread::Sleep(1000); // simulando consulta de BD
			   array<String^>^ robots = gcnew array<String^> { "Robot A", "Robot B", "Robot C" };
			   this->Invoke(gcnew Action<array<String^>^>(this, &SecurityOperatorForm::SetRobotsCombo), robots);
		   }
		   catch (...) {}
	   }

	   // ==== Métodos que actualizan la UI ====
	   void SetFormTitle(String^ text) {
		   this->Text = text;
	   }

	   void SetAlarmText(String^ status) {
		   this->txt_Alarm_state->Text = status;
	   }

	   void SetRobotsCombo(array<String^>^ robots) {
		   this->cmbRobot->Items->Clear();
		   for each (String ^ r in robots) {
			   this->cmbRobot->Items->Add(r);
		   }
	   }
		   //delegate void MyDelegate(String^);
		   //void MyAlarmUpdateProcess() {
			  // while (true) {
				 //  try {
					//   Thread::Sleep(2000);
					//   Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateAlarm), alarm);
				 //  }
				 //  catch (Exception^ ex) {
					//   return;
				 //  }
			  // }
		   //}
		   //void UpdateAlarm(String^ newTitle) {
			  // if (this->InvokeRequired) {
				 //  //hilo distinto al UI(form)
				 //  //No se puede modificar un txt fuera del hilo principal/
					//// por eso se verifica que estamos en el hilo mythread o si no lo invocamos
				 //  //esta es una manera segura de editar estos labels
				 //  this->Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateTitle), newTitle);
			  // }
			  // else {
				 //  this->Text = newTitle;
			  // }
		   //}
		   //void MyRobotUpdateProcess() {
			  // while (true) {
				 //  try {
					//   Thread::Sleep(1000);
					//   Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateRobots), robots);
				 //  }
				 //  catch (Exception^ ex) {
					//   return;
				 //  }
			  // }
		   //}
		   //void UpdateRobots(String^ newTitle) {
			  // if (this->InvokeRequired) {
				 //  //hilo distinto al UI(form)
				 //  //No se puede modificar un txt fuera del hilo principal/
					//// por eso se verifica que estamos en el hilo mythread o si no lo invocamos
				 //  //esta es una manera segura de editar estos labels
				 //  this->Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateTitle), newTitle);
			  // }
			  // else {
				 //  this->Text = newTitle;
			  // }
		   //}
		   //void UpdateTitleProcess() {
			  // String^ operador =  OperadorRegistrado->Name + " " + OperadorRegistrado->LastName ;

			  // while (true) {
				 //  try {
					//   Thread::Sleep(1000);
					//	String^ title = "Sistema de Seguridad - " + operador + " - " + DateTime::Now.ToString("HH:mm:ss");
					//   Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateTitle), title);
				 //  }
				 //  catch (Exception^ ex) {
					//   return;
				 //  }
			  // }
		   //}

		   //void UpdateTitle(String^ newTitle) {
			  // if (this->InvokeRequired) {
				 //  //hilo distinto al UI(form)
				 //  //No se puede modificar un txt fuera del hilo principal/
					//// por eso se verifica que estamos en el hilo mythread o si no lo invocamos
				 //  //esta es una manera segura de editar estos labels
				 //  this->Invoke(gcnew MyDelegate(this, &SecurityOperatorForm::UpdateTitle), newTitle);
			  // }
			  // else {
				 //  this->Text = newTitle;
			  // }
		   //}


	private: System::Void btnDeactivateRobot_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
}
};
}
