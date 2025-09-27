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
	/// Resumen de ValidateOpForm
	/// </summary>
	public ref class ValidateOpForm : public System::Windows::Forms::Form
	{
	public:
		ValidateOpForm(void)
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
		~ValidateOpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvValidateOp;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnApprove;



	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ValidateOpForm::typeid));
			this->dgvValidateOp = (gcnew System::Windows::Forms::DataGridView());
			this->NameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SurnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnApprove = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvValidateOp))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvValidateOp
			// 
			this->dgvValidateOp->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvValidateOp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvValidateOp->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->NameColumn,
					this->SurnameColumn, this->id
			});
			this->dgvValidateOp->Dock = System::Windows::Forms::DockStyle::Top;
			this->dgvValidateOp->Location = System::Drawing::Point(266, 80);
			this->dgvValidateOp->Margin = System::Windows::Forms::Padding(20, 20, 80, 20);
			this->dgvValidateOp->Name = L"dgvValidateOp";
			this->dgvValidateOp->ReadOnly = true;
			this->dgvValidateOp->RowHeadersWidth = 51;
			this->dgvValidateOp->RowTemplate->Height = 24;
			this->dgvValidateOp->Size = System::Drawing::Size(389, 420);
			this->dgvValidateOp->TabIndex = 0;
			this->dgvValidateOp->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ValidateOpForm::dgvValidateOp_CellClick);
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"Nombre";
			this->NameColumn->MinimumWidth = 6;
			this->NameColumn->Name = L"NameColumn";
			this->NameColumn->ReadOnly = true;
			this->NameColumn->Width = 160;
			// 
			// SurnameColumn
			// 
			this->SurnameColumn->HeaderText = L"Apellido";
			this->SurnameColumn->MinimumWidth = 6;
			this->SurnameColumn->Name = L"SurnameColumn";
			this->SurnameColumn->ReadOnly = true;
			this->SurnameColumn->Width = 160;
			// 
			// id
			// 
			this->id->HeaderText = L"DNI";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 130;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->label1, 2);
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(676, 60);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Aprobación de Usuario";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(50, 60);
			this->label2->Margin = System::Windows::Forms::Padding(50, 60, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Operadores en espera\r\n de aprobación:";
			// 
			// btnApprove
			// 
			this->btnApprove->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnApprove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnApprove->Location = System::Drawing::Point(62, 304);
			this->btnApprove->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->btnApprove->MaximumSize = System::Drawing::Size(150, 90);
			this->btnApprove->Name = L"btnApprove";
			this->btnApprove->Size = System::Drawing::Size(115, 72);
			this->btnApprove->TabIndex = 3;
			this->btnApprove->Text = L"APROBAR";
			this->btnApprove->UseVisualStyleBackColor = false;
			this->btnApprove->Click += gcnew System::EventHandler(this, &ValidateOpForm::btnApprove_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(506, 522);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 80, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 51);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &ValidateOpForm::btnGoBackMenu_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.46939F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				66.53061F)));
			this->tableLayoutPanel1->Controls->Add(this->btnGoBackMenu, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->dgvValidateOp, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.53846F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.46154F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(735, 575);
			this->tableLayoutPanel1->TabIndex = 38;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnApprove, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 63);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(240, 454);
			this->tableLayoutPanel2->TabIndex = 38;
			// 
			// ValidateOpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(735, 575);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ValidateOpForm";
			this->Text = L"ValidateOpForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ValidateOpForm::ValidateOpForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvValidateOp))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public:
		void showAllNoRegisteredOperators() {
			List<SecurityOperator^>^ operadores = Controller::QueryAllNoRegisteredOperators();
			if (operadores != nullptr) {
				dgvValidateOp->Rows->Clear();
				for (int i = 0; i < operadores->Count; i++) {
					dgvValidateOp->Rows->Add(gcnew array<String^> {operadores[i]->Name,
						operadores[i]->LastName,
						operadores[i]->DNI});
				}

			}
		}
	private: System::Void dgvValidateOp_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvValidateOp->SelectedRows->Count == 1) {
			btnApprove->BackColor = System::Drawing::Color::Green;
			btnApprove->Enabled = true;
		}
		else {
			btnApprove->Enabled = false;
		}

	}
    
	private: System::Void btnApprove_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//if (dgvValidateOp->SelectedRows->Count == 1) {
			    String^ dni = dgvValidateOp->Rows[dgvValidateOp->SelectedCells[0]->RowIndex]->Cells[2]->Value->ToString();
				SecurityOperator^ newoperator = Controller::QueryNoOperatorbyDNI(dni);
				System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea validar a este usuario de nombre " + newoperator->Name + " y apellido " + newoperator->LastName + "? \n",
					"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
					newoperator->Authorized = true; // se actualiza el operador a autorizado
					newoperator->Status = "A";
					if (Controller::UpdateUser(newoperator) == 1) {
						showAllNoRegisteredOperators();
					}

				}
			//}
	
			
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible validar el usuario por el siguiente motivo:\n" +
				ex->Message);
		}
		
	}



	private: System::Void ValidateOpForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showAllNoRegisteredOperators();
		dgvValidateOp->MultiSelect = false;
		dgvValidateOp->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	}
	


private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
