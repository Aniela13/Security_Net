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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvValidateOp))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvValidateOp
			// 
			this->dgvValidateOp->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgvValidateOp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvValidateOp->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->NameColumn,
					this->SurnameColumn, this->id
			});
			this->dgvValidateOp->Location = System::Drawing::Point(162, 131);
			this->dgvValidateOp->Name = L"dgvValidateOp";
			this->dgvValidateOp->RowHeadersWidth = 51;
			this->dgvValidateOp->RowTemplate->Height = 24;
			this->dgvValidateOp->Size = System::Drawing::Size(515, 334);
			this->dgvValidateOp->TabIndex = 0;
			this->dgvValidateOp->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ValidateOpForm::dgvValidateOp_CellContentClick);
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"Nombre";
			this->NameColumn->MinimumWidth = 6;
			this->NameColumn->Name = L"NameColumn";
			this->NameColumn->Width = 160;
			// 
			// SurnameColumn
			// 
			this->SurnameColumn->HeaderText = L"Apellido";
			this->SurnameColumn->MinimumWidth = 6;
			this->SurnameColumn->Name = L"SurnameColumn";
			this->SurnameColumn->Width = 160;
			// 
			// id
			// 
			this->id->HeaderText = L"DNI";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->Width = 130;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Aprobación de Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Operadores en espera\r\n de aprobación:";
			// 
			// btnApprove
			// 
			this->btnApprove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnApprove->Location = System::Drawing::Point(15, 282);
			this->btnApprove->Name = L"btnApprove";
			this->btnApprove->Size = System::Drawing::Size(120, 41);
			this->btnApprove->TabIndex = 3;
			this->btnApprove->Text = L"APROBAR";
			this->btnApprove->UseVisualStyleBackColor = false;
			this->btnApprove->Click += gcnew System::EventHandler(this, &ValidateOpForm::btnApprove_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(573, 483);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// ValidateOpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 575);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnApprove);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvValidateOp);
			this->Name = L"ValidateOpForm";
			this->Text = L"ValidateOpForm";
			this->Load += gcnew System::EventHandler(this, &ValidateOpForm::ValidateOpForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvValidateOp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void dgvValidateOp_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvValidateOp->SelectedCells->Count == 1) {
			String^ dni = dgvValidateOp->Rows[dgvValidateOp->SelectedCells[0]->RowIndex]->Cells[2]->Value->ToString();
			btnApprove->BackColor = System::Drawing::Color::Green;
			btnApprove->Enabled = true;
		}
		else {
			btnApprove->Enabled = false;
		}

	}
    
	private: System::Void btnApprove_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ dni = dgvValidateOp->Rows[dgvValidateOp->SelectedCells[0]->RowIndex]->Cells[2]->Value->ToString();
			SecurityOperator^ newoperator = Controller::QueryNoOperatorbyDNI(dni);
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea validar agregar a este usuario de nombre "+ newoperator->Name + " y apellido " + newoperator->LastName + "? \n",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				if (Controller::AddUser(newoperator) == 1) {
					Controller::DeleteOperatortoValidation(dni);
					showAllNoRegisteredOperators();
				}
				
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible validar el usuario por el siguiente motivo:\n" +
				ex->Message);
		}
		
	}



	private: System::Void ValidateOpForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showAllNoRegisteredOperators();
	}
	


};
}
