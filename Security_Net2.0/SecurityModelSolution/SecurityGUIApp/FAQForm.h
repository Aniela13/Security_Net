#pragma once
#include "AnswerForm.h"
#include "NewQuestionForm.h"
#include "SatisfactionQuestionForm.h"

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
	/// Resumen de FAQForm
	/// </summary>
	public ref class FAQForm : public System::Windows::Forms::Form
	{
	public:
		FAQForm(void)
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
		~FAQForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNewQuestion;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::DataGridView^ dgvQuestions;

	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FAQForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNewQuestion = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->dgvQuestions = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestions))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->label1, 4);
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30.08955F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(605, 67);
			this->label1->TabIndex = 6;
			this->label1->Text = L"¿Como podriamos ayudarte\?";
			this->label1->Click += gcnew System::EventHandler(this, &FAQForm::label1_Click);
			// 
			// btnNewQuestion
			// 
			this->btnNewQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->tableLayoutPanel1->SetColumnSpan(this->btnNewQuestion, 2);
			this->btnNewQuestion->Location = System::Drawing::Point(269, 478);
			this->btnNewQuestion->Margin = System::Windows::Forms::Padding(20);
			this->btnNewQuestion->Name = L"btnNewQuestion";
			this->btnNewQuestion->Size = System::Drawing::Size(223, 61);
			this->btnNewQuestion->TabIndex = 9;
			this->btnNewQuestion->Text = L"Tengo otra pregunta";
			this->btnNewQuestion->UseVisualStyleBackColor = false;
			this->btnNewQuestion->Click += gcnew System::EventHandler(this, &FAQForm::btnNewQuestion_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(627, 468);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(10, 10, 50, 50);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(184, 53);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &FAQForm::btnGoBackMenu_Click);
			// 
			// dgvQuestions
			// 
			this->dgvQuestions->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvQuestions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvQuestions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->tableLayoutPanel1->SetColumnSpan(this->dgvQuestions, 2);
			this->dgvQuestions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvQuestions->Location = System::Drawing::Point(120, 92);
			this->dgvQuestions->Margin = System::Windows::Forms::Padding(120, 2, 3, 2);
			this->dgvQuestions->Name = L"dgvQuestions";
			this->dgvQuestions->ReadOnly = true;
			this->dgvQuestions->RowHeadersWidth = 51;
			this->dgvQuestions->RowTemplate->Height = 24;
			this->dgvQuestions->Size = System::Drawing::Size(375, 364);
			this->dgvQuestions->TabIndex = 38;
			this->dgvQuestions->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FAQForm::dgvQuestions_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Preguntas Frecuentes";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// txtAnswer
			// 
			this->txtAnswer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtAnswer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtAnswer->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->txtAnswer->Location = System::Drawing::Point(515, 92);
			this->txtAnswer->Margin = System::Windows::Forms::Padding(3, 2, 40, 30);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->ReadOnly = true;
			this->txtAnswer->Size = System::Drawing::Size(306, 336);
			this->txtAnswer->TabIndex = 39;
			this->txtAnswer->TextChanged += gcnew System::EventHandler(this, &FAQForm::txtAnswer_TextChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				14)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				348)));
			this->tableLayoutPanel1->Controls->Add(this->btnNewQuestion, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnGoBackMenu, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtAnswer, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->dgvQuestions, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.70803F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80.29197F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 112)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(861, 571);
			this->tableLayoutPanel1->TabIndex = 40;
			// 
			// FAQForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(861, 571);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FAQForm";
			this->Text = L"FAQForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FAQForm::FAQForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestions))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnNewQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		NewQuestionForm^ newQuestionForm = gcnew NewQuestionForm();
		//this->Hide();
		newQuestionForm->Show();
	}
	public: 
		void showQuestions() {
			List<Question^>^ questionsList = Controller::QueryAllFAQ();
			if (questionsList != nullptr) {
				dgvQuestions->Rows->Clear();
				for (int i = 0; i < questionsList->Count; i++) {
					dgvQuestions->Rows->Add(gcnew array<String^> {questionsList[i]->question});
				}

			}
		}
	private: System::Void dgvQuestions_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		txtAnswer->Text = ""; //limpio el textbox
		if (dgvQuestions->SelectedRows->Count == 1) {
			String^ question = dgvQuestions->SelectedRows[0]->Cells[0]->Value->ToString();
			Question^ q = Controller::QueryQuestionbyRequest(question);
			txtAnswer->Text = q->Answer;
		}
		else {
			MessageBox::Show("Selecciona una pregunta");
			return;
		}
	
	}


	private: System::Void FAQForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showQuestions();
		dgvQuestions->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	}


	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		//abrir la ventana de encuesta de satisfacción y luego ir al menú principal 
		SatisfactionQuestion^ satisfactionform = gcnew SatisfactionQuestion();
		satisfactionform->Show();
		this->Hide();
	}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtAnswer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
