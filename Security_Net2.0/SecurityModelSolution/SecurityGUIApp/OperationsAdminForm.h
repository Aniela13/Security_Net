#pragma once
#include "UpdateMapForm.h"
#include "AlarmHistorialForm.h"
#include "ValidateOpForm.h"
#include "MaintainUser.h"
#include "ModifyFAQ.h"
#include "WebMapForm.h"

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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OperationsAdminForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUptateMap = (gcnew System::Windows::Forms::Button());
			this->btnAlarmHistorial = (gcnew System::Windows::Forms::Button());
			this->btnMaintainUser = (gcnew System::Windows::Forms::Button());
			this->btnUptateQuestions = (gcnew System::Windows::Forms::Button());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->SetColumnSpan(this->label1, 3);
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(175, 0);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->MaximumSize = System::Drawing::Size(700, 700);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(50, 20, 20, 20);
			this->label1->Size = System::Drawing::Size(525, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operaciones";
			this->label1->Click += gcnew System::EventHandler(this, &OperationsAdminForm::label1_Click);
			// 
			// btnUptateMap
			// 
			this->btnUptateMap->AutoSize = true;
			this->btnUptateMap->BackColor = System::Drawing::Color::SteelBlue;
			this->btnUptateMap->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnUptateMap->Location = System::Drawing::Point(30, 242);
			this->btnUptateMap->Margin = System::Windows::Forms::Padding(30, 2, 30, 2);
			this->btnUptateMap->MaximumSize = System::Drawing::Size(300, 300);
			this->btnUptateMap->Name = L"btnUptateMap";
			this->btnUptateMap->Size = System::Drawing::Size(115, 56);
			this->btnUptateMap->TabIndex = 1;
			this->btnUptateMap->Text = L"Actualizar Mapa";
			this->btnUptateMap->UseVisualStyleBackColor = false;
			this->btnUptateMap->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnUptateMap_Click);
			// 
			// btnAlarmHistorial
			// 
			this->btnAlarmHistorial->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnAlarmHistorial->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAlarmHistorial->Location = System::Drawing::Point(205, 242);
			this->btnAlarmHistorial->Margin = System::Windows::Forms::Padding(30, 2, 30, 2);
			this->btnAlarmHistorial->MaximumSize = System::Drawing::Size(300, 300);
			this->btnAlarmHistorial->Name = L"btnAlarmHistorial";
			this->btnAlarmHistorial->Size = System::Drawing::Size(115, 56);
			this->btnAlarmHistorial->TabIndex = 2;
			this->btnAlarmHistorial->Text = L"Historial de Alarmas";
			this->btnAlarmHistorial->UseVisualStyleBackColor = false;
			this->btnAlarmHistorial->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnAlarmHistorial_Click);
			// 
			// btnMaintainUser
			// 
			this->btnMaintainUser->BackColor = System::Drawing::Color::PowderBlue;
			this->btnMaintainUser->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnMaintainUser->Location = System::Drawing::Point(557, 242);
			this->btnMaintainUser->Margin = System::Windows::Forms::Padding(30, 2, 30, 2);
			this->btnMaintainUser->MaximumSize = System::Drawing::Size(300, 300);
			this->btnMaintainUser->Name = L"btnMaintainUser";
			this->btnMaintainUser->Size = System::Drawing::Size(113, 56);
			this->btnMaintainUser->TabIndex = 3;
			this->btnMaintainUser->Text = L"Eliminar Operador";
			this->btnMaintainUser->UseVisualStyleBackColor = false;
			this->btnMaintainUser->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnMaintainUser_Click);
			// 
			// btnUptateQuestions
			// 
			this->btnUptateQuestions->BackColor = System::Drawing::Color::LightBlue;
			this->btnUptateQuestions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnUptateQuestions->Location = System::Drawing::Point(380, 242);
			this->btnUptateQuestions->Margin = System::Windows::Forms::Padding(30, 2, 30, 2);
			this->btnUptateQuestions->MaximumSize = System::Drawing::Size(300, 300);
			this->btnUptateQuestions->Name = L"btnUptateQuestions";
			this->btnUptateQuestions->Size = System::Drawing::Size(117, 56);
			this->btnUptateQuestions->TabIndex = 4;
			this->btnUptateQuestions->Text = L"Administrar Preguntas";
			this->btnUptateQuestions->UseVisualStyleBackColor = false;
			this->btnUptateQuestions->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnUptateQuestions_Click);
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnValidateOp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnValidateOp->Location = System::Drawing::Point(730, 242);
			this->btnValidateOp->Margin = System::Windows::Forms::Padding(30, 2, 30, 2);
			this->btnValidateOp->MaximumSize = System::Drawing::Size(300, 300);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(115, 56);
			this->btnValidateOp->TabIndex = 5;
			this->btnValidateOp->Text = L"Aprobar Operador";
			this->btnValidateOp->UseVisualStyleBackColor = false;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &OperationsAdminForm::btnValidateOp_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->SetColumnSpan(this->label2, 3);
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(175, 120);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->MaximumSize = System::Drawing::Size(700, 700);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(10);
			this->label2->Size = System::Drawing::Size(525, 120);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Selecciona la operacion a realizar";
			this->label2->Click += gcnew System::EventHandler(this, &OperationsAdminForm::label2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.22857F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.77143F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->btnUptateMap, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAlarmHistorial, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnValidateOp, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnUptateQuestions, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnMaintainUser, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tableLayoutPanel1->Location = System::Drawing::Point(26, 100);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 3, 50, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(875, 300);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// OperationsAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(901, 563);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"OperationsAdminForm";
			this->Text = L"OperationsAdminForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void btnUptateQuestions_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifyFAQ^ administrationFAQ = gcnew ModifyFAQ();
		//this->Hide();
		administrationFAQ->Show();

	}

	private: System::Void btnUptateMap_Click(System::Object^ sender, System::EventArgs^ e) {
		//UpdateMapForm^ mapForm = gcnew UpdateMapForm(); 
		////this->Hide();
		//mapForm->Show(); 
		WebMapForm^ mapForm = gcnew WebMapForm();
		//this->Hide();
		mapForm->Show();

	}
	private: System::Void btnAlarmHistorial_Click(System::Object^ sender, System::EventArgs^ e) {
		AlarmHistorialForm^ alarmhistorialForm = gcnew AlarmHistorialForm(); 
		//this->Hide();
		alarmhistorialForm->Show();

	}

	private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ e) {
		List<SecurityOperator^>^ op = Controller::QueryAllNoRegisteredOperators();
		//if (op != nullptr) {
		this->btnValidateOp->Visible = true;
		this->btnValidateOp->Enabled = true;
		this->btnValidateOp->BackColor = System::Drawing::Color::Green;
		ValidateOpForm^ validateOpForm = gcnew ValidateOpForm();
		//this->Hide();
		validateOpForm->Show();

		//}
	}
	private: System::Void btnMaintainUser_Click(System::Object^ sender, System::EventArgs^ e) {
		MaintainUser^ maintainUser = gcnew MaintainUser();
		//this->Hide();
		maintainUser->Show();
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
