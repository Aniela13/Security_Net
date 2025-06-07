#pragma once

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
	private: System::Windows::Forms::DateTimePicker^ dtpInicioRango;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtZone;
	private: System::Windows::Forms::TextBox^ txtType;




	private: System::Windows::Forms::Button^ btnValidateOp;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dtpFinRango;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cstarting;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cending;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeColumn;



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
			this->dtpInicioRango = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtZone = (gcnew System::Windows::Forms::TextBox());
			this->txtType = (gcnew System::Windows::Forms::TextBox());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpFinRango = (gcnew System::Windows::Forms::DateTimePicker());
			this->cstarting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cending = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->menuStrip1->Size = System::Drawing::Size(862, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoUsuarioToolStripMenuItem
			// 
			this->mantenimientoUsuarioToolStripMenuItem->Name = L"mantenimientoUsuarioToolStripMenuItem";
			this->mantenimientoUsuarioToolStripMenuItem->Size = System::Drawing::Size(178, 24);
			this->mantenimientoUsuarioToolStripMenuItem->Text = L"Mantenimiento Usuario";
			// 
			// actualizarMapaToolStripMenuItem
			// 
			this->actualizarMapaToolStripMenuItem->Name = L"actualizarMapaToolStripMenuItem";
			this->actualizarMapaToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->actualizarMapaToolStripMenuItem->Text = L"Actualizar Mapa";
			// 
			// mapaToolStripMenuItem
			// 
			this->mapaToolStripMenuItem->Name = L"mapaToolStripMenuItem";
			this->mapaToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->mapaToolStripMenuItem->Text = L"Mapa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 26);
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
					this->cending, this->TypeColumn
			});
			this->dgvAlarmHistorial->GridColor = System::Drawing::Color::Gray;
			this->dgvAlarmHistorial->Location = System::Drawing::Point(44, 186);
			this->dgvAlarmHistorial->Name = L"dgvAlarmHistorial";
			this->dgvAlarmHistorial->RowHeadersWidth = 51;
			this->dgvAlarmHistorial->RowTemplate->Height = 24;
			this->dgvAlarmHistorial->Size = System::Drawing::Size(645, 192);
			this->dgvAlarmHistorial->TabIndex = 3;
			// 
			// dtpInicioRango
			// 
			this->dtpInicioRango->Location = System::Drawing::Point(263, 87);
			this->dtpInicioRango->Name = L"dtpInicioRango";
			this->dtpInicioRango->Size = System::Drawing::Size(270, 22);
			this->dtpInicioRango->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 406);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Zona";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 449);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Descripción";
			// 
			// txtZone
			// 
			this->txtZone->Location = System::Drawing::Point(150, 400);
			this->txtZone->Name = L"txtZone";
			this->txtZone->ReadOnly = true;
			this->txtZone->Size = System::Drawing::Size(173, 22);
			this->txtZone->TabIndex = 8;
			// 
			// txtType
			// 
			this->txtType->Location = System::Drawing::Point(150, 449);
			this->txtType->Multiline = true;
			this->txtType->Name = L"txtType";
			this->txtType->ReadOnly = true;
			this->txtType->Size = System::Drawing::Size(173, 53);
			this->txtType->TabIndex = 9;
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->BackColor = System::Drawing::Color::LimeGreen;
			this->btnValidateOp->Location = System::Drawing::Point(711, 56);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(118, 79);
			this->btnValidateOp->TabIndex = 10;
			this->btnValidateOp->Text = L"Aprobar \r\nOperador";
			this->btnValidateOp->UseVisualStyleBackColor = false;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(458, 157);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(700, 436);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &AlarmHistorialForm::btnGoBackMenu_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 16);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Selecciona una fecha y/u hora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 16);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Selecciona una fecha y/u hora";
			// 
			// dtpFinRango
			// 
			this->dtpFinRango->Location = System::Drawing::Point(263, 119);
			this->dtpFinRango->Name = L"dtpFinRango";
			this->dtpFinRango->Size = System::Drawing::Size(270, 22);
			this->dtpFinRango->TabIndex = 40;
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
			// TypeColumn
			// 
			this->TypeColumn->HeaderText = L"Descripción";
			this->TypeColumn->MinimumWidth = 6;
			this->TypeColumn->Name = L"TypeColumn";
			this->TypeColumn->Width = 125;
			// 
			// AlarmHistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 517);
			this->Controls->Add(this->dtpFinRango);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnValidateOp);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->txtZone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dtpInicioRango);
			this->Controls->Add(this->dgvAlarmHistorial);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
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
	
	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	public: 
		/*void showAlarmHistorial() {
			List<Warning^>^ historial = Controller::QueryAllWarnings();
			if (historial != nullptr) {
				dgvAlarmHistorial->Rows->Clear();
				for (int i = 0; i < historial->Count; i++) {
					dgvAlarmHistorial->Rows->Add(gcnew array<String^> {historial[i]->StartingDate.ToString("yy/MM/dd HH:mm"),
						historial[i]->EndingDate.ToString("yy/MM/dd HH:mm"),
						historial[i]->Type});
				}

			}
		}
		*/




	private: System::Void AlarmHistorialForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//showAlarmHistorial();
	}


	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	}

};
}
