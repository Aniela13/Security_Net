#pragma once
#include "ComboBoxItem.h"

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
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarMapaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mapaToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvAlarmHistorial;
	private: System::Windows::Forms::DateTimePicker^ dtpFirstDate;








	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtType;




	private: System::Windows::Forms::Button^ btnValidateOp;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dtpEndDate;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cstarting;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cending;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::ComboBox^ cmbAlarmType;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnFilterbyType;









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
			this->mantenimientoUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarMapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvAlarmHistorial = (gcnew System::Windows::Forms::DataGridView());
			this->cstarting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cending = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtpFirstDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtType = (gcnew System::Windows::Forms::TextBox());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbAlarmType = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnFilterbyType = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlarmHistorial))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoUsuarioToolStripMenuItem,
					this->actualizarMapaToolStripMenuItem, this->mapaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(675, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoUsuarioToolStripMenuItem
			// 
			this->mantenimientoUsuarioToolStripMenuItem->Name = L"mantenimientoUsuarioToolStripMenuItem";
			this->mantenimientoUsuarioToolStripMenuItem->Size = System::Drawing::Size(144, 20);
			this->mantenimientoUsuarioToolStripMenuItem->Text = L"Mantenimiento Usuario";
			// 
			// actualizarMapaToolStripMenuItem
			// 
			this->actualizarMapaToolStripMenuItem->Name = L"actualizarMapaToolStripMenuItem";
			this->actualizarMapaToolStripMenuItem->Size = System::Drawing::Size(104, 20);
			this->actualizarMapaToolStripMenuItem->Text = L"Actualizar Mapa";
			// 
			// mapaToolStripMenuItem
			// 
			this->mapaToolStripMenuItem->Name = L"mapaToolStripMenuItem";
			this->mapaToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->mapaToolStripMenuItem->Text = L"Mapa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(194, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"HISTORIAL DE ALARMAS";
			// 
			// dgvAlarmHistorial
			// 
			this->dgvAlarmHistorial->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgvAlarmHistorial->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvAlarmHistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlarmHistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->cstarting,
					this->cending, this->Column1
			});
			this->dgvAlarmHistorial->GridColor = System::Drawing::Color::Gray;
			this->dgvAlarmHistorial->Location = System::Drawing::Point(51, 206);
			this->dgvAlarmHistorial->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvAlarmHistorial->Name = L"dgvAlarmHistorial";
			this->dgvAlarmHistorial->RowHeadersWidth = 51;
			this->dgvAlarmHistorial->RowTemplate->Height = 24;
			this->dgvAlarmHistorial->Size = System::Drawing::Size(349, 156);
			this->dgvAlarmHistorial->TabIndex = 3;
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
			// dtpFirstDate
			// 
			this->dtpFirstDate->Location = System::Drawing::Point(197, 71);
			this->dtpFirstDate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dtpFirstDate->Name = L"dtpFirstDate";
			this->dtpFirstDate->Size = System::Drawing::Size(204, 20);
			this->dtpFirstDate->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 402);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Descripción";
			// 
			// txtType
			// 
			this->txtType->Location = System::Drawing::Point(108, 402);
			this->txtType->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtType->Multiline = true;
			this->txtType->Name = L"txtType";
			this->txtType->ReadOnly = true;
			this->txtType->Size = System::Drawing::Size(293, 71);
			this->txtType->TabIndex = 9;
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->BackColor = System::Drawing::Color::LimeGreen;
			this->btnValidateOp->Location = System::Drawing::Point(536, 252);
			this->btnValidateOp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(88, 64);
			this->btnValidateOp->TabIndex = 10;
			this->btnValidateOp->Text = L"Aprobar \r\nOperador";
			this->btnValidateOp->UseVisualStyleBackColor = false;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnValidateOp_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(199, 163);
			this->btnSearch->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(56, 19);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(525, 354);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnGoBackMenu_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 71);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 13);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Selecciona una fecha y/u hora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 97);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 13);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Selecciona una fecha y/u hora";
			// 
			// dtpEndDate
			// 
			this->dtpEndDate->Location = System::Drawing::Point(197, 97);
			this->dtpEndDate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dtpEndDate->Name = L"dtpEndDate";
			this->dtpEndDate->Size = System::Drawing::Size(204, 20);
			this->dtpEndDate->TabIndex = 40;
			// 
			// cmbAlarmType
			// 
			this->cmbAlarmType->FormattingEnabled = true;
			this->cmbAlarmType->Location = System::Drawing::Point(197, 131);
			this->cmbAlarmType->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbAlarmType->Name = L"cmbAlarmType";
			this->cmbAlarmType->Size = System::Drawing::Size(204, 21);
			this->cmbAlarmType->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 131);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Categoría";
			// 
			// btnFilterbyType
			// 
			this->btnFilterbyType->Location = System::Drawing::Point(260, 163);
			this->btnFilterbyType->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnFilterbyType->Name = L"btnFilterbyType";
			this->btnFilterbyType->Size = System::Drawing::Size(140, 19);
			this->btnFilterbyType->TabIndex = 43;
			this->btnFilterbyType->Text = L"BUSCAR POR CATEGORIA";
			this->btnFilterbyType->UseVisualStyleBackColor = true;
			// 
			// AlarmHistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(675, 510);
			this->Controls->Add(this->btnFilterbyType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbAlarmType);
			this->Controls->Add(this->dtpEndDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnValidateOp);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpFirstDate);
			this->Controls->Add(this->dgvAlarmHistorial);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AlarmHistorialForm";
			this->Text = L"AlarmHistorialForm";
			this->Load += gcnew System::EventHandler(this, &AlarmHistorialForm::AlarmHistorialForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlarmHistorial))->EndInit();
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
						historial[i]->Type->Name});
				}

			}
		}
	public:
		void ClearControls() {
			for each(Control ^ control in this->Controls) {
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
					cmbAlarmType->Items->Add(gcnew ComboBoxItem(type->Id, type->Name));
				}
			}
		}
	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		dtpFirstDate->ShowCheckBox = true;
		dtpEndDate->ShowCheckBox = true;
		int selectedIndex = cmbAlarmType->SelectedIndex;
		List<Warning^>^ historial = Controller::QueryAllWarnings();

		if (dtpFirstDate->Checked && dtpEndDate->Checked){
			DateTime startrange = dtpFirstDate->Value;
			DateTime endrange = dtpEndDate->Value;
			if (startrange< endrange && selectedIndex < 0) {
				if (historial != nullptr) {
					dgvAlarmHistorial->Rows->Clear();
					for (int i = 0; i < historial->Count; i++) {
						DateTime date1 = *historial[i]->StartingDate;
						if (date1 > startrange && date1 < endrange) {
							dgvAlarmHistorial->Rows->Add(gcnew array<String^> {historial[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
								historial[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
								historial[i]->Type->Name});

						}
					}
				}
			}
			if (startrange < endrange && selectedIndex >= 0) {
				WarningType^ type = Controller::QueryWarningTypeById(((ComboBoxItem^)(cmbAlarmType->Items[cmbAlarmType->SelectedIndex]))->Value);
				if (historial != nullptr) {
					dgvAlarmHistorial->Rows->Clear();
					for (int i = 0; i < historial->Count; i++) {
						DateTime date1 = *historial[i]->StartingDate;
						String^ category = historial[i]->Type->Name;
						if (date1 > startrange && date1 < endrange && category == type->Name) {
							dgvAlarmHistorial->Rows->Add(gcnew array<String^> {historial[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
								historial[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
								historial[i]->Type->Name});

						}
					}
				}

			}
			
		}	
		else if (selectedIndex >= 0){
			WarningType^ type = Controller::QueryWarningTypeById(((ComboBoxItem^)(cmbAlarmType->Items[cmbAlarmType->SelectedIndex]))->Value);
			if (historial != nullptr) {
				dgvAlarmHistorial->Rows->Clear();
				for (int i = 0; i < historial->Count; i++) {
					String^ category = historial[i]->Type->Name;
					if (category == type->Name) {
						dgvAlarmHistorial->Rows->Add(gcnew array<String^> {historial[i]->StartingDate->ToString("yy/MM/dd HH:mm tt"),
							historial[i]->EndingDate->ToString("yy/MM/dd HH:mm tt"),
							historial[i]->Type->Name});

					}
				}
			}

		}
		else {
			MessageBox::Show("Se debe seleccionar un rango de fechas o una categoría");
			return;
		}
		

	}

	private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void AlarmHistorialForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showAlarmHistorial();
		FillSectorsInComboBox();
		InitializeDateTimePickers();
	}
};
}
