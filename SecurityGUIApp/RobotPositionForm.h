#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RobotPosition
	/// </summary>
	public ref class RobotPositionForm : public System::Windows::Forms::Form
	{
	public:
		RobotPositionForm(void)
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
		~RobotPositionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDelete;
	protected:
	private: System::Windows::Forms::Button^ btnAddZone;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::TextBox^ txtNameZone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRobotName;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RobotPositionForm::typeid));
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddZone = (gcnew System::Windows::Forms::Button());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->txtNameZone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRobotName = (gcnew System::Windows::Forms::TextBox());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(368, 550);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(91, 42);
			this->btnDelete->TabIndex = 47;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(368, 502);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(91, 37);
			this->btnAddZone->TabIndex = 46;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(170, 570);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->Size = System::Drawing::Size(58, 22);
			this->txtPointY->TabIndex = 45;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(170, 534);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->Size = System::Drawing::Size(58, 22);
			this->txtPointX->TabIndex = 44;
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(170, 502);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(156, 22);
			this->txtNameZone->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 573);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Coordenada X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 502);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Nombre Zona: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(151, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 35);
			this->label1->TabIndex = 48;
			this->label1->Text = L"UBICACION DEL ROBOT ";
			// 
			// txtRobotName
			// 
			this->txtRobotName->Location = System::Drawing::Point(556, 101);
			this->txtRobotName->Name = L"txtRobotName";
			this->txtRobotName->Size = System::Drawing::Size(145, 22);
			this->txtRobotName->TabIndex = 49;
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(689, 544);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 51;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			this->btnGoBackMenu->Click += gcnew System::EventHandler(this, &RobotPositionForm::btnGoBackMenu_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(64, 174);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(466, 275);
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			// 
			// RobotPosition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 625);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtRobotName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAddZone);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->txtNameZone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"RobotPositionForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
