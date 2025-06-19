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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZonesColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoordenadasColumn;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->BeginInit();
			this->SuspendLayout();
			// 
			// pbMap
			// 
			this->pbMap->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMap.Image")));
			this->pbMap->Location = System::Drawing::Point(12, 81);
			this->pbMap->Name = L"pbMap";
			this->pbMap->Size = System::Drawing::Size(539, 665);
			this->pbMap->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbMap->TabIndex = 0;
			this->pbMap->TabStop = false;
			this->pbMap->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateMapForm::pbMap_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(292, 9);
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
			this->dgvZonesPositions->Location = System::Drawing::Point(628, 81);
			this->dgvZonesPositions->Name = L"dgvZonesPositions";
			this->dgvZonesPositions->RowHeadersWidth = 51;
			this->dgvZonesPositions->RowTemplate->Height = 24;
			this->dgvZonesPositions->Size = System::Drawing::Size(310, 559);
			this->dgvZonesPositions->TabIndex = 9;
			// 
			// ZonesColumn
			// 
			this->ZonesColumn->HeaderText = L"ZONAS";
			this->ZonesColumn->MinimumWidth = 6;
			this->ZonesColumn->Name = L"ZonesColumn";
			this->ZonesColumn->Width = 125;
			// 
			// CoordenadasColumn
			// 
			this->CoordenadasColumn->HeaderText = L"COORDENADAS";
			this->CoordenadasColumn->MinimumWidth = 6;
			this->CoordenadasColumn->Name = L"CoordenadasColumn";
			this->CoordenadasColumn->Width = 125;
			// 
			// btnAddZone
			// 
			this->btnAddZone->Location = System::Drawing::Point(444, 780);
			this->btnAddZone->Name = L"btnAddZone";
			this->btnAddZone->Size = System::Drawing::Size(91, 37);
			this->btnAddZone->TabIndex = 10;
			this->btnAddZone->Text = L"Añadir";
			this->btnAddZone->UseVisualStyleBackColor = true;
			this->btnAddZone->Click += gcnew System::EventHandler(this, &UpdateMapForm::btnAddZone_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(444, 833);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(91, 41);
			this->btnModify->TabIndex = 11;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(444, 890);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(91, 42);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(597, 797);
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
			this->btnGoBackMenu->Location = System::Drawing::Point(749, 797);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(150, 69);
			this->btnGoBackMenu->TabIndex = 37;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 801);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre Zona: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 833);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Coordenada X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 872);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Coordenada Y:";
			// 
			// txtNameZone
			// 
			this->txtNameZone->Location = System::Drawing::Point(171, 801);
			this->txtNameZone->Name = L"txtNameZone";
			this->txtNameZone->Size = System::Drawing::Size(179, 22);
			this->txtNameZone->TabIndex = 6;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(171, 833);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->ReadOnly = true;
			this->txtPointX->Size = System::Drawing::Size(58, 22);
			this->txtPointX->TabIndex = 7;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(171, 869);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->ReadOnly = true;
			this->txtPointY->Size = System::Drawing::Size(58, 22);
			this->txtPointY->TabIndex = 8;
			// 
			// UpdateMapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 980);
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
			this->Name = L"UpdateMapForm";
			this->Text = L"UpdateMapForm";
			this->Load += gcnew System::EventHandler(this, &UpdateMapForm::UpdateMapForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMap))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvZonesPositions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: 
		//y es latitud e x es longitud 
		double latTopLeft = -12.07346, lonTopLeft = -77.08321;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.06465, lonBottomRight = -77.07743; // Coordenadas de la esquina inferior derecha
		SecurityModel::Point^ pointbottomright = gcnew SecurityModel::Point(lonBottomRight, latBottomRight);
		SecurityModel::Point^ pointtopleft = gcnew SecurityModel::Point(lonTopLeft, latTopLeft);
	public: 
		SecurityModel::Point^ PixelToGeo(int x, int y, int imgWidth, int imgHeight)
		{
			double lon = pointtopleft->X + (double)x / imgWidth * (pointbottomright->X - pointtopleft->X);
			double lat = pointtopleft->Y - (double)y / imgHeight * (pointtopleft ->Y - pointbottomright->Y);
			return gcnew SecurityModel::Point(lon, lat);
		}
	
		SecurityModel::Point^ GeoToPixel(double lat, double lon, int imgWidth, int imgHeight){
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
private: System::Void UpdateMapForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void pbMap_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int x = e->X;
		int y = e->Y;

		SecurityModel::Point^ coordenadas = PixelToGeo(x, y, pbMap->Width, pbMap->Height);
		double lat = coordenadas->Y;
		double lon = coordenadas->X;

		// Mostrar coordenadas en los textbox
		txtPointX->Text = Convert::ToString(lon);
		txtPointY->Text = Convert::ToString(lat);

	}

	private: System::Void btnAddZone_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}