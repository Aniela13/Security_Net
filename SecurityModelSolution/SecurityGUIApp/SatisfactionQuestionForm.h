#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SatisfactionQuestion
	/// </summary>
	public ref class SatisfactionQuestion : public System::Windows::Forms::Form
	{
	public:
		SatisfactionQuestion(void)
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
		~SatisfactionQuestion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnYesSatisfation;
	private: System::Windows::Forms::Button^ btnNoSatisfation;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SatisfactionQuestion::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnYesSatisfation = (gcnew System::Windows::Forms::Button());
			this->btnNoSatisfation = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(42, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(717, 32);
			this->label1->TabIndex = 49;
			this->label1->Text = L"¿OBTUVISTE UNA RESPUESTA SATISFACTORIA\?";
			// 
			// btnYesSatisfation
			// 
			this->btnYesSatisfation->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnYesSatisfation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnYesSatisfation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnYesSatisfation->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnYesSatisfation.Image")));
			this->btnYesSatisfation->Location = System::Drawing::Point(206, 220);
			this->btnYesSatisfation->Name = L"btnYesSatisfation";
			this->btnYesSatisfation->Size = System::Drawing::Size(113, 111);
			this->btnYesSatisfation->TabIndex = 50;
			this->btnYesSatisfation->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnYesSatisfation->UseVisualStyleBackColor = false;
			// 
			// btnNoSatisfation
			// 
			this->btnNoSatisfation->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnNoSatisfation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNoSatisfation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnNoSatisfation->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNoSatisfation.Image")));
			this->btnNoSatisfation->Location = System::Drawing::Point(456, 220);
			this->btnNoSatisfation->Name = L"btnNoSatisfation";
			this->btnNoSatisfation->Size = System::Drawing::Size(108, 111);
			this->btnNoSatisfation->TabIndex = 51;
			this->btnNoSatisfation->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnNoSatisfation->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Marlett", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(256, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 23);
			this->label2->TabIndex = 52;
			this->label2->Text = L"SI";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Marlett", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label3->Location = System::Drawing::Point(489, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 23);
			this->label3->TabIndex = 53;
			this->label3->Text = L"NO";
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(662, 448);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 54;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// SatisfactionQuestion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 529);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnNoSatisfation);
			this->Controls->Add(this->btnYesSatisfation);
			this->Controls->Add(this->label1);
			this->Name = L"SatisfactionQuestion";
			this->Text = L"SatisfactionQuestion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
