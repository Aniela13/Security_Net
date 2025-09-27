#pragma once
#include "ValidateOpForm.h"

namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SecurityModel;
	using namespace SecurityController;
	/// <summary>
	/// Resumen de MaintainUser
	/// </summary>
	public ref class MaintainUser : public System::Windows::Forms::Form
	{
	public:
		MaintainUser(void)
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
		~MaintainUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeAlarmasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarMapaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verMapaToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvMaintainUser;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NameUser;

	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::Button^ btnSearch;

	private: System::Windows::Forms::Button^ btnDeleterUser;
	private: System::Windows::Forms::Button^ btnValidateOp;






	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::Button^ btnClearSearch;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MaintainUser::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->historialDeAlarmasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarMapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verMapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvMaintainUser = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameUser = (gcnew System::Windows::Forms::Label());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDeleterUser = (gcnew System::Windows::Forms::Button());
			this->btnValidateOp = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->btnClearSearch = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaintainUser))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->historialDeAlarmasToolStripMenuItem,
					this->actualizarMapaToolStripMenuItem, this->verMapaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(924, 34);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// historialDeAlarmasToolStripMenuItem
			// 
			this->historialDeAlarmasToolStripMenuItem->Name = L"historialDeAlarmasToolStripMenuItem";
			this->historialDeAlarmasToolStripMenuItem->Size = System::Drawing::Size(178, 30);
			this->historialDeAlarmasToolStripMenuItem->Text = L"Historial de Alarmas";
			// 
			// actualizarMapaToolStripMenuItem
			// 
			this->actualizarMapaToolStripMenuItem->Name = L"actualizarMapaToolStripMenuItem";
			this->actualizarMapaToolStripMenuItem->Size = System::Drawing::Size(149, 30);
			this->actualizarMapaToolStripMenuItem->Text = L"Actualizar Mapa";
			// 
			// verMapaToolStripMenuItem
			// 
			this->verMapaToolStripMenuItem->Name = L"verMapaToolStripMenuItem";
			this->verMapaToolStripMenuItem->Size = System::Drawing::Size(99, 30);
			this->verMapaToolStripMenuItem->Text = L"Ver Mapa";
			// 
			// dgvMaintainUser
			// 
			this->dgvMaintainUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvMaintainUser->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvMaintainUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMaintainUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Username,
					this->nombre, this->Surname
			});
			this->dgvMaintainUser->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dgvMaintainUser->Location = System::Drawing::Point(50, 5);
			this->dgvMaintainUser->Margin = System::Windows::Forms::Padding(50, 5, 20, 50);
			this->dgvMaintainUser->Name = L"dgvMaintainUser";
			this->dgvMaintainUser->ReadOnly = true;
			this->dgvMaintainUser->RowHeadersWidth = 51;
			this->dgvMaintainUser->RowTemplate->Height = 24;
			this->dgvMaintainUser->Size = System::Drawing::Size(497, 225);
			this->dgvMaintainUser->TabIndex = 2;
			this->dgvMaintainUser->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintainUser::dgvMaintainUser_CellClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"Usuario";
			this->Username->MinimumWidth = 6;
			this->Username->Name = L"Username";
			this->Username->ReadOnly = true;
			this->Username->Width = 125;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->ReadOnly = true;
			this->nombre->Width = 125;
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Apellido";
			this->Surname->MinimumWidth = 6;
			this->Surname->Name = L"Surname";
			this->Surname->ReadOnly = true;
			this->Surname->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->label1, 3);
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 39);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Mantenimiento de usuario";
			// 
			// NameUser
			// 
			this->NameUser->AutoSize = true;
			this->NameUser->Location = System::Drawing::Point(3, 54);
			this->NameUser->Name = L"NameUser";
			this->NameUser->Size = System::Drawing::Size(56, 16);
			this->NameUser->TabIndex = 4;
			this->NameUser->Text = L"Nombre";
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(3, 100);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(54, 16);
			this->Usuario->TabIndex = 5;
			this->Usuario->Text = L"Usuario";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(120, 147);
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(125, 36);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MaintainUser::btnSearch_Click);
			// 
			// btnDeleterUser
			// 
			this->btnDeleterUser->Location = System::Drawing::Point(597, 20);
			this->btnDeleterUser->Margin = System::Windows::Forms::Padding(30, 20, 20, 20);
			this->btnDeleterUser->Name = L"btnDeleterUser";
			this->btnDeleterUser->Size = System::Drawing::Size(109, 34);
			this->btnDeleterUser->TabIndex = 8;
			this->btnDeleterUser->Text = L"ELIMINAR";
			this->btnDeleterUser->UseVisualStyleBackColor = true;
			this->btnDeleterUser->Click += gcnew System::EventHandler(this, &MaintainUser::btnDeleterUser_Click);
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->Enabled = false;
			this->btnValidateOp->Location = System::Drawing::Point(762, 30);
			this->btnValidateOp->Margin = System::Windows::Forms::Padding(30, 30, 3, 2);
			this->btnValidateOp->Name = L"btnValidateOp";
			this->btnValidateOp->Size = System::Drawing::Size(127, 78);
			this->btnValidateOp->TabIndex = 9;
			this->btnValidateOp->Text = L"APROBAR\r\nOPERADOR";
			this->btnValidateOp->UseVisualStyleBackColor = true;
			this->btnValidateOp->Visible = false;
			this->btnValidateOp->Click += gcnew System::EventHandler(this, &MaintainUser::btnValidateOp_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(120, 56);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(215, 22);
			this->txtName->TabIndex = 10;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(120, 102);
			this->txtUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(217, 22);
			this->txtUser->TabIndex = 11;
			// 
			// btnClearSearch
			// 
			this->btnClearSearch->Location = System::Drawing::Point(517, 148);
			this->btnClearSearch->Name = L"btnClearSearch";
			this->btnClearSearch->Size = System::Drawing::Size(154, 35);
			this->btnClearSearch->TabIndex = 12;
			this->btnClearSearch->Text = L"Limpiar búsqueda";
			this->btnClearSearch->UseVisualStyleBackColor = true;
			this->btnClearSearch->Visible = false;
			this->btnClearSearch->Click += gcnew System::EventHandler(this, &MaintainUser::btnClearSearch_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.22078F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.77922F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnValidateOp, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 34);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 43.83562F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 56.16438F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(924, 508);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				22.83737F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				77.16263F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				164)));
			this->tableLayoutPanel2->Controls->Add(this->NameUser, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnClearSearch, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->txtName, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnSearch, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->txtUser, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->Usuario, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(50, 3);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(50, 3, 3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.78788F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.21212F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(679, 216);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				78.09917F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				21.90083F)));
			this->tableLayoutPanel3->Controls->Add(this->dgvMaintainUser, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->btnDeleterUser, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 225);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(726, 280);
			this->tableLayoutPanel3->TabIndex = 14;
			// 
			// MaintainUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(924, 542);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MaintainUser";
			this->Text = L"MaintainUser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MaintainUser::MaintainUser_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaintainUser))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValidateOp_Click(System::Object^ sender, System::EventArgs^ e) {
		List<SecurityOperator^>^ lista= Controller::QueryAllNoRegisteredOperators();
		if ( lista != nullptr) {
			this->btnValidateOp->Visible = true;
			this->btnValidateOp->Enabled = true;
			this->btnValidateOp->BackColor = System::Drawing::Color::Green;
			ValidateOpForm^ validateOpForm = gcnew ValidateOpForm();
			this->Hide();
			validateOpForm->Show();

		}
		else {
			this->btnValidateOp->BackColor = System::Drawing::Color::White;
			this->btnValidateOp->Enabled = false;
		}
	}
	public:
		void ShowListaOperadores(){
			List<SecurityOperator^>^ allops = Controller::QueryAllOperators();
			if (allops != nullptr) {
				dgvMaintainUser->Rows->Clear();
				for (int i = 0; i < allops->Count; i++) {
					dgvMaintainUser->Rows->Add(gcnew array<String^> {allops[i]->UserName, 
						allops[i]->Name, 
						allops[i]->LastName});
				}

			}
		}
	public:
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
    private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filtroNombre = txtName->Text->ToLower();
		String^ filtroUsuario = txtUser->Text->ToLower();
	
		if (filtroUsuario->Equals("")) {
			MessageBox::Show("Debe seleccionar un operador en la tabla");
			return;
		}
		else {
			SecurityOperator^ op = Controller::QueryOperatorByDNI(filtroUsuario);
			if (op != nullptr && filtroNombre == op->Name) {
				dgvMaintainUser->Rows->Clear();
				dgvMaintainUser->Rows->Add(gcnew array<String^> {op->UserName, op->Name, op->LastName});
				btnClearSearch->Visible = true;
				btnClearSearch->Enabled = true;
				
			}
			else {
				MessageBox::Show("No existe un operador con el usuario y/o nombre ingresado");
				ClearControls();
				ShowListaOperadores();
				return;

			}
		}
		
	}
    private: System::Void dgvMaintainUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ dni = dgvMaintainUser->Rows[dgvMaintainUser->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		SecurityOperator^ op = Controller::QueryOperatorByDNI(dni);
		txtUser->Text = op->DNI;
		txtName->Text = op->Name;
		ShowListaOperadores();
    }

	private: System::Void MaintainUser_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowListaOperadores();
		btnClearSearch->Enabled = false;
	}

	private: System::Void btnDeleterUser_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUser->Text->Trim();
		if (username->Equals("")) {
			MessageBox::Show("Debe seleccionar un operador en la tabla");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar al operador?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				SecurityOperator^ op = Controller::QueryOperatorByDNI(username);
				op->Status = "U";
				if (Controller::DeleteUser(op) == 1) {
					ClearControls();
					MessageBox::Show("Se ha eliminado al operador" + op->Name +" de seguridad de manera exitosa.");
					ShowListaOperadores();
				}
				else {
					MessageBox::Show("No se ha podido eliminar al operador de seguridad " + op->Name);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar al operador de seguridad por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void btnClearSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls(); 
		ShowListaOperadores();
		btnClearSearch->Visible = false;
	}
};
}
