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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::TextBox^ txtAnswer;







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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestions))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(253, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"PREGUNTAS FRECUENTES";
			// 
			// btnNewQuestion
			// 
			this->btnNewQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnNewQuestion->Location = System::Drawing::Point(159, 384);
			this->btnNewQuestion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnNewQuestion->Name = L"btnNewQuestion";
			this->btnNewQuestion->Size = System::Drawing::Size(314, 50);
			this->btnNewQuestion->TabIndex = 9;
			this->btnNewQuestion->Text = L"Tengo otra pregunta";
			this->btnNewQuestion->UseVisualStyleBackColor = false;
			this->btnNewQuestion->Click += gcnew System::EventHandler(this, &FAQForm::btnNewQuestion_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(501, 384);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &FAQForm::btnGoBackMenu_Click);
			// 
			// dgvQuestions
			// 
			this->dgvQuestions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvQuestions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dgvQuestions->Location = System::Drawing::Point(57, 62);
			this->dgvQuestions->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvQuestions->Name = L"dgvQuestions";
			this->dgvQuestions->ReadOnly = true;
			this->dgvQuestions->RowHeadersWidth = 51;
			this->dgvQuestions->RowTemplate->Height = 24;
			this->dgvQuestions->Size = System::Drawing::Size(262, 300);
			this->dgvQuestions->TabIndex = 38;
			this->dgvQuestions->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FAQForm::dgvQuestions_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PREGUNTAS ";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(350, 62);
			this->txtAnswer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->ReadOnly = true;
			this->txtAnswer->Size = System::Drawing::Size(224, 301);
			this->txtAnswer->TabIndex = 39;
			this->txtAnswer->TextChanged += gcnew System::EventHandler(this, &FAQForm::txtAnswer_TextChanged);
			// 
			// FAQForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(646, 464);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->dgvQuestions);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnNewQuestion);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"FAQForm";
			this->Text = L"FAQForm";
			this->Load += gcnew System::EventHandler(this, &FAQForm::FAQForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQuestions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void dgvQuestions_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		txtAnswer->Text = ""; //limpio el textbox
		String^ question = dgvQuestions->Rows[dgvQuestions->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		String^ answer = Controller::QueryAnswerByQuestion(question);
		txtAnswer->Text = answer;
	}


	private: System::Void FAQForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showQuestions();
	}


	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		//abrir la ventana de encuesta de satisfacción y luego ir al menú principal 
		/*SatisfactionQuestion^ satisfactionform = gcnew SatisfactionQuestion();
		this->Hide();
		satisfactionform->Show();*/
	}

private: System::Void txtAnswer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
