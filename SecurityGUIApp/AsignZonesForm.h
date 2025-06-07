#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnAddZone;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::TextBox^ txtNameZone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AsignZonesForm::typeid));
			this->dgvZonesPositions = (gcnew System::Windows::Forms::DataGridView());
			this->ZonesColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoordenadasColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddZone = (gcnew System::Windows::Forms::Button());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->txtNameZone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvZonesPositions
			// 
			this->dgvZonesPositions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvZonesPositions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ZonesColumn,
					this->CoordenadasColumn
			});
			this->dgvZonesPositions->Location = System::Drawing::Point(634, 108);
			this->dgvZonesPositions->Name = L"dgvZonesPositions";
			this->dgvZonesPositions->RowHeadersWidth = 51;
			this->dgvZonesPositions->RowTemplate->Height = 24;
			this->dgvZonesPositions->Size = System::Drawing::Size(310, 398);
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(179, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(626, 35);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Que zonas de inspeccion desea asignar\? ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(476, 329);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(366, 554);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(91, 42);
			this->btnDelete->TabIndex = 39;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(366, 506);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(91, 37);
			this->btnAddZone->TabIndex = 37;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(168, 574);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->Size = System::Drawing::Size(58, 22);
			this->txtPointY->TabIndex = 36;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(168, 538);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->Size = System::Drawing::Size(58, 22);
			this->txtPointX->TabIndex = 35;
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(168, 506);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(156, 22);
			this->txtNameZone->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 577);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 538);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Coordenada X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 506);
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
			this->label5->Location = System::Drawing::Point(39, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 19);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Asignar manualmente";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(634, 541);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 68);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(794, 537);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 42;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// AsignZonesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 618);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAddZone);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->txtNameZone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvZonesPositions);
			this->Name = L"AsignZonesForm";
			this->Text = L"AsignZonesForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
