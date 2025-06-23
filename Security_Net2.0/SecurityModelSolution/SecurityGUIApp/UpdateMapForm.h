#pragma once
#include "NewMapForm.h"
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
	/// Resumen de UpdateMapForm
	/// </summary>
	public ref class UpdateMapForm : public System::Windows::Forms::Form
	{
	public:
		UpdateMapForm(void)
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
		~UpdateMapForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbMap;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::DataGridView^ dgvZonesPositions;


	private: System::Windows::Forms::Button^ btnAddZone;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnShow;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNameZone;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZonesColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoordenadasColumn;
	private: System::Windows::Forms::Label^ lblcoordenadas;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateMapForm::typeid));
			this->pbMap = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvZonesPositions = (gcnew System::Windows::Forms::DataGridView());
			this->ZonesColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoordenadasColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddZone = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNameZone = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->lblcoordenadas = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->BeginInit();
			this->SuspendLayout();
			// 
			// pbMap
			// 
			this->pbMap->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMap.Image")));
			this->pbMap->Location = System::Drawing::Point(48, 81);
			this->pbMap->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbMap->Name = L"pbMap";
			this->pbMap->Size = System::Drawing::Size(503, 710);
			this->pbMap->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbMap->TabIndex = 0;
			this->pbMap->TabStop = false;
			this->pbMap->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateMapForm::pbMap_MouseClick);
			this->pbMap->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateMapForm::pbMap_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(343, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Actualización de mapa";
			// 
			// dgvZonesPositions
			// 
			this->dgvZonesPositions->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvZonesPositions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvZonesPositions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ZonesColumn,
					this->CoordenadasColumn
			});
			this->dgvZonesPositions->Location = System::Drawing::Point(600, 196);
			this->dgvZonesPositions->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvZonesPositions->Name = L"dgvZonesPositions";
			this->dgvZonesPositions->RowHeadersWidth = 51;
			this->dgvZonesPositions->RowTemplate->Height = 24;
			this->dgvZonesPositions->Size = System::Drawing::Size(416, 559);
			this->dgvZonesPositions->TabIndex = 9;
			this->dgvZonesPositions->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateMapForm::dgvZonesPositions_CellClick);
			// 
			// ZonesColumn
			// 
			this->ZonesColumn->HeaderText = L"ZONAS";
			this->ZonesColumn->MinimumWidth = 6;
			this->ZonesColumn->Name = L"ZonesColumn";
			this->ZonesColumn->Width = 150;
			// 
			// CoordenadasColumn
			// 
			this->CoordenadasColumn->HeaderText = L"COORDENADAS";
			this->CoordenadasColumn->MinimumWidth = 6;
			this->CoordenadasColumn->Name = L"CoordenadasColumn";
			this->CoordenadasColumn->Width = 200;
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(447, 827);
			this->btnAddZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(91, 37);
			this->btnAddZone->TabIndex = 10;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			this->btnAddZone->Click += gcnew System::EventHandler(this, &UpdateMapForm::btnAddZone_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(447, 880);
			this->btnModify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(91, 41);
			this->btnModify->TabIndex = 11;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(447, 937);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(91, 42);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(600, 844);
			this->btnShow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(131, 52);
			this->btnShow->TabIndex = 14;
			this->btnShow->Text = L"Actualizar mapa";
			this->btnShow->UseVisualStyleBackColor = true;
			this->btnShow->Click += gcnew System::EventHandler(this, &UpdateMapForm::btnShow_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(893, 924);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 848);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre Zona: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 880);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Coordenada X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 919);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Coordenada Y:";
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(173, 848);
			this->txtNameZone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(179, 22);
			this->txtNameZone->TabIndex = 6;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(173, 880);
			this->txtPointX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->ReadOnly = true;
			this->txtPointX->Size = System::Drawing::Size(145, 22);
			this->txtPointX->TabIndex = 7;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(173, 916);
			this->txtPointY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->ReadOnly = true;
			this->txtPointY->Size = System::Drawing::Size(145, 22);
			this->txtPointY->TabIndex = 8;
			// 
			// lblcoordenadas
			// 
			this->lblcoordenadas->AutoSize = true;
			this->lblcoordenadas->Location = System::Drawing::Point(45, 62);
			this->lblcoordenadas->Name = L"lblcoordenadas";
			this->lblcoordenadas->Size = System::Drawing::Size(0, 16);
			this->lblcoordenadas->TabIndex = 38;
			// 
			// UpdateMapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 999);
			this->Controls->Add(this->lblcoordenadas);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->btnShow);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnAddZone);
			this->Controls->Add(this->dgvZonesPositions);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->txtNameZone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbMap);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateMapForm";
			this->Text = L"UpdateMapForm";
			this->Load += gcnew System::EventHandler(this, &UpdateMapForm::UpdateMapForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateMapForm::pbMap_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateMapForm::pbMap_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
	public:
		void ShowZones() {
			Dictionary<String^, SecurityModel::Point^>^ zones = Controller::QueryAllZones();
			if (zones != nullptr) {
				dgvZonesPositions->Rows->Clear();
				for each (KeyValuePair<String^, SecurityModel::Point^> ^ zona in zones) {
					String^ nombre = zona->Key;
					SecurityModel::Point^ coord = zona->Value;
					String^ coordenadasTexto = String::Format("({0:F4}, {1:F4})", coord->X, coord->Y);
					dgvZonesPositions->Rows->Add(gcnew array<String^> {nombre, coordenadasTexto});

				}
			}
		}

	public:
		//y es latitud e x es longitud 
		double latTopLeft = -12.06464, lonTopLeft = -77.08229;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.07356, lonBottomRight = -77.07797; // Coordenadas de la esquina inferior derecha
		SecurityModel::Point^ pointbottomright = gcnew SecurityModel::Point(lonBottomRight, latBottomRight);
		SecurityModel::Point^ pointtopleft = gcnew SecurityModel::Point(lonTopLeft, latTopLeft);
	public:
		SecurityModel::Point^ PixelToGeo(int x, int y, int imgWidth, int imgHeight)
		{
			double lon = pointtopleft->X + ((double)x / imgWidth) * (pointbottomright->X - pointtopleft->X);
			double lat = pointtopleft->Y - ((double)y / imgHeight) * (pointbottomright->Y - pointtopleft->Y);
			return gcnew SecurityModel::Point(lon, lat);
		}

	public:

		Drawing::Point^ GeoToPixel(double lat, double lon, int imgWidth, int imgHeight) {
			//double x = (lon - lon_left) / (lon_right - lon_left) * imgWidth;
			//double y = (lat_top - lat) / (lat_top - lat_bottom) * imgHeight;
			//return Point((int)x, (int)y);
			return nullptr;
		}


	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {
		NewMapForm^ map = gcnew NewMapForm();
		map->MdiParent = this;
		map->Show();
	}
		   /*private: System::Void btnGoBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
			   MainForm^ form = gcnew MainForm();
			   this->Hide();
			   form->Show();

		   }
		   */

	private: System::Void pbMap_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int x = e->X;
		int y = e->Y;

		SecurityModel::Point^ coordenadas = PixelToGeo(x, y, pbMap->Width, pbMap->Height);
		double lat = coordenadas->Y;
		double lon = coordenadas->X;

		// Mostrar coordenadas en los textbox
		lblcoordenadas->Text = "Lat: " + Convert::ToString(lat) + " | Lon: " + Convert::ToString(lon);

	}

	private: System::Void btnAddZone_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ punto1 = txtPointX->Text->Trim();
		String^ punto2 = txtPointY->Text->Trim();
		String^ Name = txtNameZone->Text->Trim();
		if (punto1->Equals("") || punto2->Equals("")) {
			MessageBox::Show("Debe seleccionar un punto en el mapa");
			return;
		}
		if (Name->Equals("")) {
			MessageBox::Show("Debe determinar el nombre de la zona");
			return;
		}

		try {

			String^ NameZone = Name;
			Double coordenadax = Convert::ToDouble(txtPointX->Text);
			Double coordenaday = Convert::ToDouble(txtPointY->Text);
			SecurityModel::Point^ ZonePoint = gcnew SecurityModel::Point(coordenadax, coordenaday);
			if (Controller::AddZoneMap(NameZone, ZonePoint) == 1) {
				MessageBox::Show("Se ha agregado una nueva zona");
				ShowZones();
				ClearControls();
				return;
			}
	

		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la zona al mapa por el siguiente motivo:\n" +
				ex->Message);
		}



	}
	private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NameZone = txtNameZone->Text->Trim();
		String^ punto1 = txtPointX->Text->Trim();
		String^ punto2 = txtPointY->Text->Trim();
		if (NameZone->Equals("")) {
			MessageBox::Show("Debe determinar el nombre de la zona");
			return;
		}
		if (punto1->Equals("") || punto2->Equals("")) {
			MessageBox::Show("Debe seleccionar un punto");
			return;
		}
		try {

			Double coordenadax = Convert::ToDouble(txtPointX->Text);
			Double coordenaday = Convert::ToDouble(txtPointY->Text);
			SecurityModel::Point^ coordenada = gcnew SecurityModel::Point(coordenadax, coordenaday);

			int result = Controller::UpdateZoneMap(NameZone, coordenada);
			if (result == 1) {
				MessageBox::Show("Se ha modificado el nombre de la zona correctamente.");
				ClearControls();
				return;
			}
			else {
				MessageBox::Show("No se ha logrado modificar la zona.");
			}
			ShowZones();
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la zona por el siguiente motivo:\n" +
				ex->Message);
		}

	}

	private: System::Void UpdateMapForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowZones();
		ClearControls();
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NameZone = txtNameZone->Text->Trim();
		if (NameZone->Equals("")) {
			MessageBox::Show("Debe seleccionar una zona");
			return;
		}
		try {
			System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar la zona?",
				"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
				Controller::DeleteZoneMap(NameZone);
				ShowZones();
				ClearControls();
				MessageBox::Show("Se ha eliminado la zona con nombre = " + NameZone + " de manera exitosa.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar la zona por el siguiente motivo:\n" +
				ex->Message);
		}

	}

	private: System::Void pbMap_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int x = e->X;
		int y = e->Y;
		Graphics^ g = pbMap->CreateGraphics();
		g->FillEllipse(Brushes::Red, x - 3, y - 3, 6, 6);
		
		SecurityModel::Point^ coordenadas = PixelToGeo(x, y, pbMap->Width, pbMap->Height);
		double lat = coordenadas->Y;
		double lon = coordenadas->X;
		// Mostrar coordenadas en los textbox
		txtPointX->Text = Convert::ToString(lon);
		txtPointY->Text = Convert::ToString(lat);
		//pbMap->Invalidate();

	}


	private: System::Void dgvZonesPositions_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ namezone = dgvZonesPositions->Rows[dgvZonesPositions->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		SecurityModel::Point^ coordenada = Controller::QueryZonebyName(namezone);
		txtNameZone->Text = namezone;
		txtPointX->Text = Convert::ToString(coordenada->X);
		txtPointY->Text = Convert::ToString(coordenada->Y);

	}
};
}