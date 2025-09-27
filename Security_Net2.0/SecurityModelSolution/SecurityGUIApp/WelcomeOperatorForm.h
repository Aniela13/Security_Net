#pragma once

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SecurityModel;

	/// <summary>
	/// Resumen de SORegister
	/// </summary>
	public ref class WelcomeOperatorForm : public System::Windows::Forms::Form
	{
	public:
		Form^ refMainForm;
		WelcomeOperatorForm(Form^ form1)
		{
			refMainForm = form1;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WelcomeOperatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogInSecurity;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ txtSecurityPassword;
	private: System::Windows::Forms::TextBox^ txtSecurityUser;
	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeOperatorForm::typeid));
			this->btnLogInSecurity = (gcnew System::Windows::Forms::Button());
			this->txtSecurityPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtSecurityUser = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnLogInSecurity
			// 
			this->btnLogInSecurity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnLogInSecurity->Location = System::Drawing::Point(200, 372);
			this->btnLogInSecurity->Margin = System::Windows::Forms::Padding(200, 50, 50, 50);
			this->btnLogInSecurity->Name = L"btnLogInSecurity";
			this->btnLogInSecurity->Size = System::Drawing::Size(146, 56);
			this->btnLogInSecurity->TabIndex = 19;
			this->btnLogInSecurity->Text = L"INICIAR SESION";
			this->btnLogInSecurity->UseVisualStyleBackColor = true;
			this->btnLogInSecurity->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnLogInSecurity_Click);
			this->btnLogInSecurity->MouseEnter += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnLogInSecurity_MouseEnter);
			// 
			// txtSecurityPassword
			// 
			this->txtSecurityPassword->Location = System::Drawing::Point(399, 205);
			this->txtSecurityPassword->Margin = System::Windows::Forms::Padding(3, 20, 3, 2);
			this->txtSecurityPassword->Name = L"txtSecurityPassword";
			this->txtSecurityPassword->Size = System::Drawing::Size(100, 22);
			this->txtSecurityPassword->TabIndex = 18;
			this->txtSecurityPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WelcomeOperatorForm::txtSecurityPassword_KeyDown);
			// 
			// txtSecurityUser
			// 
			this->txtSecurityUser->Location = System::Drawing::Point(399, 150);
			this->txtSecurityUser->Margin = System::Windows::Forms::Padding(3, 150, 3, 2);
			this->txtSecurityUser->Name = L"txtSecurityUser";
			this->txtSecurityUser->Size = System::Drawing::Size(100, 22);
			this->txtSecurityUser->TabIndex = 17;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRegistrar->Location = System::Drawing::Point(446, 372);
			this->btnRegistrar->Margin = System::Windows::Forms::Padding(50, 50, 200, 50);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(146, 56);
			this->btnRegistrar->TabIndex = 16;
			this->btnRegistrar->Text = L"REGISTRAR";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &WelcomeOperatorForm::btnRegistrar_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(150, 205);
			this->label3->Margin = System::Windows::Forms::Padding(150, 20, 50, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Location = System::Drawing::Point(150, 150);
			this->label2->Margin = System::Windows::Forms::Padding(150, 150, 50, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Usuario:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnRegistrar, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnLogInSecurity, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtSecurityUser, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtSecurityPassword, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.83495F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 28.87029F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 32.42678F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(792, 478);
			this->tableLayoutPanel1->TabIndex = 20;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WelcomeOperatorForm::tableLayoutPanel1_Paint);
			// 
			// WelcomeOperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(792, 478);
			this->Controls->Add(this->tableLayoutPanel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"WelcomeOperatorForm";
			this->Text = L"WelcomeOperatorForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLogInSecurity_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void txtSecurityPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter)
			btnLogInSecurity->PerformClick();
	}
private: System::Void btnLogInSecurity_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnLogInSecurity->BackColor.CadetBlue; 

}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
