#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ZoneLocation
	/// </summary>
	public ref class ZoneLocation : public System::Windows::Forms::Form
	{
	public:
		ZoneLocation(void)
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
		~ZoneLocation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picBoxMap;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListView^ listViewZones;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ZoneLocation::typeid));
			this->picBoxMap = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listViewZones = (gcnew System::Windows::Forms::ListView());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMap))->BeginInit();
			this->SuspendLayout();
			// 
			// picBoxMap
			// 
			this->picBoxMap->Location = System::Drawing::Point(12, 138);
			this->picBoxMap->Name = L"picBoxMap";
			this->picBoxMap->Size = System::Drawing::Size(382, 336);
			this->picBoxMap->TabIndex = 0;
			this->picBoxMap->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ubicación actual";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(21, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"¿A dónde quieres ir\?";
			// 
			// listViewZones
			// 
			this->listViewZones->HideSelection = false;
			this->listViewZones->Location = System::Drawing::Point(437, 138);
			this->listViewZones->Name = L"listViewZones";
			this->listViewZones->Size = System::Drawing::Size(207, 328);
			this->listViewZones->TabIndex = 3;
			this->listViewZones->UseCompatibleStateImageBehavior = false;
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(525, 504);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// ZoneLocation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 585);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->listViewZones);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxMap);
			this->Name = L"ZoneLocation";
			this->Text = L"ZoneLocation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMap))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
};
}
