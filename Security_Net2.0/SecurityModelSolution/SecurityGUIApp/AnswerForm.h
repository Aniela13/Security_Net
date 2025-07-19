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
	using namespace System::Threading;

	/// <summary>
	/// Resumen de AnswerForm
	/// </summary>
	public ref class AnswerForm : public System::Windows::Forms::Form
	{
	public:
		Thread^ myThread;
		AnswerForm(void)
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
		~AnswerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::DataGridView^ dgvQuestionForm;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NewQuestion;
	private: System::Windows::Forms::TextBox^ txtNewQuestion;
	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnNewQuestion;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AnswerForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->dgvQuestionForm = (gcnew System::Windows::Forms::DataGridView());
			this->NewQuestion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtNewQuestion = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnNewQuestion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestionForm))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(308, 98);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pregunta:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(308, 202);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Respuesta: ";
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(373, 11);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// dgvQuestionForm
			// 
			this->dgvQuestionForm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvQuestionForm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->NewQuestion });
			this->dgvQuestionForm->Location = System::Drawing::Point(16, 98);
			this->dgvQuestionForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvQuestionForm->Name = L"dgvQuestionForm";
			this->dgvQuestionForm->RowHeadersWidth = 51;
			this->dgvQuestionForm->RowTemplate->Height = 24;
			this->dgvQuestionForm->Size = System::Drawing::Size(271, 210);
			this->dgvQuestionForm->TabIndex = 38;
			this->dgvQuestionForm->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AnswerForm::dgvQuestionForm_CellClick);
			// 
			// NewQuestion
			// 
			this->NewQuestion->HeaderText = L"Preguntas";
			this->NewQuestion->MinimumWidth = 6;
			this->NewQuestion->Name = L"NewQuestion";
			this->NewQuestion->Width = 300;
			// 
			// txtNewQuestion
			// 
			this->txtNewQuestion->Location = System::Drawing::Point(311, 126);
			this->txtNewQuestion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNewQuestion->Multiline = true;
			this->txtNewQuestion->Name = L"txtNewQuestion";
			this->txtNewQuestion->ReadOnly = true;
			this->txtNewQuestion->Size = System::Drawing::Size(150, 56);
			this->txtNewQuestion->TabIndex = 39;

			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(312, 230);
			this->txtAnswer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(150, 75);
			this->txtAnswer->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 27);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 20);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Pregunta Nuevas";
			// 
			// btnNewQuestion
			// 
			this->btnNewQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnNewQuestion->Location = System::Drawing::Point(344, 325);
			this->btnNewQuestion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnNewQuestion->Name = L"btnNewQuestion";
			this->btnNewQuestion->Size = System::Drawing::Size(80, 41);
			this->btnNewQuestion->TabIndex = 42;
			this->btnNewQuestion->Text = L"ENVIAR";
			this->btnNewQuestion->UseVisualStyleBackColor = false;
			this->btnNewQuestion->Click += gcnew System::EventHandler(this, &AnswerForm::btnNewQuestion_Click);
			// 
			// AnswerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(524, 396);
			this->Controls->Add(this->btnNewQuestion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->txtNewQuestion);
			this->Controls->Add(this->dgvQuestionForm);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AnswerForm";
			this->Text = L"AnswerForm";
			this->Load += gcnew System::EventHandler(this, &AnswerForm::AnswerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestionForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	public:
		void showNewQuestions() {
			List<Question^>^ questionsList = Controller::QueryAllQuestionsbyClient();
			if (questionsList != nullptr) {
				dgvQuestionForm->Rows->Clear();

				for (int i = 0; i < questionsList->Count; i++) {
					String^ qText = questionsList[i]->question;
					dgvQuestionForm->Rows->Add(gcnew array<String^> {qText});
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
	
	private: System::Void AnswerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showNewQuestions();
		myThread = gcnew Thread(gcnew ThreadStart(this, &AnswerForm::MyExecutionProcess));
		myThread->Start();
	}
		   delegate void MyDelegate();

		   void MyExecutionProcess() {
			   while (true) {
				   try {
					   myThread->Sleep(5000);
					   Invoke(gcnew MyDelegate(this, &AnswerForm::showNewQuestions));
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }
	private: System::Void dgvQuestionForm_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ question = dgvQuestionForm->Rows[dgvQuestionForm->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		Question^ q = Controller::QueryQuestionbyRequest(question);
		txtNewQuestion->Text = question;
		txtAnswer->Text = q->Answer;
		showNewQuestions();
	}
	private: System::Void btnNewQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ question = txtNewQuestion->Text->Trim();
		if (question == "") {
			MessageBox::Show("Selecciona una pregunta de la tabla");
			return;
		}
		try {
				Question^ q = Controller::QueryQuestionbyRequest(question);
				String^ newanswer = txtAnswer->Text->Trim();
				if (newanswer != "Por definir" && newanswer != "") {
					q->Answer = newanswer;
					int res = Controller::UpdateQuestion(q);
					if (res == 1) {
						showNewQuestions();
						MessageBox::Show("Se ha modificado la pregunta");
					}
				}
				else {
					MessageBox::Show("Ingresa una respuesta a la pregunta seleccionada");
					ClearControls();
					return;
				}
			



		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la pregunta por el siguiente motivo:\n" +
				ex->Message);
		}
		
	}
	};
}