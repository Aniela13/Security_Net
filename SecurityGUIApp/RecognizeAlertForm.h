#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RecognizeAlertForm
	/// </summary>
	public ref class RecognizeAlertForm : public System::Windows::Forms::Form
	{
	public:
		RecognizeAlertForm(void)
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
		~RecognizeAlertForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::TextBox^ txtNameZone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnReviewAlarm;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RecognizeAlertForm::typeid));
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->txtNameZone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnReviewAlarm = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(790, 418);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 55;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(38, 132);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 227);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(70, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 31);
			this->label1->TabIndex = 56;
			this->label1->Text = L"CAMARA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(448, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 58;
			this->label2->Text = L"RUIDO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(454, 83);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(197, 197);
			this->pictureBox2->TabIndex = 57;
			this->pictureBox2->TabStop = false;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(588, 454);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->Size = System::Drawing::Size(58, 22);
			this->txtPointY->TabIndex = 64;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(588, 418);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->Size = System::Drawing::Size(58, 22);
			this->txtPointX->TabIndex = 63;
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(588, 386);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(156, 22);
			this->txtNameZone->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(459, 457);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(459, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Coordenada X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(459, 386);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 16);
			this->label5->TabIndex = 59;
			this->label5->Text = L"Nombre Zona: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(456, 328);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 31);
			this->label6->TabIndex = 65;
			this->label6->Text = L"POSICION";
			// 
			// btnReviewAlarm
			// 
			this->btnReviewAlarm->BackColor = System::Drawing::Color::RosyBrown;
			this->btnReviewAlarm->Location = System::Drawing::Point(790, 312);
			this->btnReviewAlarm->Name = L"btnReviewAlarm";
			this->btnReviewAlarm->Size = System::Drawing::Size(134, 73);
			this->btnReviewAlarm->TabIndex = 66;
			this->btnReviewAlarm->Text = L"AÑADIR ALERTA";
			this->btnReviewAlarm->UseVisualStyleBackColor = false;
			// 
			// RecognizeAlertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 499);
			this->Controls->Add(this->btnReviewAlarm);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->txtNameZone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"RecognizeAlertForm";
			this->Text = L"RecognizeAlertForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
