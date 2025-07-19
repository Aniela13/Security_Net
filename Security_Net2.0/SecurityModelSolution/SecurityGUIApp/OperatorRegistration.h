#pragma once
#include "ValidateOpForm.h"
#include "ComboBoxItem.h"


namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SecurityModel;
	using namespace SecurityController;

	/// <summary>
	/// Resumen de OperatorRegistration
	/// </summary>
	public ref class OperatorRegistration : public System::Windows::Forms::Form
	{
	public:
		OperatorRegistration(void)
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
		~OperatorRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtOpPassword;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSecurityUser;
	private: System::Windows::Forms::TextBox^ txtOpDNI;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtOpLastName;

	private: System::Windows::Forms::TextBox^ txtOpName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSolicitarRegistro;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cmbDocument_Type;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ txtOpEmail;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dtpHireDate;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtOpAddress;
	private: System::Windows::Forms::TextBox^ txtOpMail;


	private: System::Windows::Forms::TextBox^ txtOpSalary;

	private: System::Windows::Forms::TextBox^ txtOpSchedule;

	private: System::Windows::Forms::GroupBox^ groupBoxGender;
	private: System::Windows::Forms::RadioButton^ rbtnMujer;
	private: System::Windows::Forms::RadioButton^ rbtnHombre;
	private: System::Windows::Forms::TextBox^ txtOpPhoneNumber;
	private: System::Windows::Forms::Button^ btnUploadPhoto;


	private: System::Windows::Forms::Label^ lblFullfilldata;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OperatorRegistration::typeid));
			this->txtOpPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSecurityUser = (gcnew System::Windows::Forms::TextBox());
			this->txtOpDNI = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtOpLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtOpName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSolicitarRegistro = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cmbDocument_Type = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtOpEmail = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dtpHireDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtOpAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtOpMail = (gcnew System::Windows::Forms::TextBox());
			this->txtOpSalary = (gcnew System::Windows::Forms::TextBox());
			this->txtOpSchedule = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnMujer = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnHombre = (gcnew System::Windows::Forms::RadioButton());
			this->txtOpPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnUploadPhoto = (gcnew System::Windows::Forms::Button());
			this->lblFullfilldata = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->groupBoxGender->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtOpPassword
			// 
			this->txtOpPassword->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtOpPassword->Enabled = false;
			this->txtOpPassword->Location = System::Drawing::Point(645, 349);
			this->txtOpPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtOpPassword->Name = L"txtOpPassword";
			this->txtOpPassword->ReadOnly = true;
			this->txtOpPassword->Size = System::Drawing::Size(118, 22);
			this->txtOpPassword->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label6->Location = System::Drawing::Point(447, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(355, 25);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Contraseña: ";
			// 
			// txtSecurityUser
			// 
			this->txtSecurityUser->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtSecurityUser->Enabled = false;
			this->txtSecurityUser->Location = System::Drawing::Point(235, 349);
			this->txtSecurityUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSecurityUser->Name = L"txtSecurityUser";
			this->txtSecurityUser->ReadOnly = true;
			this->txtSecurityUser->Size = System::Drawing::Size(121, 22);
			this->txtSecurityUser->TabIndex = 32;
			// 
			// txtOpDNI
			// 
			this->txtOpDNI->Location = System::Drawing::Point(634, 203);
			this->txtOpDNI->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtOpDNI->Name = L"txtOpDNI";
			this->txtOpDNI->Size = System::Drawing::Size(118, 22);
			this->txtOpDNI->TabIndex = 31;
			this->txtOpDNI->TextChanged += gcnew System::EventHandler(this, &OperatorRegistration::txtOpDNI_TextChanged);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(27, 346);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(400, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Usuario: ";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label5->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label5->Location = System::Drawing::Point(447, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Núm. de Doc. Id.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(391, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 32);
			this->label1->TabIndex = 28;
			this->label1->Text = L"REGISTRO";
			// 
			// txtOpLastName
			// 
			this->txtOpLastName->Location = System::Drawing::Point(174, 156);
			this->txtOpLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtOpLastName->Name = L"txtOpLastName";
			this->txtOpLastName->Size = System::Drawing::Size(194, 22);
			this->txtOpLastName->TabIndex = 27;
			// 
			// txtOpName
			// 
			this->txtOpName->Location = System::Drawing::Point(174, 104);
			this->txtOpName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtOpName->Name = L"txtOpName";
			this->txtOpName->Size = System::Drawing::Size(194, 22);
			this->txtOpName->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(27, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Apellidos: ";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(27, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nombres: ";
			// 
			// btnSolicitarRegistro
			// 
			this->btnSolicitarRegistro->Location = System::Drawing::Point(580, 402);
			this->btnSolicitarRegistro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSolicitarRegistro->Name = L"btnSolicitarRegistro";
			this->btnSolicitarRegistro->Size = System::Drawing::Size(225, 28);
			this->btnSolicitarRegistro->TabIndex = 23;
			this->btnSolicitarRegistro->Text = L"SOLICITAR REGISTRO";
			this->btnSolicitarRegistro->UseVisualStyleBackColor = true;
			this->btnSolicitarRegistro->Click += gcnew System::EventHandler(this, &OperatorRegistration::btnSolicitarRegistro_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(845, 104);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(236, 222);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 35;
			this->pbPhoto->TabStop = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label7->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label7->Location = System::Drawing::Point(27, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(400, 25);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Tipo de Doc. Id.";
			// 
			// cmbDocument_Type
			// 
			this->cmbDocument_Type->FormattingEnabled = true;
			this->cmbDocument_Type->Location = System::Drawing::Point(212, 201);
			this->cmbDocument_Type->Name = L"cmbDocument_Type";
			this->cmbDocument_Type->Size = System::Drawing::Size(130, 24);
			this->cmbDocument_Type->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label8->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label8->Location = System::Drawing::Point(447, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(355, 25);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Dirección: ";
			// 
			// txtOpEmail
			// 
			this->txtOpEmail->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->txtOpEmail->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtOpEmail->Location = System::Drawing::Point(447, 153);
			this->txtOpEmail->Name = L"txtOpEmail";
			this->txtOpEmail->Size = System::Drawing::Size(355, 25);
			this->txtOpEmail->TabIndex = 39;
			this->txtOpEmail->Text = L"Correo:";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label10->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label10->Location = System::Drawing::Point(613, 252);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 25);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Teléfono:";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label11->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label11->Location = System::Drawing::Point(27, 252);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(341, 25);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Fecha de nacimiento:";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label12->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label12->Location = System::Drawing::Point(27, 296);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(341, 25);
			this->label12->TabIndex = 42;
			this->label12->Text = L"Fecha de contrato:";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label13->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label13->Location = System::Drawing::Point(386, 299);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(203, 25);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Salario:";
			// 
			// dtpHireDate
			// 
			this->dtpHireDate->Location = System::Drawing::Point(174, 299);
			this->dtpHireDate->Name = L"dtpHireDate";
			this->dtpHireDate->Size = System::Drawing::Size(182, 22);
			this->dtpHireDate->TabIndex = 44;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(174, 255);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(182, 22);
			this->dtpBirthday->TabIndex = 45;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label14->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label14->Location = System::Drawing::Point(610, 301);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(192, 25);
			this->label14->TabIndex = 46;
			this->label14->Text = L"Horario:";
			// 
			// txtOpAddress
			// 
			this->txtOpAddress->Location = System::Drawing::Point(523, 104);
			this->txtOpAddress->Name = L"txtOpAddress";
			this->txtOpAddress->Size = System::Drawing::Size(270, 22);
			this->txtOpAddress->TabIndex = 47;
			// 
			// txtOpMail
			// 
			this->txtOpMail->Location = System::Drawing::Point(523, 153);
			this->txtOpMail->Name = L"txtOpMail";
			this->txtOpMail->Size = System::Drawing::Size(270, 22);
			this->txtOpMail->TabIndex = 48;
			// 
			// txtOpSalary
			// 
			this->txtOpSalary->Location = System::Drawing::Point(469, 301);
			this->txtOpSalary->Name = L"txtOpSalary";
			this->txtOpSalary->ReadOnly = true;
			this->txtOpSalary->Size = System::Drawing::Size(109, 22);
			this->txtOpSalary->TabIndex = 49;
			// 
			// txtOpSchedule
			// 
			this->txtOpSchedule->Location = System::Drawing::Point(671, 301);
			this->txtOpSchedule->Name = L"txtOpSchedule";
			this->txtOpSchedule->Size = System::Drawing::Size(122, 22);
			this->txtOpSchedule->TabIndex = 50;
			// 
			// groupBoxGender
			// 
			this->groupBoxGender->Controls->Add(this->rbtnMujer);
			this->groupBoxGender->Controls->Add(this->rbtnHombre);
			this->groupBoxGender->Location = System::Drawing::Point(389, 247);
			this->groupBoxGender->Name = L"groupBoxGender";
			this->groupBoxGender->Size = System::Drawing::Size(200, 30);
			this->groupBoxGender->TabIndex = 51;
			this->groupBoxGender->TabStop = false;
			// 
			// rbtnMujer
			// 
			this->rbtnMujer->AutoSize = true;
			this->rbtnMujer->Location = System::Drawing::Point(109, 8);
			this->rbtnMujer->Name = L"rbtnMujer";
			this->rbtnMujer->Size = System::Drawing::Size(61, 20);
			this->rbtnMujer->TabIndex = 55;
			this->rbtnMujer->TabStop = true;
			this->rbtnMujer->Text = L"Mujer";
			this->rbtnMujer->UseVisualStyleBackColor = true;
			// 
			// rbtnHombre
			// 
			this->rbtnHombre->AutoSize = true;
			this->rbtnHombre->Location = System::Drawing::Point(26, 8);
			this->rbtnHombre->Name = L"rbtnHombre";
			this->rbtnHombre->Size = System::Drawing::Size(77, 20);
			this->rbtnHombre->TabIndex = 54;
			this->rbtnHombre->TabStop = true;
			this->rbtnHombre->Text = L"Hombre";
			this->rbtnHombre->UseVisualStyleBackColor = true;
			// 
			// txtOpPhoneNumber
			// 
			this->txtOpPhoneNumber->Location = System::Drawing::Point(680, 252);
			this->txtOpPhoneNumber->Name = L"txtOpPhoneNumber";
			this->txtOpPhoneNumber->Size = System::Drawing::Size(122, 22);
			this->txtOpPhoneNumber->TabIndex = 52;
			// 
			// btnUploadPhoto
			// 
			this->btnUploadPhoto->Location = System::Drawing::Point(845, 340);
			this->btnUploadPhoto->Name = L"btnUploadPhoto";
			this->btnUploadPhoto->Size = System::Drawing::Size(236, 28);
			this->btnUploadPhoto->TabIndex = 53;
			this->btnUploadPhoto->Text = L"Subir foto";
			this->btnUploadPhoto->UseVisualStyleBackColor = true;
			this->btnUploadPhoto->Click += gcnew System::EventHandler(this, &OperatorRegistration::btnUploadPhoto_Click);
			// 
			// lblFullfilldata
			// 
			this->lblFullfilldata->AutoSize = true;
			this->lblFullfilldata->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullfilldata->ForeColor = System::Drawing::Color::Red;
			this->lblFullfilldata->Location = System::Drawing::Point(27, 76);
			this->lblFullfilldata->Name = L"lblFullfilldata";
			this->lblFullfilldata->Size = System::Drawing::Size(283, 16);
			this->lblFullfilldata->TabIndex = 54;
			this->lblFullfilldata->Text = L"*Tiene que completar todos los campos";
			this->lblFullfilldata->Visible = false;
			// 
			// OperatorRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1132, 458);
			this->Controls->Add(this->lblFullfilldata);
			this->Controls->Add(this->btnUploadPhoto);
			this->Controls->Add(this->txtOpPhoneNumber);
			this->Controls->Add(this->groupBoxGender);
			this->Controls->Add(this->txtOpSchedule);
			this->Controls->Add(this->txtOpSalary);
			this->Controls->Add(this->txtOpMail);
			this->Controls->Add(this->txtOpAddress);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->dtpHireDate);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtOpEmail);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cmbDocument_Type);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtOpPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSecurityUser);
			this->Controls->Add(this->txtOpDNI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtOpLastName);
			this->Controls->Add(this->txtOpName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSolicitarRegistro);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"OperatorRegistration";
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &OperatorRegistration::OperatorRegistration_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->groupBoxGender->ResumeLayout(false);
			this->groupBoxGender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		void FillDocTypesinCombo() {
			cmbDocument_Type->Items->Clear();
			List<Tuple<String^, String^>^>^  types = Controller::QueryDocument_Types();
			if (types!= nullptr) {
				for each (Tuple<String^, String^>^ par in types) {
					int index = Convert::ToInt32(par->Item1);
					cmbDocument_Type->Items->Add(gcnew ComboBoxItem(index, par->Item2));
				}

			}
		}
	private: System::Void btnSolicitarRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			txtOpSalary->Text = "1200";
			String^ OperatorName = txtOpName->Text->Trim();
			if (OperatorName->Length == 0) {
				MessageBox::Show("Debe ingresar su nombre.");
				return;
			}
			
			String^ OperatorLastName = txtOpLastName->Text->Trim();
			if (OperatorLastName->Length == 0) {
				MessageBox::Show("Debe ingresar su apellido.");
				return;
			}
			int index = cmbDocument_Type->SelectedIndex;
			if (cmbDocument_Type->SelectedIndex < 0) {
				MessageBox::Show("Debe seleccionar un tipo de documento");
				return;
			}
			String^ OperatorDNI = txtOpDNI->Text;
			if (OperatorDNI == "") {
				MessageBox::Show("Debe ingresar un número válido.");
				return;
			}
			if (txtOpAddress->Text->Trim() == "" || txtOpMail->Text->Trim() == "" || txtOpPhoneNumber->Text->Trim() == "") {
				lblFullfilldata->Visible = true;
				return;
			}
			
			String^ OperatorPassword = txtOpPassword->Text;
			String^ OperatorUser = txtSecurityUser->Text;
			SecurityOperator^ operador = gcnew SecurityOperator(OperatorName, OperatorLastName, OperatorDNI, OperatorPassword,false,false);
			operador->Address = txtOpAddress->Text;
			operador->Document_Type = Convert::ToString(index);
			operador->BirthDay = dtpBirthday->Value;
			operador->Gender = rbtnHombre->Checked ? "M" : "F";
			operador->Phone_Number = txtOpPhoneNumber->Text;
			operador->Salary = Convert::ToDouble(txtOpSalary->Text);
			operador->Schedule = txtOpSchedule->Text;
			operador->Hire_Date = dtpHireDate->Value;
			operador->Email = txtOpEmail->Text;

			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				operador->Photo = ms->ToArray();
			}

			int opId = Controller::AddOperatortoValidation(operador);
			if (opId > 0) {
				MessageBox::Show("Registrado correctamente \n Usuario: \t" + operador->UserName + "\n Contraseña:\t"+ operador->Password);
				ClearControls();
			}
			else {
				MessageBox::Show("No se ha podido registar su cuenta " + OperatorName);
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido registar su cuenta por el siguiente motivo:\n" +
				ex->Message);

		}
	}
	public:
		   String^ ReversePassword(String^ number) {
			   if (number->Length != 8) {
				   Console::WriteLine("El número debe tener exactamente 8 dígitos.");
				   return nullptr;
			   }

			   // Invertir el string manualmente
			   array<wchar_t>^ arr = number->ToCharArray();
			   Array::Reverse(arr);
			   return gcnew String(arr);
		   }
	public:
		void ClearControls() {
			for each(Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Image = nullptr;
					dynamic_cast<PictureBox^>(control)->Invalidate();
				}
				if (control->GetType() == RadioButton::typeid) {
					dynamic_cast<RadioButton^>(control)->Checked = false;
				}

			}
			cmbDocument_Type->SelectedIndex = -1; 

		}
	private: System::Void txtOpDNI_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ OperatorDNI = txtOpDNI->Text;
		String^ OperatorPassword = ReversePassword(OperatorDNI);
		txtOpPassword->Text = OperatorPassword;
		txtSecurityUser->Text = txtOpDNI->Text;
		txtSecurityUser->ReadOnly = true;
	}


	private: System::Void OperatorRegistration_Load(System::Object^ sender, System::EventArgs^ e) {
		FillDocTypesinCombo();
		txtOpSalary->Text = "1200";
	}

	private: System::Void btnUploadPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbPhoto->Image = gcnew Bitmap(ofd->FileName);
		}
	}
};

}
