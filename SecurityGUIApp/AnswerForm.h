#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AnswerForm
	/// </summary>
	public ref class AnswerForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NewQuestion;
	private: System::Windows::Forms::TextBox^ txtNewQuestion;
	private: System::Windows::Forms::TextBox^ txtAnswer;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AnswerForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NewQuestion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtNewQuestion = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(411, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pregunta:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(411, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 24);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(497, 14);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->NewQuestion });
			this->dataGridView1->Location = System::Drawing::Point(21, 121);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(361, 259);
			this->dataGridView1->TabIndex = 38;
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
			this->txtNewQuestion->Location = System::Drawing::Point(415, 155);
			this->txtNewQuestion->Multiline = true;
			this->txtNewQuestion->Name = L"txtNewQuestion";
			this->txtNewQuestion->ReadOnly = true;
			this->txtNewQuestion->Size = System::Drawing::Size(198, 68);
			this->txtNewQuestion->TabIndex = 39;
			this->txtNewQuestion->TextChanged += gcnew System::EventHandler(this, &AnswerForm::txtNewQuestion_TextChanged);
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(416, 283);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(198, 91);
			this->txtAnswer->TabIndex = 40;
			// 
			// AnswerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 508);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->txtNewQuestion);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AnswerForm";
			this->Text = L"AnswerForm";
			this->Load += gcnew System::EventHandler(this, &AnswerForm::AnswerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	

private: System::Void txtNewQuestion_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void AnswerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//ShowNewQuestions();
}
public: 
	/*ShowNewQuestions() {
		QueryAllNewQuestions
	}*/
};
}
