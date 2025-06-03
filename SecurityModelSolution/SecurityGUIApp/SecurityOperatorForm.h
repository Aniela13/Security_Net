#pragma once
#include "RobotPositionForm.h"
#include "SurveillanceCameraForm.h"
#include "RecognizeAlertForm.h"
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
	private: System::Windows::Forms::TextBox^ txtOperatorName;
	private: System::Windows::Forms::Button^ btnDeactivateRobot;
	private: System::Windows::Forms::Button^ btnAccessCamera;
	private: System::Windows::Forms::Button^ btnGetActualPosition;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnReviewAlarm;

	private: System::Windows::Forms::Button^ btnGoBackMenu;



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
			this->txtOperatorName = (gcnew System::Windows::Forms::TextBox());
			this->btnDeactivateRobot = (gcnew System::Windows::Forms::Button());
			this->btnAccessCamera = (gcnew System::Windows::Forms::Button());
			this->btnGetActualPosition = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAsignZone
			// 
			this->btnAsignZone->Location = System::Drawing::Point(41, 293);
			this->btnAsignZone->Name = L"btnAsignZone";
			this->btnAsignZone->Size = System::Drawing::Size(136, 69);
			this->btnAsignZone->TabIndex = 26;
			this->btnAsignZone->Text = L"ASIGNAR ZONA DE INSPECCION";
			this->btnAsignZone->UseVisualStyleBackColor = true;
			this->btnAsignZone->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAsignZone_Click);
			// 
			// txtActualRobot
			// 
			this->txtActualRobot->Location = System::Drawing::Point(471, 167);
			this->txtActualRobot->Name = L"txtActualRobot";
			this->txtActualRobot->Size = System::Drawing::Size(100, 22);
			this->txtActualRobot->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Marlett", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(299, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 23);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Robot en linea: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(274, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 32);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Bienvenido";
			// 
			// txtOperatorName
			// 
			this->txtOperatorName->Location = System::Drawing::Point(471, 106);
			this->txtOperatorName->Name = L"txtOperatorName";
			this->txtOperatorName->Size = System::Drawing::Size(100, 22);
			this->txtOperatorName->TabIndex = 27;
			// 
			// btnDeactivateRobot
			// 
			this->btnDeactivateRobot->BackColor = System::Drawing::Color::Brown;
			this->btnDeactivateRobot->ForeColor = System::Drawing::SystemColors::Control;
			this->btnDeactivateRobot->Location = System::Drawing::Point(30, 450);
			this->btnDeactivateRobot->Name = L"btnDeactivateRobot";
			this->btnDeactivateRobot->Size = System::Drawing::Size(203, 34);
			this->btnDeactivateRobot->TabIndex = 28;
			this->btnDeactivateRobot->Text = L"DESACTIVAR ROBOT";
			this->btnDeactivateRobot->UseVisualStyleBackColor = false;
			// 
			// btnAccessCamera
			// 
			this->btnAccessCamera->Location = System::Drawing::Point(230, 293);
			this->btnAccessCamera->Name = L"btnAccessCamera";
			this->btnAccessCamera->Size = System::Drawing::Size(136, 69);
			this->btnAccessCamera->TabIndex = 29;
			this->btnAccessCamera->Text = L"ACCEDER A CAMARA";
			this->btnAccessCamera->UseVisualStyleBackColor = true;
			this->btnAccessCamera->Click += gcnew System::EventHandler(this, &SecurityOperatorForm::btnAccessCamera_Click);
			// 
			// btnGetActualPosition
			// 
			this->btnGetActualPosition->Location = System::Drawing::Point(421, 293);
			this->btnGetActualPosition->Name = L"btnGetActualPosition";
			this->btnGetActualPosition->Size = System::Drawing::Size(136, 69);
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
			this->label3->Location = System::Drawing::Point(738, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 39);
			this->label3->TabIndex = 31;
			this->label3->Text = L"ALARMAS";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(794, 368);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Marlett", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->btnReviewAlarm->BackColor = System::Drawing::Color::YellowGreen;
			this->btnReviewAlarm->Location = System::Drawing::Point(743, 411);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(134, 73);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(12, 12);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 36;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// SecurityOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 508);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnReviewAlarm);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnGetActualPosition);
			this->Controls->Add(this->btnAccessCamera);
			this->Controls->Add(this->btnDeactivateRobot);
			this->Controls->Add(this->txtOperatorName);
			this->Controls->Add(this->btnAsignZone);
			this->Controls->Add(this->txtActualRobot);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SecurityOperatorForm";
			this->Text = L"SecurityOperatorForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnAsignZone_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAccessCamera_Click(System::Object^ sender, System::EventArgs^ e) {
		SurveillanceCameraForm^ cameradataForm = gcnew SurveillanceCameraForm();
		this->Hide();
		cameradataForm->Show();
	}
	private: System::Void btnGetActualPosition_Click(System::Object^ sender, System::EventArgs^ e) {
		RobotPositionForm^ robotpositionForm = gcnew RobotPositionForm();
		this->Hide();
		robotpositionForm->Show();

	}
	private: System::Void btnReviewAlarm_Click(System::Object^ sender, System::EventArgs^ e) {
		RecognizeAlertForm^ recognizeAlertForm = gcnew RecognizeAlertForm(); 
		this->Hide();
		recognizeAlertForm->Show();

	}
};
}
