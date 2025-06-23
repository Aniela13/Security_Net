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
	/// Resumen de AsignZonesForm
	/// </summary>
	public ref class AsignZonesForm : public System::Windows::Forms::Form
	{
	public:
		AsignZonesForm(void)
		{
			InitializeComponent();
			puntosRuta = gcnew List<Drawing::Point>();
			/// <summary>
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		List<Drawing::Point>^ puntosRuta;
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AsignZonesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvZonesRoute;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZonesColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoordenadasColumn;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnAddZone;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnAsignRoute;

	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Button^ btnNewRoute;
	private: System::Windows::Forms::PictureBox^ pbMapRoutes;


	private: System::Windows::Forms::ComboBox^ cmbNameZone;
	private: System::Windows::Forms::Label^ lblid;
	private: System::Windows::Forms::TextBox^ txtId;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AsignZonesForm::typeid));
			this->dgvZonesRoute = (gcnew System::Windows::Forms::DataGridView());
			this->ZonesColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoordenadasColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddZone = (gcnew System::Windows::Forms::Button());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnAsignRoute = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->btnNewRoute = (gcnew System::Windows::Forms::Button());
			this->pbMapRoutes = (gcnew System::Windows::Forms::PictureBox());
			this->cmbNameZone = (gcnew System::Windows::Forms::ComboBox());
			this->lblid = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesRoute))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMapRoutes))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvZonesRoute
			// 
			this->dgvZonesRoute->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvZonesRoute->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ZonesColumn,
					this->CoordenadasColumn
			});
			this->dgvZonesRoute->Location = System::Drawing::Point(657, 284);
			this->dgvZonesRoute->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvZonesRoute->Name = L"dgvZonesRoute";
			this->dgvZonesRoute->ReadOnly = true;
			this->dgvZonesRoute->RowHeadersWidth = 51;
			this->dgvZonesRoute->RowTemplate->Height = 24;
			this->dgvZonesRoute->Size = System::Drawing::Size(326, 593);
			this->dgvZonesRoute->TabIndex = 10;
			this->dgvZonesRoute->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AsignZonesForm::dgvZonesRoute_CellClick);
			// 
			// ZonesColumn
			// 
			this->ZonesColumn->HeaderText = L"ZONAS";
			this->ZonesColumn->MinimumWidth = 6;
			this->ZonesColumn->Name = L"ZonesColumn";
			this->ZonesColumn->ReadOnly = true;
			this->ZonesColumn->Width = 125;
			// 
			// CoordenadasColumn
			// 
			this->CoordenadasColumn->HeaderText = L"COORDENADAS";
			this->CoordenadasColumn->MinimumWidth = 6;
			this->CoordenadasColumn->Name = L"CoordenadasColumn";
			this->CoordenadasColumn->ReadOnly = true;
			this->CoordenadasColumn->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(198, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(598, 32);
			this->label1->TabIndex = 29;
			this->label1->Text = L"¿Qué zonas de inspeccion desea asignar\? ";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(448, 189);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(111, 42);
			this->btnDelete->TabIndex = 39;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AsignZonesForm::btnDelete_Click);
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(448, 137);
			this->btnAddZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(111, 37);
			this->btnAddZone->TabIndex = 37;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			this->btnAddZone->Click += gcnew System::EventHandler(this, &AsignZonesForm::btnAddZone_Click);
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(215, 212);
			this->txtPointY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->ReadOnly = true;
			this->txtPointY->Size = System::Drawing::Size(133, 22);
			this->txtPointY->TabIndex = 36;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(215, 176);
			this->txtPointX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->ReadOnly = true;
			this->txtPointX->Size = System::Drawing::Size(133, 22);
			this->txtPointX->TabIndex = 35;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(86, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Coordenada X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Nombre Zona: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(74, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 18);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Asignar manualmente";
			// 
			// btnAsignRoute
			// 
			this->btnAsignRoute->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnAsignRoute->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAsignRoute->Location = System::Drawing::Point(657, 890);
			this->btnAsignRoute->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAsignRoute->Name = L"btnAsignRoute";
			this->btnAsignRoute->Size = System::Drawing::Size(326, 54);
			this->btnAsignRoute->TabIndex = 41;
			this->btnAsignRoute->Text = L"EMPEZAR INSPECCION";
			this->btnAsignRoute->UseVisualStyleBackColor = false;
			this->btnAsignRoute->Click += gcnew System::EventHandler(this, &AsignZonesForm::btnAsignRoute_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(1013, 939);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 42;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// btnNewRoute
			// 
			this->btnNewRoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewRoute->ForeColor = System::Drawing::Color::Blue;
			this->btnNewRoute->Location = System::Drawing::Point(657, 949);
			this->btnNewRoute->Name = L"btnNewRoute";
			this->btnNewRoute->Size = System::Drawing::Size(152, 48);
			this->btnNewRoute->TabIndex = 43;
			this->btnNewRoute->Text = L"NUEVA RUTA";
			this->btnNewRoute->UseVisualStyleBackColor = true;
			this->btnNewRoute->Click += gcnew System::EventHandler(this, &AsignZonesForm::btnNewRoute_Click);
			// 
			// pbMapRoutes
			// 
			this->pbMapRoutes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMapRoutes.Image")));
			this->pbMapRoutes->Location = System::Drawing::Point(77, 284);
			this->pbMapRoutes->Name = L"pbMapRoutes";
			this->pbMapRoutes->Size = System::Drawing::Size(482, 684);
			this->pbMapRoutes->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbMapRoutes->TabIndex = 44;
			this->pbMapRoutes->TabStop = false;
			this->pbMapRoutes->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AsignZonesForm::pbMapRoutes_Paint);
			// 
			// cmbNameZone
			// 
			this->cmbNameZone->FormattingEnabled = true;
			this->cmbNameZone->Location = System::Drawing::Point(215, 141);
			this->cmbNameZone->Name = L"cmbNameZone";
			this->cmbNameZone->Size = System::Drawing::Size(200, 24);
			this->cmbNameZone->TabIndex = 45;
			this->cmbNameZone->SelectedIndexChanged += gcnew System::EventHandler(this, &AsignZonesForm::cmbNameZone_SelectedIndexChanged);
			// 
			// lblid
			// 
			this->lblid->AutoSize = true;
			this->lblid->Location = System::Drawing::Point(161, 109);
			this->lblid->Name = L"lblid";
			this->lblid->Size = System::Drawing::Size(21, 16);
			this->lblid->TabIndex = 46;
			this->lblid->Text = L"Id:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(215, 106);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(75, 22);
			this->txtId->TabIndex = 47;
			// 
			// AsignZonesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1162, 1009);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblid);
			this->Controls->Add(this->cmbNameZone);
			this->Controls->Add(this->pbMapRoutes);
			this->Controls->Add(this->btnNewRoute);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnAsignRoute);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAddZone);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvZonesRoute);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AsignZonesForm";
			this->Text = L"AsignZonesForm";
			this->Load += gcnew System::EventHandler(this, &AsignZonesForm::AsignZonesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesRoute))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMapRoutes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void FillZonesInComboBox() {
			cmbNameZone->Items->Clear();
			Dictionary<String^, SecurityModel::Point^>^ zones = Controller::QueryAllZones();
			if (zones!= nullptr) {
				int index = 0;
				for each (KeyValuePair<String^, SecurityModel::Point^> zona in zones) {
					cmbNameZone->Items->Add(gcnew ComboBoxItem(index++, zona.Key));
				}
			
			}
		}

	public: 
		bool VerifyIteminGrid(String^ namezone) {
			for each (DataGridViewRow ^ fila in dgvZonesRoute->Rows) {
				if (fila->Cells[0]->Value != nullptr &&
					fila->Cells[0]->Value->ToString()->Equals(namezone)) {
					return true;
				}
			}
			return false;

		}
	public:
		int DeleteZoneinGrid(String^ namezone) {
			for (int i = 0; i < dgvZonesRoute->Rows->Count; i++) {
				if (dgvZonesRoute->Rows[i]->IsNewRow) continue; // evitar fila vacía al final

				if (dgvZonesRoute->Rows[i]->Cells[0]->Value != nullptr &&
					dgvZonesRoute->Rows[i]->Cells[0]->Value->ToString()->Equals(namezone)) {
					dgvZonesRoute->Rows->RemoveAt(i);
					return 1; 
				}
			}
			return 0; // No encontrado
		}
	public: 
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == ComboBox::typeid) {
					dynamic_cast<ComboBox^>(control)->SelectedIndex = -1;
				}
			}
		}
	public:
		SecurityModel::Point^ pointbottomright = gcnew SecurityModel::Point(-77.07797, -12.07356);
		SecurityModel::Point^ pointtopleft = gcnew SecurityModel::Point(-77.08229, -12.06464);

	public:

		Drawing::Point^ GeoToPixel(double lat, double lon, int imgWidth, int imgHeight) {
			double x = ((lon - pointtopleft->X) / (pointbottomright->X - pointtopleft->X)) * imgWidth;
			double y = ((pointtopleft->Y - lat) / (pointtopleft->Y - pointbottomright->Y)) * imgHeight;
			return gcnew Drawing::Point((int)Math::Round(x), (int)Math::Round(y));
		}

	private: System::Void cmbNameZone_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBoxItem^ itemSeleccionado = dynamic_cast<ComboBoxItem^>(cmbNameZone->SelectedItem);
		if (itemSeleccionado != nullptr) {
			// Supongamos que en tu Dictionary tienes acceso a las coordenadas con la clave
			Dictionary<String^, SecurityModel::Point^>^ zonas = Controller::QueryAllZones();
			if (zonas != nullptr) {
				SecurityModel::Point^ coordenada = Controller::QueryZonebyName(itemSeleccionado->Name);
				txtPointX->Text = Convert::ToString(coordenada->X);
				txtPointY->Text = Convert::ToString(coordenada->Y);
			}
		}
		else {
			txtPointX->Text = "";
			txtPointY->Text = "";
		}
	}
	private: System::Void pbMapRoutes_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		for each(Drawing::Point p in puntosRuta) {
			g->FillEllipse(Brushes::Red, p.X - 3, p.Y - 3, 6, 6); // Círculo de radio 3 px
		}
	}
	private: System::Void btnAddZone_Click(System::Object^ sender, System::EventArgs^ e) {
		int selectedIndex = cmbNameZone->SelectedIndex;
		if (selectedIndex < 0) {
			MessageBox::Show("Se debe seleccionar una zona");
			return;
		}
		else {
			ComboBoxItem^ itemSeleccionado = dynamic_cast<ComboBoxItem^>(cmbNameZone->SelectedItem);
			String^ coordenadas = String::Format("({0:F4}, {1:F4})", txtPointX->Text, txtPointY->Text);
			dgvZonesRoute->Rows->Add(gcnew array<String^> {itemSeleccionado->Name, coordenadas});
			SecurityModel::Point^ coord = Controller::QueryZonebyName(itemSeleccionado->Name);
			double latp = coord->Y; 
			double longp = coord->X;
			Drawing::Point^ punto = GeoToPixel( latp, longp, pbMapRoutes->Width, pbMapRoutes->Height);
			puntosRuta->Add(*punto);
			pbMapRoutes->Invalidate(); // Forzar redibujado

		}
		ClearControls();
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		ComboBoxItem^ itemSeleccionado = dynamic_cast<ComboBoxItem^>(cmbNameZone->SelectedItem);
		String^ namezone = itemSeleccionado->Name;
		if (itemSeleccionado == nullptr) {
			MessageBox::Show("Se debe seleccionar una zona del grid");
			return;
		}
		if (VerifyIteminGrid(namezone) == false) {
			MessageBox::Show("La zona no está registrada en la ruta");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar la zona?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				if (DeleteZoneinGrid(namezone) == 1) {
					MessageBox::Show("Se ha eliminado la zona " + namezone + "de manera exitosa.");
					SecurityModel::Point^ punto = Controller::QueryZonebyName(namezone);
					Drawing::Point^ pixel = GeoToPixel(punto->Y, punto->X, pbMapRoutes->Width, pbMapRoutes->Height);
					Drawing::Point puntor = *pixel;
					for (int i = 0; i < puntosRuta->Count; i++) {
						if (puntosRuta[i].X ==puntor.X && puntosRuta[i].Y ==puntor.Y) {
							puntosRuta->RemoveAt(i);
							pbMapRoutes->Invalidate();
							break;
						}
					}
					return;
				}
			}
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar la zona por el siguiente motivo:\n" +
				ex->Message);
		}
		
	}
	private: System::Void dgvZonesRoute_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ namezone = dgvZonesRoute->Rows[dgvZonesRoute->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		SecurityModel::Point^ coordenada = Controller::QueryZonebyName(namezone);
		txtPointX->Text = Convert::ToString(coordenada->X);
		txtPointY->Text = Convert::ToString(coordenada->Y);
		for (int i = 0; i < cmbNameZone->Items->Count; i++) {
			if (((ComboBoxItem^)cmbNameZone->Items[i])->Name == namezone) {
				cmbNameZone->SelectedIndex = i;
				break;
			}
		}
	}
	private: System::Void btnAsignRoute_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (dgvZonesRoute->RowCount>1) {
				MessageBox::Show("Debe añadir por lo menos una zona");
				return;
			}
		    Route^ ruta = gcnew Route();
			ruta->Id = Convert::ToInt32(txtId->Text);
			ruta->Date = DateTime::Now.ToString();
			ruta->Status = "No definido";
			ruta->RouteZones = gcnew List<Tuple<String^, SecurityModel::Point^>^>();
			for (int i = 0; i < dgvZonesRoute->RowCount; i++) {
				String^ namezone = dgvZonesRoute->Rows[i]->Cells[0]->Value->ToString();
				SecurityModel::Point^ coordenada = Controller::QueryZonebyName(namezone);
				Tuple<String^, SecurityModel::Point^>^ zone = gcnew Tuple<String^, SecurityModel::Point^>(namezone, coordenada);
				ruta->RouteZones->Add(zone);
			}
			if (Controller::AddRoute(ruta) == 1) {
				MessageBox::Show("Se ha asignado la ruta correctamente");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}
	
	private: System::Void AsignZonesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillZonesInComboBox();
		dgvZonesRoute->Rows->Clear();
		txtId->Text = "" + (Controller::GetLastRouteId() + 1);
		//puntosRuta->Clear(); // borra todos los puntos 
		//pbMapRoutes->Invalidate();

	}


	private: System::Void btnNewRoute_Click(System::Object^ sender, System::EventArgs^ e) {


	}

};
}
