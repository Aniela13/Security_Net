#pragma once
#include "ComboBoxItem.h"

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




	private: System::Windows::Forms::Button^ btnAddAlert;
	private: System::Windows::Forms::DateTimePicker^ dtpStartingDate;
	private: System::Windows::Forms::DateTimePicker^ dtpEndingDate;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbAlarmType;


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
			this->btnAddAlert = (gcnew System::Windows::Forms::Button());
			this->dtpStartingDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpEndingDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbAlarmType = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Descripcion
			// 
			this->Descripcion->AutoSize = true;
			this->Descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Descripcion->Location = System::Drawing::Point(72, 272);
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->Size = System::Drawing::Size(114, 25);
			this->Descripcion->TabIndex = 0;
			this->Descripcion->Text = L"Descripcion";
			// 
			// txtAlarmDescription
			// 
			this->txtAlarmDescription->Location = System::Drawing::Point(77, 320);
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
			// btnAddAlert
			// 
			this->btnAddAlert->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAddAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddAlert->Location = System::Drawing::Point(80, 438);
			this->btnAddAlert->Name = L"btnAddAlert";
			this->btnAddAlert->Size = System::Drawing::Size(117, 57);
			this->btnAddAlert->TabIndex = 6;
			this->btnAddAlert->Text = L"Añadir";
			this->btnAddAlert->UseVisualStyleBackColor = false;
			this->btnAddAlert->Click += gcnew System::EventHandler(this, &CreateAlarmForm::btnAddAlert_Click);
			// 
			// dtpStartingDate
			// 
			this->dtpStartingDate->Location = System::Drawing::Point(249, 94);
			this->dtpStartingDate->Name = L"dtpStartingDate";
			this->dtpStartingDate->Size = System::Drawing::Size(268, 22);
			this->dtpStartingDate->TabIndex = 7;
			this->dtpStartingDate->Value = System::DateTime(2025, 6, 17, 9, 7, 38, 0);
			// 
			// dtpEndingDate
			// 
			this->dtpEndingDate->Location = System::Drawing::Point(249, 162);
			this->dtpEndingDate->Name = L"dtpEndingDate";
			this->dtpEndingDate->Size = System::Drawing::Size(268, 22);
			this->dtpEndingDate->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Categoría";
			// 
			// cmbAlarmType
			// 
			this->cmbAlarmType->FormattingEnabled = true;
			this->cmbAlarmType->Location = System::Drawing::Point(249, 226);
			this->cmbAlarmType->Name = L"cmbAlarmType";
			this->cmbAlarmType->Size = System::Drawing::Size(210, 24);
			this->cmbAlarmType->TabIndex = 10;
			// 
			// CreateAlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 542);
			this->Controls->Add(this->cmbAlarmType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpEndingDate);
			this->Controls->Add(this->dtpStartingDate);
			this->Controls->Add(this->btnAddAlert);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlarmDescription);
			this->Controls->Add(this->Descripcion);
			this->Name = L"CreateAlarmForm";
			this->Text = L"CreateAlarmForm";
			this->Load += gcnew System::EventHandler(this, &CreateAlarmForm::CreateAlarmForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		Warning^ CargarAlarm() {
			System::Collections::Generic::Queue<Warning^>^ alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
			if (alarmsbybtn == nullptr || alarmsbybtn->Count == 0)
				return nullptr;

			List<Warning^>^ alarms = gcnew List<Warning^>(alarmsbybtn);
			Warning^ desactivatedalarm = alarms[alarms->Count - 1];
			return desactivatedalarm;
		}
	public:
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == ComboBox::typeid) {
					//PONER FECHA DEL DIA EN COMOBOBOX POR DEFECTO
					cmbAlarmType->Items->Clear();  // Limpia los ítems del ComboBox
					cmbAlarmType->Text = "";       // Limpia el texto seleccionado
				}
			}
		}
	public: 
		void InitializeDateTimePickers() {
			Warning^ newalarm = CargarAlarm();
			dtpStartingDate->Format = DateTimePickerFormat::Custom;
			dtpEndingDate->Format = DateTimePickerFormat::Custom;
			dtpStartingDate->CustomFormat = "dd/MM/yyyy HH:mm tt";
			dtpEndingDate->CustomFormat = "dd/MM/yyyy HH:mm tt";
			dtpStartingDate->Value = *newalarm->StartingDate;
			dtpStartingDate->Value = *newalarm->EndingDate;
			dtpStartingDate->Enabled = false;
			dtpEndingDate->Enabled = false;
	}

	public:
		void FillSectorsInComboBox() {
			cmbAlarmType->Items->Clear();
			List<WarningType^>^ alarmtypes = Controller::QueryAllWarningsType();
			if (alarmtypes != nullptr) {
				for each (WarningType ^ type in alarmtypes) {
					cmbAlarmType->Items->Add(gcnew ComboBoxItem(type->Id, type->Name));
				}
			}
		}

	private: System::Void btnAddAlert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Warning^ newalarm = CargarAlarm();
			int selectedIndex = cmbAlarmType->SelectedIndex;
			if (selectedIndex < 0) {
				MessageBox::Show("Debe seleccionar una categoría de alarma");
				return;
			}
			else {
				WarningType^ type = Controller::QueryWarningTypeById(((ComboBoxItem^)(cmbAlarmType->Items[cmbAlarmType->SelectedIndex]))->Value);
				newalarm->Type = type; 
				newalarm->Description = txtAlarmDescription->Text;
			}
			
			if (Controller::UpdateWarning(newalarm) == 1) {
				//ClearControls();
				MessageBox::Show("Se ha agregado una nueva alarma");
			}
			else {
				MessageBox::Show("No se ha podido agregar la nueva alarma");
				return;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar por el siguiente motivo:\n" +
				ex->Message);
		}
	
	}


	private: System::Void CreateAlarmForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillSectorsInComboBox();
		InitializeDateTimePickers();
		int selectedIndex = cmbAlarmType->SelectedIndex;
		if (selectedIndex < 0) {
			txtAlarmDescription->Text = "";
		}
		else {
			WarningType^ type = Controller::QueryWarningTypeById(((ComboBoxItem^)(cmbAlarmType->Items[cmbAlarmType->SelectedIndex]))->Value);
			txtAlarmDescription->Text = type->Description;
		}

	}

};
}
