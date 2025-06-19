#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NewMapForm
	/// </summary>
	public ref class NewMapForm : public System::Windows::Forms::Form
	{
	public:
		NewMapForm(void)
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
		~NewMapForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZonesColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoordenadasColumn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewMapForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ZonesColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoordenadasColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(273, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MAPA";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(23, 177);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(360, 346);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ZonesColumn,
					this->CoordenadasColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(403, 177);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(318, 201);
			this->dataGridView1->TabIndex = 2;
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
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(571, 529);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// NewMapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 610);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"NewMapForm";
			this->Text = L"NewMapForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
