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
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaintainUser))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->historialDeAlarmasToolStripMenuItem,
					this->actualizarMapaToolStripMenuItem, this->verMapaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(924, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// historialDeAlarmasToolStripMenuItem
			// 
			this->historialDeAlarmasToolStripMenuItem->Name = L"historialDeAlarmasToolStripMenuItem";
			this->historialDeAlarmasToolStripMenuItem->Size = System::Drawing::Size(158, 24);
			this->historialDeAlarmasToolStripMenuItem->Text = L"Historial de Alarmas";
			// 
			// actualizarMapaToolStripMenuItem
			// 
			this->actualizarMapaToolStripMenuItem->Name = L"actualizarMapaToolStripMenuItem";
			this->actualizarMapaToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->actualizarMapaToolStripMenuItem->Text = L"Actualizar Mapa";
			// 
			// verMapaToolStripMenuItem
			// 
			this->verMapaToolStripMenuItem->Name = L"verMapaToolStripMenuItem";
			this->verMapaToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->verMapaToolStripMenuItem->Text = L"Ver Mapa";
			// 
			// dgvMaintainUser
			// 
			this->dgvMaintainUser->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvMaintainUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMaintainUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Username,
					this->nombre, this->Surname
			});
			this->dgvMaintainUser->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dgvMaintainUser->Location = System::Drawing::Point(97, 271);
			this->dgvMaintainUser->Name = L"dgvMaintainUser";
			this->dgvMaintainUser->RowHeadersWidth = 51;
			this->dgvMaintainUser->RowTemplate->Height = 24;
			this->dgvMaintainUser->Size = System::Drawing::Size(546, 238);
			this->dgvMaintainUser->TabIndex = 2;
			this->dgvMaintainUser->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintainUser::dgvMaintainUser_CellClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"Usuario";
			this->Username->MinimumWidth = 6;
			this->Username->Name = L"Username";
			this->Username->Width = 125;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->Width = 125;
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Apellido";
			this->Surname->MinimumWidth = 6;
			this->Surname->Name = L"Surname";
			this->Surname->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(245, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 34);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Mantenimiento de usuario";
			// 
			// NameUser
			// 
			this->NameUser->AutoSize = true;
			this->NameUser->Location = System::Drawing::Point(94, 142);
			this->NameUser->Name = L"NameUser";
			this->NameUser->Size = System::Drawing::Size(56, 16);
			this->NameUser->TabIndex = 4;
			this->NameUser->Text = L"Nombre";
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(94, 191);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(54, 16);
			this->Usuario->TabIndex = 5;
			this->Usuario->Text = L"Usuario";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(322, 230);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MaintainUser::btnSearch_Click);
			// 
			// btnDeleterUser
			// 
			this->btnDeleterUser->Location = System::Drawing::Point(693, 345);
			this->btnDeleterUser->Name = L"btnDeleterUser";
			this->btnDeleterUser->Size = System::Drawing::Size(120, 35);
			this->btnDeleterUser->TabIndex = 8;
			this->btnDeleterUser->Text = L"ELIMINAR";
			this->btnDeleterUser->UseVisualStyleBackColor = true;
			this->btnDeleterUser->Click += gcnew System::EventHandler(this, &MaintainUser::btnDeleterUser_Click);
			// 
			// btnValidateOp
			// 
			this->btnValidateOp->Enabled = false;
			this->btnValidateOp->Location = System::Drawing::Point(762, 50);
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
			this->txtName->Location = System::Drawing::Point(183, 139);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(214, 22);
			this->txtName->TabIndex = 10;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(180, 191);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(217, 22);
			this->txtUser->TabIndex = 11;
			// 
			// MaintainUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(924, 542);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnValidateOp);
			this->Controls->Add(this->btnDeleterUser);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->NameUser);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvMaintainUser);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MaintainUser";
			this->Text = L"MaintainUser";
			this->Load += gcnew System::EventHandler(this, &MaintainUser::MaintainUser_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaintainUser))->EndInit();
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
	}
	public:
		void ShowListaOperadores(){
			List<SecurityOperator^>^ allops = Controller::QueryAllUsers();
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

		for (int i = 0; i < dgvMaintainUser->Rows->Count; i++) {
			DataGridViewRow^ fila = dgvMaintainUser->Rows[i];

			// Evita la fila nueva vacía
			if (fila->IsNewRow) continue;

			String^ valorNombre = fila->Cells["Nombre"]->Value != nullptr ? fila->Cells["Nombre"]->Value->ToString()->ToLower() : "";
			String^ valorUsuario = fila->Cells["Usuario"]->Value != nullptr ? fila->Cells["Usuario"]->Value->ToString()->ToLower() : "";

			bool visible = true;

			if (!String::IsNullOrEmpty(filtroNombre) && !valorNombre->Contains(filtroNombre))
				visible = false;

			if (!String::IsNullOrEmpty(filtroUsuario) && !valorUsuario->Contains(filtroUsuario))
				visible = false;

			fila->Visible = visible;
		}
	}
    private: System::Void dgvMaintainUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ username = dgvMaintainUser->Rows[dgvMaintainUser->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		SecurityOperator^ op = Controller::QueryUserbyUsername(username);
		txtUser->Text = op->DNI;
		txtName->Text = op->Name;
		ShowListaOperadores();
    }

	private: System::Void MaintainUser_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowListaOperadores();
	}

	private: System::Void btnDeleterUser_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUser->Text->Trim();
		if (username->Equals("")) {
			MessageBox::Show("Debe seleccionar un operador");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar al operador?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				SecurityOperator^ op = Controller::QueryUserbyUsername(username);

				if (Controller::DeleteUser(op) == 1) {
					ClearControls();
					MessageBox::Show("Se ha eliminado al operador" + op->Name +" de seguridad de manera exitosa.");
				}
				else {
					MessageBox::Show("No se ha podido modificar al operador de seguridad " + op->Name);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar al operador de seguridad por el siguiente motivo:\n" +
				ex->Message);
		}
	}
};
}
