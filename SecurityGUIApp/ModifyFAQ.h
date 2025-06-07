#pragma once

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtQuestion;
	private: System::Windows::Forms::TextBox^ txtAnswer;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnValidateOp;
	private: System::Windows::Forms::Button^ btnGoBackMenu;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtQuestion = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAllFAQ))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvAllFAQ
			// 
			this->dgvAllFAQ->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAllFAQ->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->QColumn, this->AColumn });
			this->dgvAllFAQ->Location = System::Drawing::Point(46, 161);
			this->dgvAllFAQ->Name = L"dgvAllFAQ";
			this->dgvAllFAQ->RowHeadersWidth = 51;
			this->dgvAllFAQ->RowTemplate->Height = 24;
			this->dgvAllFAQ->Size = System::Drawing::Size(406, 329);
			this->dgvAllFAQ->TabIndex = 0;
			this->dgvAllFAQ->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModifyFAQ::dgvAllFAQ_CellContentClick);
			// 
			// QColumn
			// 
			this->QColumn->HeaderText = L"Preguntas";
			this->QColumn->MinimumWidth = 6;
			this->QColumn->Name = L"QColumn";
			this->QColumn->Width = 125;
			// 
			// AColumn
			// 
			this->AColumn->HeaderText = L"Respuestas";
			this->AColumn->MinimumWidth = 6;
			this->AColumn->Name = L"AColumn";
			this->AColumn->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(134, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Administrador de FAQ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(530, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pregunta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(530, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Respuesta";
			// 
			// txtQuestion
			// 
			this->txtQuestion->Location = System::Drawing::Point(609, 161);
			this->txtQuestion->Multiline = true;
			this->txtQuestion->Name = L"txtQuestion";
			this->txtQuestion->Size = System::Drawing::Size(265, 60);
			this->txtQuestion->TabIndex = 4;
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(609, 252);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(265, 73);
			this->txtAnswer->TabIndex = 5;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(499, 361);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(120, 35);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"AGREGAR";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnAdd_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(639, 361);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(120, 35);
			this->btnModify->TabIndex = 7;
			this->btnModify->Text = L"MODIFICAR";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnModify_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(778, 361);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(120, 35);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"ELIMINAR";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnDelete_Click);
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->Location = System::Drawing::Point(778, 19);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(120, 94);
			this->btnValidateOp->TabIndex = 9;
			this->btnValidateOp->Text = L"Aprobar\r\n Operador";
			this->btnValidateOp->UseVisualStyleBackColor = true;
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(748, 443);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &ModifyFAQ::btnGoBackMenu_Click);
			// 
			// ModifyFAQ
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 524);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnValidateOp);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->txtQuestion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvAllFAQ);
			this->Name = L"ModifyFAQ";
			this->Text = L"ModifyFAQ";
			this->Load += gcnew System::EventHandler(this, &ModifyFAQ::ModifyFAQ_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAllFAQ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
			Question^ question = gcnew Question(request, answer);
			if (Controller::AddQuestion(question) == 1) {
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
	private: System::Void dgvAllFAQ_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ request = dgvAllFAQ->Rows[dgvAllFAQ->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		String^ answer = Controller::QueryAnswerByQuestion(request); 
		txtQuestion->Text = request; 
		txtAnswer->Text = answer; 

	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ request = txtQuestion->Text->Trim();
		if (request->Equals("")) {
			MessageBox::Show("Debe seleccionar una pregunta y respuesta");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar a la pregunta y respuesta?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				Controller::DeleteQuestion(request);
				showFAQ();
				ClearControls();
				MessageBox::Show("Se ha eliminado a la pregunta y respuesta manera exitosa.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar a la pregunta y respuesta por el siguiente motivo:\n" +
				ex->Message);
		}

	}

	private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ request= txtQuestion->Text->Trim();
		if (request->Equals("")) {
			MessageBox::Show("Debe seleccionar una pregunta");
			return;
		}
		try {
			String^ request = txtQuestion->Text;
			String^ answer = txtAnswer->Text;
			Question^ question = gcnew Question(request, answer);
			Controller::UpdateQuestion(question);
			showFAQ();
			MessageBox::Show("Se ha modificado la pregunta");
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la pregunta por el siguiente motivo:\n" +
				ex->Message);
		}
	}

	
	private: System::Void ModifyFAQ_Load(System::Object^ sender, System::EventArgs^ e) {
		showFAQ();
	}
};
}
