#pragma once
#include "ComboBoxItem.h"
#include "ValidateOpForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SecurityModel; 
	using namespace SecurityController;

	/// <summary>
	/// Resumen de AlarmHistorialForm
	/// </summary>
	public ref class AlarmHistorialForm : public System::Windows::Forms::Form
	{
	public:
		AlarmHistorialForm(void)
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
		~AlarmHistorialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ReporteToolStripMenuItem;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvAlarmHistorial;
	private: System::Windows::Forms::DateTimePicker^ dtpFirstDate;















	private: System::Windows::Forms::Button^ btnValidateOp;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dtpEndDate;




	private: System::Windows::Forms::ComboBox^ cmbAlarmType;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnFilterbyType;




	private: System::Windows::Forms::Button^ btnClearSearch;
	private: System::Windows::Forms::Button^ btnSearchbyDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cstarting;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cending;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::LinkLabel^ linklblSearch;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AlarmHistorialForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ReporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvAlarmHistorial = (gcnew System::Windows::Forms::DataGridView());
			this->cstarting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cending = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtpFirstDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbAlarmType = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnFilterbyType = (gcnew System::Windows::Forms::Button());
			this->btnClearSearch = (gcnew System::Windows::Forms::Button());
			this->btnSearchbyDate = (gcnew System::Windows::Forms::Button());
			this->linklblSearch = (gcnew System::Windows::Forms::LinkLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlarmHistorial))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ReporteToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1204, 34);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ReporteToolStripMenuItem
			// 
			this->ReporteToolStripMenuItem->Name = L"ReporteToolStripMenuItem";
			this->ReporteToolStripMenuItem->Size = System::Drawing::Size(176, 27);
			this->ReporteToolStripMenuItem->Text = L"Reporte de Alarmas";
			this->ReporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::ReporteToolStripMenuItem_Click_1);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel2->SetColumnSpan(this->label1, 3);
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 0);
			this->label1->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"HISTORIAL DE ALARMAS";
			this->label1->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::label1_Click);
			// 
			// dgvAlarmHistorial
			// 
			this->dgvAlarmHistorial->AllowUserToOrderColumns = true;
			this->dgvAlarmHistorial->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgvAlarmHistorial->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvAlarmHistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlarmHistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->cstarting,
					this->cending, this->Column1, this->Column2
			});
			this->dgvAlarmHistorial->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvAlarmHistorial->GridColor = System::Drawing::Color::Gray;
			this->dgvAlarmHistorial->Location = System::Drawing::Point(40, 247);
			this->dgvAlarmHistorial->Margin = System::Windows::Forms::Padding(40, 20, 120, 40);
			this->dgvAlarmHistorial->Name = L"dgvAlarmHistorial";
			this->dgvAlarmHistorial->RowHeadersWidth = 51;
			this->dgvAlarmHistorial->RowTemplate->Height = 24;
			this->dgvAlarmHistorial->Size = System::Drawing::Size(828, 307);
			this->dgvAlarmHistorial->TabIndex = 3;
			this->dgvAlarmHistorial->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AlarmHistorialForm::dgvAlarmHistorial_CellContentClick);
			this->dgvAlarmHistorial->CellToolTipTextNeeded += gcnew System::Windows::Forms::DataGridViewCellToolTipTextNeededEventHandler(this, &AlarmHistorialForm::dgvAlarmHistorial_CellToolTipTextNeeded);
			// 
			// cstarting
			// 
			this->cstarting->HeaderText = L"Alarma Activada (Fecha y Hora)";
			this->cstarting->MinimumWidth = 6;
			this->cstarting->Name = L"cstarting";
			this->cstarting->Width = 125;
			// 
			// cending
			// 
			this->cending->HeaderText = L"Alarma Desactivada (Fecha y Hora)";
			this->cending->MinimumWidth = 6;
			this->cending->Name = L"cending";
			this->cending->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Categoría";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripcion";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 400;
			// 
			// dtpFirstDate
			// 
			this->dtpFirstDate->Location = System::Drawing::Point(307, 51);
			this->dtpFirstDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpFirstDate->Name = L"dtpFirstDate";
			this->dtpFirstDate->Size = System::Drawing::Size(271, 22);
			this->dtpFirstDate->TabIndex = 5;
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnValidateOp->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValidateOp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnValidateOp->Location = System::Drawing::Point(20, 20);
			this->btnValidateOp->Margin = System::Windows::Forms::Padding(20);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(170, 92);
			this->btnValidateOp->TabIndex = 10;
			this->btnValidateOp->Text = L"Aprobar \r\nOperador";
			this->btnValidateOp->UseVisualStyleBackColor = false;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnValidateOp_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(307, 186);
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(147, 23);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnSearch_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(30, 152);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(30, 20, 15, 20);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnGoBackMenu_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 49);
			this->label4->Margin = System::Windows::Forms::Padding(30, 0, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 16);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Selecciona una fecha y/u hora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 98);
			this->label5->Margin = System::Windows::Forms::Padding(30, 0, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 16);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Selecciona una fecha y/u hora";
			this->label5->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::label5_Click);
			// 
			// dtpEndDate
			// 
			this->dtpEndDate->Location = System::Drawing::Point(307, 100);
			this->dtpEndDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEndDate->Name = L"dtpEndDate";
			this->dtpEndDate->Size = System::Drawing::Size(271, 22);
			this->dtpEndDate->TabIndex = 40;
			// 
			// cmbAlarmType
			// 
			this->cmbAlarmType->FormattingEnabled = true;
			this->cmbAlarmType->Location = System::Drawing::Point(307, 150);
			this->cmbAlarmType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbAlarmType->Name = L"cmbAlarmType";
			this->cmbAlarmType->Size = System::Drawing::Size(271, 24);
			this->cmbAlarmType->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 148);
			this->label2->Margin = System::Windows::Forms::Padding(30, 0, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Categoría";
			// 
			// btnFilterbyType
			// 
			this->btnFilterbyType->Location = System::Drawing::Point(714, 100);
			this->btnFilterbyType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFilterbyType->Name = L"btnFilterbyType";
			this->btnFilterbyType->Size = System::Drawing::Size(181, 23);
			this->btnFilterbyType->TabIndex = 43;
			this->btnFilterbyType->Text = L"BUSCAR POR CATEGORIA";
			this->btnFilterbyType->UseVisualStyleBackColor = true;
			this->btnFilterbyType->Visible = false;
			this->btnFilterbyType->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnFilterbyType_Click);
			// 
			// btnClearSearch
			// 
			this->btnClearSearch->Location = System::Drawing::Point(714, 187);
			this->btnClearSearch->Name = L"btnClearSearch";
			this->btnClearSearch->Size = System::Drawing::Size(140, 23);
			this->btnClearSearch->TabIndex = 44;
			this->btnClearSearch->Text = L"Limpiar búsqueda";
			this->btnClearSearch->UseVisualStyleBackColor = true;
			this->btnClearSearch->Visible = false;
			this->btnClearSearch->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnClearSearch_Click);
			// 
			// btnSearchbyDate
			// 
			this->btnSearchbyDate->Location = System::Drawing::Point(714, 52);
			this->btnSearchbyDate->Name = L"btnSearchbyDate";
			this->btnSearchbyDate->Size = System::Drawing::Size(181, 30);
			this->btnSearchbyDate->TabIndex = 45;
			this->btnSearchbyDate->Text = L"BUSCAR POR FECHA";
			this->btnSearchbyDate->UseVisualStyleBackColor = true;
			this->btnSearchbyDate->Visible = false;
			this->btnSearchbyDate->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnSearchbyDate_Click);
			// 
			// linklblSearch
			// 
			this->linklblSearch->AutoSize = true;
			this->linklblSearch->Location = System::Drawing::Point(714, 148);
			this->linklblSearch->Name = L"linklblSearch";
			this->linklblSearch->Size = System::Drawing::Size(133, 16);
			this->linklblSearch->TabIndex = 46;
			this->linklblSearch->TabStop = true;
			this->linklblSearch->Text = L"Búsqueda Avanzada";
			this->linklblSearch->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AlarmHistorialForm::linklblSearch_LinkClicked);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				82.09983F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				17.90017F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dgvAlarmHistorial, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 34);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.23529F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 61.76471F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1204, 594);
			this->tableLayoutPanel1->TabIndex = 47;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.69973F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.30027F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				186)));
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnClearSearch, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->linklblSearch, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnSearchbyDate, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnFilterbyType, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->dtpFirstDate, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->cmbAlarmType, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->btnSearch, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->dtpEndDate, 1, 2);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(898, 221);
			this->tableLayoutPanel2->TabIndex = 48;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->btnGoBackMenu, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->btnValidateOp, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(991, 324);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 135)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(210, 267);
			this->tableLayoutPanel3->TabIndex = 49;
			// 
			// AlarmHistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1204, 628);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AlarmHistorialForm";
			this->Text = L"AlarmHistorialForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AlarmHistorialForm::AlarmHistorialForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlarmHistorial))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
		void showAlarmHistorial() {
			List<Warning^>^ historial = Controller::QueryAllWarnings();
			if (historial != nullptr) {
				dgvAlarmHistorial->Rows->Clear();
				for (int i = 0; i < historial->Count; i++) {
					dgvAlarmHistorial->Rows->Add(gcnew array<String^> {historial[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
						historial[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
						historial[i]->Type->Name,
						historial[i]->Description});
				}

			}
		}
	public:
		void ClearControls() {
			
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == ComboBox::typeid) {
					//PONER FECHA DEL DIA EN COMOBOBOX POR DEFECTO
					cmbAlarmType->Items->Clear();  // Limpia los ítems del ComboBox
					cmbAlarmType->Text = "";       // Limpia el texto seleccionado
				}
			}
		}
	public:
		void InitializeDateTimePickers(){
			dtpFirstDate->Format = DateTimePickerFormat::Custom;
			dtpEndDate->Format = DateTimePickerFormat::Custom;
			dtpFirstDate->CustomFormat = "dd/MM/yyyy HH:mm tt";
			dtpEndDate->CustomFormat = "dd/MM/yyyy HH:mm tt";
			dtpFirstDate->ShowUpDown = true; // Opcional para controles de hora
			dtpEndDate->ShowUpDown = true; // Opcional para controles de hora
			dtpFirstDate->Value = DateTime::Now; // Establecer la fecha y hora actual
			dtpEndDate->Value = DateTime::Now; // Establecer la fecha y hora actual
			dtpFirstDate->ShowCheckBox = false;
			dtpEndDate->ShowCheckBox = false;

		}

	public:
		void FillSectorsInComboBox() {
			cmbAlarmType->Items->Clear();
			List<WarningType^>^ alarmtypes = Controller::QueryAllWarningsType();
			if (alarmtypes != nullptr) {
				for each(WarningType ^ type in alarmtypes) {
					cmbAlarmType->Items->Add(gcnew ComboBoxItem(type->Id -1, type->Name));
				}
			}
		}
	public: 
		void ShowHistorialbyDate(DateTime start, DateTime end) {
			List<Warning^>^ warnings = Controller::QueryAllWarningsbyDate(start,end);
			if (warnings != nullptr) {
				dgvAlarmHistorial->Rows->Clear();
				for (int i = 0; i < warnings->Count; i++) {
					dgvAlarmHistorial->Rows->Add(gcnew array<String^> {warnings[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
						warnings[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
						warnings[i]->Type->Name,
						warnings[i]->Description });
				}

			}
		}
	public:
		void ShowHistorialbyType(int idtype) {
			/*Asegurar que la columna adicional exista
			if (dgvAlarmHistorial->Columns["Tip"] == nullptr) {
				DataGridViewTextBoxColumn^ colTipoExtra = gcnew DataGridViewTextBoxColumn();
				colTipoExtra->Name = "TipoExtra";
				colTipoExtra->HeaderText = "Tipo Extra";
				dgvAlarmHistorial->Columns->Add(colTipoExtra);
			}*/
			List<Warning^>^ warnings = Controller::QueryAllWarningsbyType(idtype);
			if (warnings != nullptr) {
				dgvAlarmHistorial->Rows->Clear();
				for (int i = 0; i < warnings->Count; i++) {
					dgvAlarmHistorial->Rows->Add(gcnew array<String^> {warnings[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
						warnings[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
						warnings[i]->Type->Name,
						warnings[i]->Description});
				}

			}
		}
	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	
	private: System::Void btnSearchbyDate_Click(System::Object^ sender, System::EventArgs^ e) {
		btnFilterbyType->Visible = false;
		cmbAlarmType->Visible = false; 
		dtpFirstDate->ShowCheckBox = true;
		dtpEndDate->ShowCheckBox = true;

		if (dtpFirstDate->Checked && dtpEndDate->Checked) {
			DateTime startrange = dtpFirstDate->Value;
			DateTime endrange = dtpEndDate->Value;
			if (startrange < endrange) {
				ShowHistorialbyDate(startrange, endrange); 
				btnClearSearch->Visible;
			}
		}
		else {
			MessageBox::Show("Se debe seleccionar un rango de fechas");
			return;
		}
		

	}

	private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ e) {
		List<SecurityOperator^>^ lista = Controller::QueryAllNoRegisteredOperators();
		if (lista != nullptr) {
			this->btnValidateOp->Visible = true;
			this->btnValidateOp->Enabled = true;
			this->btnValidateOp->BackColor = System::Drawing::Color::Green;
			ValidateOpForm^ validateOpForm = gcnew ValidateOpForm();
			this->Hide();
			validateOpForm->Show();

		}
		else {
			this->btnValidateOp->BackColor = System::Drawing::Color::White;
			this->btnValidateOp->Enabled = false;
		}
	}
	
	private: System::Void btnFilterbyType_Click(System::Object^ sender, System::EventArgs^ e) {
		btnSearchbyDate->Visible = false; 
		dtpEndDate->Visible = false; 
		dtpFirstDate->Visible = false; 
		int selectedIndex = cmbAlarmType->SelectedIndex;
		if (selectedIndex >= 0) {
			ShowHistorialbyType(selectedIndex+1);
			btnClearSearch->Visible;
		}
		else {
			MessageBox::Show("Se debe seleccionar una categoría del combobox");
			return;
		}
	}
	private: System::Void AlarmHistorialForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showAlarmHistorial();
		FillSectorsInComboBox();
		InitializeDateTimePickers();
	}

	private: System::Void btnClearSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvAlarmHistorial->Rows->Clear();
		btnSearchbyDate->Visible = true;
		dtpEndDate->Visible = true;
		dtpFirstDate->Visible = true;
		btnFilterbyType->Visible = true;
		cmbAlarmType->Visible = true;
		linklblSearch->Visible = true;
		ClearControls();

	}
	private: System::Void dgvAlarmHistorial_CellToolTipTextNeeded(System::Object^ sender, System::Windows::Forms::DataGridViewCellToolTipTextNeededEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			Object^ value = dgvAlarmHistorial->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
			if (value != nullptr) {
				String^ texto = value->ToString();
				if (texto->Length > 40) { // si es muy largo, muestra tooltip
					e->ToolTipText = texto;
				}
			}
		}
	}
	private: System::Void ReporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void linklblSearch_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		btnClearSearch->Visible = false; 
		btnSearchbyDate->Visible = true; 
		btnFilterbyType->Visible = true; 
		btnSearch->Visible = false; 
		linklblSearch->Visible = false;
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void ReporteToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e); 
	
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvAlarmHistorial_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
