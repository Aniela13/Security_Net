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
	/// Resumen de NewQuestionForm
	/// </summary>
	public ref class NewQuestionForm : public System::Windows::Forms::Form
	{
	public:
		Thread^ myThread;
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
	private: System::Windows::Forms::Label^ label1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCharging))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNewQuestion
			// 
			this->txtNewQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtNewQuestion->Location = System::Drawing::Point(63, 57);
			this->txtNewQuestion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNewQuestion->Multiline = true;
			this->txtNewQuestion->Name = L"txtNewQuestion";
			this->txtNewQuestion->Size = System::Drawing::Size(449, 66);
			this->txtNewQuestion->TabIndex = 0;
			this->txtNewQuestion->Text = L"Escribe aquí tu pregunta (Máximo 50 palabras)...";
			this->txtNewQuestion->Click += gcnew System::EventHandler(this, &NewQuestionForm::txtNewQuestion_Click);
			// 
			// txtAnswerbyOp
			// 
			this->txtAnswerbyOp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtAnswerbyOp->Location = System::Drawing::Point(63, 287);
			this->txtAnswerbyOp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAnswerbyOp->Multiline = true;
			this->txtAnswerbyOp->Name = L"txtAnswerbyOp";
			this->txtAnswerbyOp->ReadOnly = true;
			this->txtAnswerbyOp->Size = System::Drawing::Size(413, 144);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(372, 455);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &NewQuestionForm::btnGoBackMenu_Click);
			// 
			// btnAsk
			// 
			this->btnAsk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAsk->Location = System::Drawing::Point(383, 139);
			this->btnAsk->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAsk->MaximumSize = System::Drawing::Size(100, 40);
			this->btnAsk->Name = L"btnAsk";
			this->btnAsk->Size = System::Drawing::Size(93, 34);
			this->btnAsk->TabIndex = 38;
			this->btnAsk->Text = L"Preguntar";
			this->btnAsk->UseVisualStyleBackColor = true;
			this->btnAsk->Click += gcnew System::EventHandler(this, &NewQuestionForm::btnAsk_Click);
			// 
			// pbCharging
			// 
			this->pbCharging->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pbCharging->BackColor = System::Drawing::Color::Transparent;
			this->pbCharging->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCharging.Image")));
			this->pbCharging->Location = System::Drawing::Point(196, 235);
			this->pbCharging->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbCharging->MaximumSize = System::Drawing::Size(140, 90);
			this->pbCharging->MinimumSize = System::Drawing::Size(140, 90);
			this->pbCharging->Name = L"pbCharging";
			this->pbCharging->Size = System::Drawing::Size(140, 90);
			this->pbCharging->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCharging->TabIndex = 39;
			this->pbCharging->TabStop = false;
			this->pbCharging->Visible = false;
			// 
			// lblWaitAnswer
			// 
			this->lblWaitAnswer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblWaitAnswer->AutoSize = true;
			this->lblWaitAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWaitAnswer->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lblWaitAnswer->Location = System::Drawing::Point(87, 190);
			this->lblWaitAnswer->Name = L"lblWaitAnswer";
			this->lblWaitAnswer->Size = System::Drawing::Size(440, 29);
			this->lblWaitAnswer->TabIndex = 40;
			this->lblWaitAnswer->Text = L"Espere a la respuesta del operador..";
			this->lblWaitAnswer->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(25, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 29);
			this->label1->TabIndex = 41;
			this->label1->Text = L"En que podemos ayudarte\?";
			this->label1->Visible = false;
			// 
			// NewQuestionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(589, 581);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblWaitAnswer);
			this->Controls->Add(this->pbCharging);
			this->Controls->Add(this->btnAsk);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->txtAnswerbyOp);
			this->Controls->Add(this->txtNewQuestion);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"NewQuestionForm";
			this->Text = L"NewQuestionForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCharging))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public:
		void UpdateWaitingLabel(String^ estado) {
			lblWaitAnswer->Text = estado;
		}
	public:
		void ShowAnswer(String^ respuesta) {
			pbCharging->Visible = false;
			lblWaitAnswer->Visible = false;
			txtAnswerbyOp->Visible = true;
			txtAnswerbyOp->Text = respuesta;

		}
	private: System::Void btnAsk_Click(System::Object^ sender, System::EventArgs^ e) {
		txtAnswerbyOp->Text = "";
		String^ pregunta = txtNewQuestion->Text->Trim();
		if (pregunta == "") {
			MessageBox::Show("Ingrese una nueva pregunta...\n");
			return;
		}
		else {
			Question^ newq = gcnew Question(pregunta, "Por definir", false);
			int res = Controller::AddNewQuestion(newq);
			if (res > 0) {
				pbCharging->Visible = true;
				lblWaitAnswer->Visible = true;
				txtAnswerbyOp->Visible = false;
				myThread = gcnew Thread(gcnew ThreadStart(this, &NewQuestionForm::MyExecutionProcess));
				myThread->Start();
			}
		}
	
	}
		   delegate void MyDelegate(String^);
		   delegate void AnimationDelegate(String^);

		   void MyExecutionProcess() {
			   String^ pregunta = txtNewQuestion->Text->Trim();
			   if (pregunta == "") {
				   MessageBox::Show("Ingrese una nueva pregunta...\n");
				   return;
			   }
			   array<String^>^ estados = { "Esperando respuesta del operador.",
								"Esperando respuesta del operador..",
								"Esperando respuesta del operador..." };

			   int i = 0;
			   while (true) {
				   try {
					   // Mostrar animación del label con puntos cambiantes
					   String^ estadoActual = estados[i % estados->Length];
					   Invoke(gcnew AnimationDelegate(this, &NewQuestionForm::UpdateWaitingLabel), estadoActual);
					   i++;

					   // Revisar si ya hay respuesta
					   Question^ q = Controller::QueryQuestionbyRequest(pregunta);
					   if (q != nullptr && q->Answer != "Por definir") {
						   Invoke(gcnew MyDelegate(this, &NewQuestionForm::ShowAnswer), q->Answer);
						   break;
					   }

					   Thread::Sleep(1000); // Esperar 1 segundo antes del siguiente cambio de estado
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }
	private: System::Void txtNewQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		txtNewQuestion->Text = "";//Que se borre lo anterior
	}


private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}