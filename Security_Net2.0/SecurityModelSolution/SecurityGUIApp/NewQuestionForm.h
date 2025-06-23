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
	private: System::Windows::Forms::PictureBox^ pbCharging;
	private: System::Windows::Forms::Label^ lblWaitAnswer;


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
			this->pbCharging = (gcnew System::Windows::Forms::PictureBox());
			this->lblWaitAnswer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCharging))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNewQuestion
			// 
			this->txtNewQuestion->Location = System::Drawing::Point(39, 23);
			this->txtNewQuestion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNewQuestion->Multiline = true;
			this->txtNewQuestion->Name = L"txtNewQuestion";
			this->txtNewQuestion->Size = System::Drawing::Size(311, 54);
			this->txtNewQuestion->TabIndex = 0;
			this->txtNewQuestion->Text = L"Escribe aquí tu pregunta (Máximo 50 palabras)...";
			this->txtNewQuestion->Click += gcnew System::EventHandler(this, &NewQuestionForm::txtNewQuestion_Click);
			// 
			// txtAnswerbyOp
			// 
			this->txtAnswerbyOp->Location = System::Drawing::Point(46, 280);
			this->txtAnswerbyOp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAnswerbyOp->Multiline = true;
			this->txtAnswerbyOp->Name = L"txtAnswerbyOp";
			this->txtAnswerbyOp->ReadOnly = true;
			this->txtAnswerbyOp->Size = System::Drawing::Size(311, 86);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(279, 370);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(112, 56);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// btnAsk
			// 
			this->btnAsk->Location = System::Drawing::Point(279, 89);
			this->btnAsk->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAsk->Name = L"btnAsk";
			this->btnAsk->Size = System::Drawing::Size(70, 28);
			this->btnAsk->TabIndex = 38;
			this->btnAsk->Text = L"Preguntar";
			this->btnAsk->UseVisualStyleBackColor = true;
			this->btnAsk->Click += gcnew System::EventHandler(this, &NewQuestionForm::btnAsk_Click);
			// 
			// pbCharging
			// 
			this->pbCharging->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCharging.Image")));
			this->pbCharging->Location = System::Drawing::Point(147, 191);
			this->pbCharging->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pbCharging->Name = L"pbCharging";
			this->pbCharging->Size = System::Drawing::Size(100, 71);
			this->pbCharging->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCharging->TabIndex = 39;
			this->pbCharging->TabStop = false;
			this->pbCharging->Visible = false;
			// 
			// lblWaitAnswer
			// 
			this->lblWaitAnswer->AutoSize = true;
			this->lblWaitAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWaitAnswer->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lblWaitAnswer->Location = System::Drawing::Point(65, 154);
			this->lblWaitAnswer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblWaitAnswer->Name = L"lblWaitAnswer";
			this->lblWaitAnswer->Size = System::Drawing::Size(301, 20);
			this->lblWaitAnswer->TabIndex = 40;
			this->lblWaitAnswer->Text = L"Espere a la respuesta del operador..";
			this->lblWaitAnswer->Visible = false;
			// 
			// NewQuestionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(442, 472);
			this->Controls->Add(this->lblWaitAnswer);
			this->Controls->Add(this->pbCharging);
			this->Controls->Add(this->btnAsk);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->txtAnswerbyOp);
			this->Controls->Add(this->txtNewQuestion);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"NewQuestionForm";
			this->Text = L"NewQuestionForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCharging))->EndInit();
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
			pbCharging->Visible = true;
			lblWaitAnswer->Visible = true;
		}
		
	
	}
private: System::Void txtNewQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNewQuestion->Text = "";//Que se borre lo anterior
}
};
}