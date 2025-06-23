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
	/// Resumen de AsignZonesForm
	/// </summary>
	public ref class AsignZonesForm : public System::Windows::Forms::Form
	{
	public:
		AsignZonesForm(void)
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
		~AsignZonesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvZonesPositions;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZonesColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoordenadasColumn;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnAddZone;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Button^ btnNewRoute;

	private: System::Windows::Forms::PictureBox^ pbMap;
	private: System::Windows::Forms::ComboBox^ cmbNameZone;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AsignZonesForm::typeid));
			this->dgvZonesPositions = (gcnew System::Windows::Forms::DataGridView());
			this->ZonesColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoordenadasColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddZone = (gcnew System::Windows::Forms::Button());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->btnNewRoute = (gcnew System::Windows::Forms::Button());
			this->pbMap = (gcnew System::Windows::Forms::PictureBox());
			this->cmbNameZone = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvZonesPositions
			// 
			this->dgvZonesPositions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvZonesPositions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ZonesColumn,
					this->CoordenadasColumn
			});
			this->dgvZonesPositions->Location = System::Drawing::Point(579, 127);
			this->dgvZonesPositions->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvZonesPositions->Name = L"dgvZonesPositions";
			this->dgvZonesPositions->RowHeadersWidth = 51;
			this->dgvZonesPositions->RowTemplate->Height = 24;
			this->dgvZonesPositions->Size = System::Drawing::Size(365, 593);
			this->dgvZonesPositions->TabIndex = 10;
			// 
			// ZonesColumn
			// 
			this->ZonesColumn->HeaderText = L"ZONAS";
			this->ZonesColumn->MinimumWidth = 6;
			this->ZonesColumn->Name = L"ZonesColumn";
			this->ZonesColumn->Width = 125;
			// 
			// CoordenadasColumn
			// 
			this->CoordenadasColumn->HeaderText = L"COORDENADAS";
			this->CoordenadasColumn->MinimumWidth = 6;
			this->CoordenadasColumn->Name = L"CoordenadasColumn";
			this->CoordenadasColumn->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(198, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(598, 32);
			this->label1->TabIndex = 29;
			this->label1->Text = L"¿Qué zonas de inspeccion desea asignar\? ";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(431, 834);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(111, 42);
			this->btnDelete->TabIndex = 39;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(431, 782);
			this->btnAddZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(111, 37);
			this->btnAddZone->TabIndex = 37;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(198, 857);
			this->txtPointY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->ReadOnly = true;
			this->txtPointY->Size = System::Drawing::Size(133, 22);
			this->txtPointY->TabIndex = 36;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(198, 821);
			this->txtPointX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->ReadOnly = true;
			this->txtPointX->Size = System::Drawing::Size(133, 22);
			this->txtPointX->TabIndex = 35;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 860);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 821);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Coordenada X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 789);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Nombre Zona: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(69, 753);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 18);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Asignar manualmente";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(604, 734);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 54);
			this->button1->TabIndex = 41;
			this->button1->Text = L"EMPEZAR INSPECCION";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(810, 821);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 42;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// btnNewRoute
			// 
			this->btnNewRoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewRoute->ForeColor = System::Drawing::Color::Blue;
			this->btnNewRoute->Location = System::Drawing::Point(604, 808);
			this->btnNewRoute->Name = L"btnNewRoute";
			this->btnNewRoute->Size = System::Drawing::Size(156, 53);
			this->btnNewRoute->TabIndex = 43;
			this->btnNewRoute->Text = L"NUEVA RUTA";
			this->btnNewRoute->UseVisualStyleBackColor = true;
			// 
			// pbMap
			// 
			this->pbMap->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMap.Image")));
			this->pbMap->Location = System::Drawing::Point(60, 127);
			this->pbMap->Name = L"pbMap";
			this->pbMap->Size = System::Drawing::Size(482, 593);
			this->pbMap->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbMap->TabIndex = 44;
			this->pbMap->TabStop = false;
			// 
			// cmbNameZone
			// 
			this->cmbNameZone->FormattingEnabled = true;
			this->cmbNameZone->Location = System::Drawing::Point(198, 786);
			this->cmbNameZone->Name = L"cmbNameZone";
			this->cmbNameZone->Size = System::Drawing::Size(200, 24);
			this->cmbNameZone->TabIndex = 45;
			this->cmbNameZone->SelectedIndexChanged += gcnew System::EventHandler(this, &AsignZonesForm::cmbNameZone_SelectedIndexChanged);
			// 
			// AsignZonesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(971, 901);
			this->Controls->Add(this->cmbNameZone);
			this->Controls->Add(this->pbMap);
			this->Controls->Add(this->btnNewRoute);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAddZone);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvZonesPositions);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AsignZonesForm";
			this->Text = L"AsignZonesForm";
			this->Load += gcnew System::EventHandler(this, &AsignZonesForm::AsignZonesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void FillZonesInComboBox() {
			cmbNameZone->Items->Clear();
			Dictionary<String^, SecurityModel::Point^>^ zones = Controller::QueryAllZones();
			if (zones!= nullptr) {
				int index = 0;
				for each (KeyValuePair<String^, SecurityModel::Point^> zona in zones) {
					cmbNameZone->Items->Add(gcnew ComboBoxItem(index++, zona.Key));
				}
			
			}
		}



	private: System::Void AsignZonesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillZonesInComboBox();
	}



	private: System::Void cmbNameZone_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBoxItem^ itemSeleccionado = dynamic_cast<ComboBoxItem^>(cmbNameZone->SelectedItem);
		if (itemSeleccionado != nullptr) {
			// Supongamos que en tu Dictionary tienes acceso a las coordenadas con la clave
			Dictionary<String^, SecurityModel::Point^>^ zonas = Controller::QueryAllZones();
			if (zonas != nullptr) {
				SecurityModel::Point^ coordenada = Controller::QueryZonebyName(itemSeleccionado->Name);
				txtPointX->Text = Convert::ToString(coordenada->X);
				txtPointY->Text = Convert::ToString(coordenada->Y);
			}
		}
		else {
			txtPointX->Text = "";
			txtPointY->Text = "";
		}
	}
};
}
