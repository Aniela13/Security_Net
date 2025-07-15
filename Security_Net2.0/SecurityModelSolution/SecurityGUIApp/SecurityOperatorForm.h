#pragma once
#include "RobotPositionForm.h"
#include "SurveillanceCameraForm.h"
#include "RecognizeAlertForm.h"
#include "AnswerForm.h"
#include "AsignZonesForm.h"
#include "WebMapForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SecurityOperatorForm
	/// </summary>
	public ref class SecurityOperatorForm : public System::Windows::Forms::Form
	{
	public:
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

	private: System::Windows::Forms::TextBox^ txtActualRobot;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnDeactivateRobot;
	private: System::Windows::Forms::Button^ btnAccessCamera;
	private: System::Windows::Forms::Button^ btnGetActualPosition;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnReviewAlarm;

	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Button^ butnAnswerQuestion;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecurityOperatorForm::typeid));
			this->btnAsignZone = (gcnew System::Windows::Forms::Button());
			this->txtActualRobot = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDeactivateRobot = (gcnew System::Windows::Forms::Button());
			this->btnAccessCamera = (gcnew System::Windows::Forms::Button());
			this->btnGetActualPosition = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->butnAnswerQuestion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAsignZone
			// 
			this->btnAsignZone->Location = System::Drawing::Point(31, 238);
			this->btnAsignZone->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAsignZone->Name = L"btnAsignZone";
			this->btnAsignZone->Size = System::Drawing::Size(102, 56);
			this->btnAsignZone->TabIndex = 26;
			this->btnAsignZone->Text = L"ASIGNAR ZONA DE INSPECCION";
			this->btnAsignZone->UseVisualStyleBackColor = true;
			this->btnAsignZone->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAsignZone_Click);
			// 
			// txtActualRobot
			// 
			this->txtActualRobot->Location = System::Drawing::Point(352, 136);
			this->txtActualRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtActualRobot->Name = L"txtActualRobot";
			this->txtActualRobot->ReadOnly = true;
			this->txtActualRobot->Size = System::Drawing::Size(76, 20);
			this->txtActualRobot->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(212, 136);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 19);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Robot en linea: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(235, 65);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 37);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Bienvenido";
			// 
			// btnDeactivateRobot
			// 
			this->btnDeactivateRobot->BackColor = System::Drawing::Color::Brown;
			this->btnDeactivateRobot->ForeColor = System::Drawing::SystemColors::Control;
			this->btnDeactivateRobot->Location = System::Drawing::Point(22, 366);
			this->btnDeactivateRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDeactivateRobot->Name = L"btnDeactivateRobot";
			this->btnDeactivateRobot->Size = System::Drawing::Size(152, 28);
			this->btnDeactivateRobot->TabIndex = 28;
			this->btnDeactivateRobot->Text = L"DESACTIVAR ROBOT";
			this->btnDeactivateRobot->UseVisualStyleBackColor = false;
			// 
			// btnAccessCamera
			// 
			this->btnAccessCamera->Location = System::Drawing::Point(154, 238);
			this->btnAccessCamera->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAccessCamera->Name = L"btnAccessCamera";
			this->btnAccessCamera->Size = System::Drawing::Size(102, 56);
			this->btnAccessCamera->TabIndex = 29;
			this->btnAccessCamera->Text = L"ACCEDER A CAMARA";
			this->btnAccessCamera->UseVisualStyleBackColor = true;
			this->btnAccessCamera->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAccessCamera_Click);
			// 
			// btnGetActualPosition
			// 
			this->btnGetActualPosition->Location = System::Drawing::Point(271, 238);
			this->btnGetActualPosition->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGetActualPosition->Name = L"btnGetActualPosition";
			this->btnGetActualPosition->Size = System::Drawing::Size(102, 56);
			this->btnGetActualPosition->TabIndex = 30;
			this->btnGetActualPosition->Text = L"POSICION ACTUAL";
			this->btnGetActualPosition->UseVisualStyleBackColor = true;
			this->btnGetActualPosition->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnGetActualPosition_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Marlett", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::IndianRed;
			this->label3->Location = System::Drawing::Point(554, 251);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 32);
			this->label3->TabIndex = 31;
			this->label3->Text = L"ALARMAS";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(596, 299);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.134328F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(537, 299);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 19);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Estado: ";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->BackColor = System::Drawing::Color::YellowGreen;
			this->btnReviewAlarm->Location = System::Drawing::Point(557, 334);
			this->btnReviewAlarm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(100, 59);
			this->btnReviewAlarm->TabIndex = 34;
			this->btnReviewAlarm->Text = L"REVISAR ALARMA";
			this->btnReviewAlarm->UseVisualStyleBackColor = false;
			this->btnReviewAlarm->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnReviewAlarm_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(9, 10);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 36;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// butnAnswerQuestion
			// 
			this->butnAnswerQuestion->Location = System::Drawing::Point(388, 238);
			this->butnAnswerQuestion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->butnAnswerQuestion->Name = L"butnAnswerQuestion";
			this->butnAnswerQuestion->Size = System::Drawing::Size(102, 56);
			this->butnAnswerQuestion->TabIndex = 37;
			this->butnAnswerQuestion->Text = L"RESPONDER PREGUNTAS";
			this->butnAnswerQuestion->UseVisualStyleBackColor = true;
			this->butnAnswerQuestion->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::butnAnswerQuestion_Click);
			// 
			// SecurityOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(679, 413);
			this->Controls->Add(this->butnAnswerQuestion);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnReviewAlarm);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnGetActualPosition);
			this->Controls->Add(this->btnAccessCamera);
			this->Controls->Add(this->btnDeactivateRobot);
			this->Controls->Add(this->btnAsignZone);
			this->Controls->Add(this->txtActualRobot);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SecurityOperatorForm";
			this->Text = L"SecurityOperatorForm";
			this->Load += gcnew System::EventHandler(this, &SecurityOperatorForm::SecurityOperatorForm_Load);
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
private: System::Void SecurityOperatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtActualRobot->Text = "Michi";

}
};
}
