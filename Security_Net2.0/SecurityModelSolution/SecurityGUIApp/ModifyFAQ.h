#pragma once
#include "ValidateOpForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SecurityModel; 
	using namespace SecurityController;

	/// <summary>
	/// Resumen de ModifyFAQ
	/// </summary>
	public ref class ModifyFAQ : public System::Windows::Forms::Form
	{
	public:
		ModifyFAQ(void)
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
		~ModifyFAQ()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvAllFAQ;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AColumn;
	private: System::Windows::Forms::Label^ label1;













	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnValidateOp;
	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::TextBox^ txtQuestion;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ label3;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyFAQ::typeid));
			this->dgvAllFAQ = (gcnew System::Windows::Forms::DataGridView());
			this->QColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->txtQuestion = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAllFAQ))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvAllFAQ
			// 
			this->dgvAllFAQ->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAllFAQ->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->QColumn, this->AColumn });
			this->dgvAllFAQ->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvAllFAQ->Location = System::Drawing::Point(30, 110);
			this->dgvAllFAQ->Margin = System::Windows::Forms::Padding(30);
			this->dgvAllFAQ->Name = L"dgvAllFAQ";
			this->dgvAllFAQ->ReadOnly = true;
			this->dgvAllFAQ->RowHeadersWidth = 51;
			this->dgvAllFAQ->RowTemplate->Height = 24;
			this->dgvAllFAQ->Size = System::Drawing::Size(312, 461);
			this->dgvAllFAQ->TabIndex = 0;
			this->dgvAllFAQ->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModifyFAQ::dgvAllFAQ_CellClick);
			// 
			// QColumn
			// 
			this->QColumn->HeaderText = L"Preguntas";
			this->QColumn->MinimumWidth = 6;
			this->QColumn->Name = L"QColumn";
			this->QColumn->ReadOnly = true;
			this->QColumn->Width = 125;
			// 
			// AColumn
			// 
			this->AColumn->HeaderText = L"Respuestas";
			this->AColumn->MinimumWidth = 6;
			this->AColumn->Name = L"AColumn";
			this->AColumn->ReadOnly = true;
			this->AColumn->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 80);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Administrador de FAQ";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.87216F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.12783F)));
			this->tableLayoutPanel1->Controls->Add(this->dgvAllFAQ, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.31115F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 86.68885F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(957, 601);
			this->tableLayoutPanel1->TabIndex = 40;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.42857F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.57143F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				171)));
			this->tableLayoutPanel2->Controls->Add(this->btnValidateOp, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->txtAnswer, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->btnGoBackMenu, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->txtQuestion, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->txtId, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnDelete, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->lblId, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnModify, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->btnAdd, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 3);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(375, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 6;
			this->tableLayoutPanel1->SetRowSpan(this->tableLayoutPanel2, 2);
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.19318F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.80682F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 75)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 97)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 90)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(579, 595);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->Location = System::Drawing::Point(427, 40);
			this->btnValidateOp->Margin = System::Windows::Forms::Padding(20, 40, 3, 2);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(120, 94);
			this->btnValidateOp->TabIndex = 9;
			this->btnValidateOp->Text = L"Aprobar\r\n Operador";
			this->btnValidateOp->UseVisualStyleBackColor = true;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnValidateOp_Click);
			// 
			// txtAnswer
			// 
			this->txtAnswer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->SetColumnSpan(this->txtAnswer, 2);
			this->txtAnswer->Location = System::Drawing::Point(231, 336);
			this->txtAnswer->Margin = System::Windows::Forms::Padding(30, 10, 80, 20);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(268, 67);
			this->txtAnswer->TabIndex = 5;
			this->txtAnswer->TextChanged += gcnew System::EventHandler(this, &ModifyFAQ::txtAnswer_TextChanged);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(417, 523);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(10);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(152, 62);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnGoBackMenu_Click);
			// 
			// txtQuestion
			// 
			this->txtQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->SetColumnSpan(this->txtQuestion, 2);
			this->txtQuestion->Location = System::Drawing::Point(231, 261);
			this->txtQuestion->Margin = System::Windows::Forms::Padding(30, 10, 80, 20);
			this->txtQuestion->Multiline = true;
			this->txtQuestion->Name = L"txtQuestion";
			this->txtQuestion->Size = System::Drawing::Size(268, 45);
			this->txtQuestion->TabIndex = 4;
			// 
			// txtId
			// 
			this->txtId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtId->Location = System::Drawing::Point(231, 196);
			this->txtId->Margin = System::Windows::Forms::Padding(30, 30, 10, 10);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(166, 22);
			this->txtId->TabIndex = 39;
			this->txtId->Visible = false;
			// 
			// btnDelete
			// 
			this->btnDelete->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnDelete->Location = System::Drawing::Point(427, 431);
			this->btnDelete->Margin = System::Windows::Forms::Padding(20, 8, 20, 8);
			this->btnDelete->MaximumSize = System::Drawing::Size(200, 60);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(132, 60);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"ELIMINAR";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnDelete_Click);
			// 
			// lblId
			// 
			this->lblId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblId->AutoSize = true;
			this->lblId->BackColor = System::Drawing::Color::Transparent;
			this->lblId->Location = System::Drawing::Point(100, 196);
			this->lblId->Margin = System::Windows::Forms::Padding(100, 30, 3, 30);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(98, 25);
			this->lblId->TabIndex = 38;
			this->lblId->Text = L"Id";
			this->lblId->Visible = false;
			// 
			// btnModify
			// 
			this->btnModify->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnModify->Location = System::Drawing::Point(221, 431);
			this->btnModify->Margin = System::Windows::Forms::Padding(20, 8, 20, 8);
			this->btnModify->MaximumSize = System::Drawing::Size(200, 60);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(166, 60);
			this->btnModify->TabIndex = 7;
			this->btnModify->Text = L"MODIFICAR";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnModify_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(100, 281);
			this->label2->Margin = System::Windows::Forms::Padding(100, 30, 3, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pregunta";
			// 
			// btnAdd
			// 
			this->btnAdd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAdd->Location = System::Drawing::Point(20, 431);
			this->btnAdd->Margin = System::Windows::Forms::Padding(20, 8, 20, 8);
			this->btnAdd->MaximumSize = System::Drawing::Size(200, 60);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(161, 60);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"AGREGAR";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnAdd_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(100, 356);
			this->label3->Margin = System::Windows::Forms::Padding(100, 30, 3, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Respuesta";
			// 
			// ModifyFAQ
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(957, 601);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ModifyFAQ";
			this->Text = L"ModifyFAQ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ModifyFAQ::ModifyFAQ_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAllFAQ))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		//mostrar pagina principal
	}
	public: 
		void showFAQ() {
			List<Question^>^ FAQList = Controller::QueryAllFAQ();
			if (FAQList != nullptr) {
				dgvAllFAQ->Rows->Clear();
				for (int i = 0; i < FAQList->Count; i++) {
					dgvAllFAQ->Rows->Add(gcnew array<String^> {FAQList[i]->question,
					FAQList[i]->Answer});
				}

			}

		}
	public:
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try{
			String^ request = txtQuestion->Text;
			if (request == "") {
				MessageBox::Show("Ingresa una pregunta \n");
				return;

			}
			String^ answer = txtAnswer->Text;
			if (answer == "") {
				MessageBox::Show("Ingresa una respuesta \n");
				return;

			}
		
			Question^ question = gcnew Question(request, answer, true);
			int res = Controller::AddQuestion(question);
			if ( res > 0) {
				showFAQ();
				MessageBox::Show("Se ha agregado correctamente una nueva pregunta\n");
			}
			else {
				MessageBox::Show("No se ha podido agregar el robot por el siguiente motivo:\n");
				return;
			}
	    }
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la pregunta por el siguiente motivo:\n" +
				ex->Message);
		}

	}
	private: System::Void dgvAllFAQ_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ request = dgvAllFAQ->Rows[dgvAllFAQ->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		Question^ q = Controller::QueryQuestionbyRequest(request); 
		lblId->Visible = true; 
		txtId->Visible = true; 
		txtQuestion->Text = request; 
		txtAnswer->Text = q->Answer; 
		txtId->Text=Convert::ToString(q->Id);
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = txtId->Text->Trim();
		if (id->Equals("")) {
			MessageBox::Show("Debe seleccionar una pregunta");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar a la pregunta y respuesta?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				if (Controller::DeleteQuestion(Convert::ToInt32(id)) == 1) {
					showFAQ();
					ClearControls();
					MessageBox::Show("Se ha eliminado a la pregunta y respuesta manera exitosa.");
					lblId->Visible = false;
					txtId->Visible = false;
				}
				else {
					MessageBox::Show("Intentelo de nuevo");
					return;
				}
				
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar a la pregunta y respuesta por el siguiente motivo:\n" +
				ex->Message);
		}

	}

	private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id= txtId->Text->Trim();
		if (id->Equals("")) {
			MessageBox::Show("Debe seleccionar una pregunta");
			return;
		}
		try {
			Question^ q = Controller::QueryQuestionbyId(Convert::ToInt32(id));
			String^ preguntamodificada = txtQuestion->Text->Trim();
			String^ respuestamodificada = txtAnswer->Text->Trim();
			if (preguntamodificada!= "" && respuestamodificada!= "") {
				q->question = preguntamodificada;
				q->Answer = respuestamodificada;
				int res = Controller::UpdateQuestion(q);
				if ( res == 1) {
					showFAQ();
					MessageBox::Show("Se ha modificado la pregunta");
					lblId->Visible = false;
					txtId->Visible = false;
				}
			}
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la pregunta por el siguiente motivo:\n" +
				ex->Message);
		}
	}

	
	private: System::Void ModifyFAQ_Load(System::Object^ sender, System::EventArgs^ e) {
		showFAQ();
	}

private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ ) {
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
private: System::Void txtAnswer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
