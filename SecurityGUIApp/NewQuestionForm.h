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
	/// Resumen de NewQuestionForm
	/// </summary>
	public ref class NewQuestionForm : public System::Windows::Forms::Form
	{
	public:
		NewQuestionForm(void)
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
		~NewQuestionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtNewQuestion;
	private: System::Windows::Forms::TextBox^ txtAnswerbyOp;
	protected:


	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Button^ btnAsk;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewQuestionForm::typeid));
			this->txtNewQuestion = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswerbyOp = (gcnew System::Windows::Forms::TextBox());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->btnAsk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNewQuestion
			// 
			this->txtNewQuestion->Location = System::Drawing::Point(52, 28);
			this->txtNewQuestion->Multiline = true;
			this->txtNewQuestion->Name = L"txtNewQuestion";
			this->txtNewQuestion->Size = System::Drawing::Size(413, 65);
			this->txtNewQuestion->TabIndex = 0;
			this->txtNewQuestion->Text = L"Escribe aquí tu pregunta (Máximo 50 palabras)...";
			// 
			// txtAnswerbyOp
			// 
			this->txtAnswerbyOp->Location = System::Drawing::Point(52, 169);
			this->txtAnswerbyOp->Multiline = true;
			this->txtAnswerbyOp->Name = L"txtAnswerbyOp";
			this->txtAnswerbyOp->ReadOnly = true;
			this->txtAnswerbyOp->Size = System::Drawing::Size(413, 212);
			this->txtAnswerbyOp->TabIndex = 1;
			this->txtAnswerbyOp->Text = L"Respuesta";
			this->txtAnswerbyOp->Visible = false;
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(372, 435);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// btnAsk
			// 
			this->btnAsk->Location = System::Drawing::Point(372, 109);
			this->btnAsk->Name = L"btnAsk";
			this->btnAsk->Size = System::Drawing::Size(93, 34);
			this->btnAsk->TabIndex = 38;
			this->btnAsk->Text = L"Preguntar";
			this->btnAsk->UseVisualStyleBackColor = true;
			this->btnAsk->Click += gcnew System::EventHandler(this, &NewQuestionForm::btnAsk_Click);
			// 
			// NewQuestionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 516);
			this->Controls->Add(this->btnAsk);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->txtAnswerbyOp);
			this->Controls->Add(this->txtNewQuestion);
			this->Name = L"NewQuestionForm";
			this->Text = L"NewQuestionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void btnAsk_Click(System::Object^ sender, System::EventArgs^ e) {
		txtAnswerbyOp->Text = "";
		String^ newq = txtNewQuestion->Text->Trim();
		if (newq == "") {
			MessageBox::Show("Ingrese una nueva pregunta...\n"); 
			return;
		}
		if (Controller::AddNewQuestion(newq) == 1) {
			MessageBox::Show("Espere a la respuesta del operador...\n");
		}
	
	}
};
}