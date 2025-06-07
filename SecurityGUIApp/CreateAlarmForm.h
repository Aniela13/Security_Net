#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CreateAlarmForm
	/// </summary>
	public ref class CreateAlarmForm : public System::Windows::Forms::Form
	{
	public:
		CreateAlarmForm(void)
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
		~CreateAlarmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Descripcion;
	private: System::Windows::Forms::TextBox^ txtAlarmDescription;
	protected:


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtEndTimeAlert;
	private: System::Windows::Forms::TextBox^ txtStartTimeAlert;


	private: System::Windows::Forms::Button^ btnAddAlert;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Descripcion = (gcnew System::Windows::Forms::Label());
			this->txtAlarmDescription = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtEndTimeAlert = (gcnew System::Windows::Forms::TextBox());
			this->txtStartTimeAlert = (gcnew System::Windows::Forms::TextBox());
			this->btnAddAlert = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Descripcion
			// 
			this->Descripcion->AutoSize = true;
			this->Descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Descripcion->Location = System::Drawing::Point(72, 243);
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->Size = System::Drawing::Size(114, 25);
			this->Descripcion->TabIndex = 0;
			this->Descripcion->Text = L"Descripcion";
			// 
			// txtAlarmDescription
			// 
			this->txtAlarmDescription->Location = System::Drawing::Point(77, 291);
			this->txtAlarmDescription->Multiline = true;
			this->txtAlarmDescription->Name = L"txtAlarmDescription";
			this->txtAlarmDescription->Size = System::Drawing::Size(584, 100);
			this->txtAlarmDescription->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fecha Inicio de Alerta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fecha Fin de Alerta";
			// 
			// txtEndTimeAlert
			// 
			this->txtEndTimeAlert->Location = System::Drawing::Point(77, 197);
			this->txtEndTimeAlert->Name = L"txtEndTimeAlert";
			this->txtEndTimeAlert->Size = System::Drawing::Size(166, 22);
			this->txtEndTimeAlert->TabIndex = 4;
			// 
			// txtStartTimeAlert
			// 
			this->txtStartTimeAlert->Location = System::Drawing::Point(77, 125);
			this->txtStartTimeAlert->Name = L"txtStartTimeAlert";
			this->txtStartTimeAlert->Size = System::Drawing::Size(166, 22);
			this->txtStartTimeAlert->TabIndex = 5;
			// 
			// btnAddAlert
			// 
			this->btnAddAlert->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAddAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddAlert->Location = System::Drawing::Point(544, 198);
			this->btnAddAlert->Name = L"btnAddAlert";
			this->btnAddAlert->Size = System::Drawing::Size(117, 57);
			this->btnAddAlert->TabIndex = 6;
			this->btnAddAlert->Text = L"Añadir";
			this->btnAddAlert->UseVisualStyleBackColor = false;
			this->btnAddAlert->Click += gcnew System::EventHandler(this, &CreateAlarmForm::btnAddAlert_Click);
			// 
			// CreateAlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 542);
			this->Controls->Add(this->btnAddAlert);
			this->Controls->Add(this->txtStartTimeAlert);
			this->Controls->Add(this->txtEndTimeAlert);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlarmDescription);
			this->Controls->Add(this->Descripcion);
			this->Name = L"CreateAlarmForm";
			this->Text = L"CreateAlarmForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnAddAlert_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
