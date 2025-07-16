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
		static Warning^ AlertaCargada;
	public:
		CreateAlarmForm(void)
		{

			InitializeComponent();
			//->AlertaCargada;

			//
			//TODO: agregar código de constructor aquí
			//
		}
		void SetWarning(Warning^ w) {
			AlertaCargada = w;
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
	private: System::Windows::Forms::Label^ lblDescripcion;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateAlarmForm::typeid));
			this->lblDescripcion = (gcnew System::Windows::Forms::Label());
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
			// lblDescripcion
			// 
			this->lblDescripcion->AutoSize = true;
			this->lblDescripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescripcion->Location = System::Drawing::Point(72, 272);
			this->lblDescripcion->Name = L"lblDescripcion";
			this->lblDescripcion->Size = System::Drawing::Size(114, 25);
			this->lblDescripcion->TabIndex = 0;
			this->lblDescripcion->Text = L"Descripcion";
			// 
			// txtAlarmDescription
			// 
			this->txtAlarmDescription->Location = System::Drawing::Point(77, 320);
			this->txtAlarmDescription->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAlarmDescription->Multiline = true;
			this->txtAlarmDescription->Name = L"txtAlarmDescription";
			this->txtAlarmDescription->Size = System::Drawing::Size(584, 100);
			this->txtAlarmDescription->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fecha Inicio de Alerta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 162);
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
			this->btnAddAlert->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->dtpStartingDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpStartingDate->Name = L"dtpStartingDate";
			this->dtpStartingDate->Size = System::Drawing::Size(268, 22);
			this->dtpStartingDate->TabIndex = 7;
			this->dtpStartingDate->Value = System::DateTime(2025, 6, 17, 9, 7, 38, 0);
			// 
			// dtpEndingDate
			// 
			this->dtpEndingDate->Location = System::Drawing::Point(249, 162);
			this->dtpEndingDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEndingDate->Name = L"dtpEndingDate";
			this->dtpEndingDate->Size = System::Drawing::Size(268, 22);
			this->dtpEndingDate->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Categoría";
			// 
			// cmbAlarmType
			// 
			this->cmbAlarmType->FormattingEnabled = true;
			this->cmbAlarmType->Location = System::Drawing::Point(249, 226);
			this->cmbAlarmType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbAlarmType->Name = L"cmbAlarmType";
			this->cmbAlarmType->Size = System::Drawing::Size(209, 24);
			this->cmbAlarmType->TabIndex = 10;
			this->cmbAlarmType->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateAlarmForm::cmbAlarmType_SelectedIndexChanged);
			// 
			// CreateAlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(779, 539);
			this->Controls->Add(this->cmbAlarmType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpEndingDate);
			this->Controls->Add(this->dtpStartingDate);
			this->Controls->Add(this->btnAddAlert);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlarmDescription);
			this->Controls->Add(this->lblDescripcion);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CreateAlarmForm";
			this->Text = L"CreateAlarmForm";
			this->Load += gcnew System::EventHandler(this, &CreateAlarmForm::CreateAlarmForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*public:
		Warning^ CargarAlarm() {
			List<Warning^>^ alarmsbybtn = Controller::QueryAllWarningsbyEmergencyButton();
			if (alarmsbybtn == nullptr || alarmsbybtn->Count == 0)
				return nullptr;

			List<Warning^>^ alarms = gcnew List<Warning^>(alarmsbybtn);
			Warning^ desactivatedalarm = alarms[alarms->Count - 1];
			return desactivatedalarm;
		}*/
	public:
		void ClearControls() {
			for each(Control ^ control in this->Controls) {
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
			Warning^ newalarm = AlertaCargada;
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
				for each(WarningType ^ type in alarmtypes) {
					cmbAlarmType->Items->Add(gcnew ComboBoxItem(type->Id, type->Name));
				}
			}
		}

	private: System::Void btnAddAlert_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Warning^ newalarm = AlertaCargada;
			int selectedIndex = cmbAlarmType->SelectedIndex;
			if (selectedIndex < 0) {
				MessageBox::Show("Debe seleccionar una categoría de alarma");
				return;
			}
			
			WarningType^ type = Controller::QueryWarningTypeById(((ComboBoxItem^)(cmbAlarmType->Items[cmbAlarmType->SelectedIndex]))->Value + 1);
			newalarm->Type = type;
			newalarm->Description = txtAlarmDescription->Text;
			
			if (Controller::UpdateWarning(newalarm) == 1) {
				//ClearControls();
				MessageBox::Show("Se ha agregado una nueva alarma al historial");
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

	}

	private: System::Void cmbAlarmType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(cmbAlarmType->SelectedItem);
		if (selectedItem == nullptr) {
			txtAlarmDescription->Text = "";
		}
		else {
			WarningType^ type = Controller::QueryWarningTypeById(selectedItem->Value);
			txtAlarmDescription->Text = type->Description;
		}
	}
	};
}

