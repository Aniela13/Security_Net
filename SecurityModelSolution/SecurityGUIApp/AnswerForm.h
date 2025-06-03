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
	private: System::Windows::Forms::Label^ labelQuestion;
	private: System::Windows::Forms::Label^ labelAnswer;
	private: System::Windows::Forms::Button^ btnGoBackMenu;



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
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pregunta:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(102, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Respuesta: ";
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Location = System::Drawing::Point(291, 118);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(16, 16);
			this->labelQuestion->TabIndex = 2;
			this->labelQuestion->Text = L"...";
			// 
			// labelAnswer
			// 
			this->labelAnswer->AutoSize = true;
			this->labelAnswer->Location = System::Drawing::Point(291, 227);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(16, 16);
			this->labelAnswer->TabIndex = 3;
			this->labelAnswer->Text = L"...";
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(388, 378);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// AnswerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 459);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->labelAnswer);
			this->Controls->Add(this->labelQuestion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AnswerForm";
			this->Text = L"AnswerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	

};
}
