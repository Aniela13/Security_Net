#pragma once
#include "UpdateMapForm.h"
#include "AlarmHistorialForm.h"
#include "ValidateOpForm.h"
#include "MaintainUser.h"
#include "ModifyFAQ.h"

namespace SecurityGUIApp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OperationsAdminForm
	/// </summary>
	public ref class OperationsAdminForm : public System::Windows::Forms::Form
	{
	public:
		OperationsAdminForm(void)
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
		~OperationsAdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnUptateMap;
	private: System::Windows::Forms::Button^ btnAlarmHistorial;
	private: System::Windows::Forms::Button^ btnMaintainUser;
	private: System::Windows::Forms::Button^ btnUptateQuestions;
	private: System::Windows::Forms::Button^ btnValidateOp;





	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUptateMap = (gcnew System::Windows::Forms::Button());
			this->btnAlarmHistorial = (gcnew System::Windows::Forms::Button());
			this->btnMaintainUser = (gcnew System::Windows::Forms::Button());
			this->btnUptateQuestions = (gcnew System::Windows::Forms::Button());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(340, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operaciones";
			// 
			// btnUptateMap
			// 
			this->btnUptateMap->Location = System::Drawing::Point(68, 200);
			this->btnUptateMap->Name = L"btnUptateMap";
			this->btnUptateMap->Size = System::Drawing::Size(109, 70);
			this->btnUptateMap->TabIndex = 1;
			this->btnUptateMap->Text = L"Actualizar Mapa";
			this->btnUptateMap->UseVisualStyleBackColor = true;
			this->btnUptateMap->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnUptateMap_Click);
			// 
			// btnAlarmHistorial
			// 
			this->btnAlarmHistorial->Location = System::Drawing::Point(249, 200);
			this->btnAlarmHistorial->Name = L"btnAlarmHistorial";
			this->btnAlarmHistorial->Size = System::Drawing::Size(94, 70);
			this->btnAlarmHistorial->TabIndex = 2;
			this->btnAlarmHistorial->Text = L"Historial de Alarmas";
			this->btnAlarmHistorial->UseVisualStyleBackColor = true;
			this->btnAlarmHistorial->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnAlarmHistorial_Click);
			// 
			// btnMaintainUser
			// 
			this->btnMaintainUser->Location = System::Drawing::Point(582, 199);
			this->btnMaintainUser->Name = L"btnMaintainUser";
			this->btnMaintainUser->Size = System::Drawing::Size(102, 71);
			this->btnMaintainUser->TabIndex = 3;
			this->btnMaintainUser->Text = L"Eliminar Operador";
			this->btnMaintainUser->UseVisualStyleBackColor = true;
			this->btnMaintainUser->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnMaintainUser_Click);
			// 
			// btnUptateQuestions
			// 
			this->btnUptateQuestions->Location = System::Drawing::Point(428, 199);
			this->btnUptateQuestions->Name = L"btnUptateQuestions";
			this->btnUptateQuestions->Size = System::Drawing::Size(96, 71);
			this->btnUptateQuestions->TabIndex = 4;
			this->btnUptateQuestions->Text = L"Administrar Preguntas";
			this->btnUptateQuestions->UseVisualStyleBackColor = true;
			this->btnUptateQuestions->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnUptateQuestions_Click);
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->Location = System::Drawing::Point(739, 199);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(105, 71);
			this->btnValidateOp->TabIndex = 5;
			this->btnValidateOp->Text = L"Aprobar Operador";
			this->btnValidateOp->UseVisualStyleBackColor = true;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnValidateOp_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(302, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Selecciona la operacion a realizar";
			// 
			// OperationsAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 320);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnValidateOp);
			this->Controls->Add(this->btnUptateQuestions);
			this->Controls->Add(this->btnMaintainUser);
			this->Controls->Add(this->btnAlarmHistorial);
			this->Controls->Add(this->btnUptateMap);
			this->Controls->Add(this->label1);
			this->Name = L"OperationsAdminForm";
			this->Text = L"OperationsAdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnUptateQuestions_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifyFAQ^ administrationFAQ = gcnew ModifyFAQ();
		this->Hide();
		administrationFAQ->Show();

	}

	private: System::Void btnUptateMap_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateMapForm^ mapForm = gcnew UpdateMapForm(); 
		this->Hide();
		mapForm->Show(); 

	}
	private: System::Void btnAlarmHistorial_Click(System::Object^ sender, System::EventArgs^ e) {
		AlarmHistorialForm^ alarmhistorialForm = gcnew AlarmHistorialForm(); 
		this->Hide();
		alarmhistorialForm->Show();

	}

	private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ e) {
		List<SecurityOperator^>^ op = Controller::QueryAllNoRegisteredOperators();
		//if (op != nullptr) {
		this->btnValidateOp->Visible = true;
		this->btnValidateOp->Enabled = true;
		this->btnValidateOp->BackColor = System::Drawing::Color::Green;
		ValidateOpForm^ validateOpForm = gcnew ValidateOpForm();
		this->Hide();
		validateOpForm->Show();

		//}
	}
	private: System::Void btnMaintainUser_Click(System::Object^ sender, System::EventArgs^ e) {
		MaintainUser^ maintainUser = gcnew MaintainUser();
		this->Hide();
		maintainUser->Show();
	}
};
}
