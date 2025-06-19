#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NoiseSensorForm
	/// </summary>
	public ref class NoiseSensorForm : public System::Windows::Forms::Form
	{
	public:
		NoiseSensorForm(void)
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
		~NoiseSensorForm()
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
	private: System::Windows::Forms::Button^ btnChangeRoute;

	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NoiseSensorForm::typeid));
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnChangeRoute = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(653, 428);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 39;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(135, 204);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 293);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(243, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 35);
			this->label1->TabIndex = 49;
			this->label1->Text = L"SENSOR DE SONIDO";
			// 
			// btnChangeRoute
			// 
			this->btnChangeRoute->BackColor = System::Drawing::Color::PeachPuff;
			this->btnChangeRoute->Location = System::Drawing::Point(665, 290);
			this->btnChangeRoute->Name = L"btnChangeRoute";
			this->btnChangeRoute->Size = System::Drawing::Size(96, 71);
			this->btnChangeRoute->TabIndex = 50;
			this->btnChangeRoute->Text = L"CAMBIAR RUTA";
			this->btnChangeRoute->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 24);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Reporte del sensor de sonido";
			// 
			// NoiseSensorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 641);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnChangeRoute);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"NoiseSensorForm";
			this->Text = L"NoiseSensorForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
