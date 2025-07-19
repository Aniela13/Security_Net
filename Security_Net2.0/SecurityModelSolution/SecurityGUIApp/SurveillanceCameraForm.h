#pragma once


namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace SecurityModel;
	using namespace SecurityController;

	/// <summary>
	/// Resumen de SurveillanceCameraForm
	/// </summary>
	public ref class SurveillanceCameraForm : public System::Windows::Forms::Form
	{
	public:
		SurveillanceCameraForm(void)
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
		~SurveillanceCameraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnChangeRoute;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnGoBackMenu;
	private: System::Windows::Forms::PictureBox^ pbCamera;

	private: System::Windows::Forms::Button^ btnTakePhoto;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SurveillanceCameraForm::typeid));
			this->btnChangeRoute = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGoBackMenu = (gcnew System::Windows::Forms::Button());
			this->pbCamera = (gcnew System::Windows::Forms::PictureBox());
			this->btnTakePhoto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCamera))->BeginInit();
			this->SuspendLayout();
			// 
			// btnChangeRoute
			// 
			this->btnChangeRoute->BackColor = System::Drawing::Color::PeachPuff;
			this->btnChangeRoute->Location = System::Drawing::Point(635, 270);
			this->btnChangeRoute->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangeRoute->Name = L"btnChangeRoute";
			this->btnChangeRoute->Size = System::Drawing::Size(96, 71);
			this->btnChangeRoute->TabIndex = 55;
			this->btnChangeRoute->Text = L"CAMBIAR RUTA";
			this->btnChangeRoute->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(348, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 35);
			this->label1->TabIndex = 54;
			this->label1->Text = L"CAMARA";
			this->label1->Click += gcnew System::EventHandler(this, &SurveillanceCameraForm::label1_Click);
			// 
			// btnGoBackMenu
			// 
			this->btnGoBackMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGoBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoBackMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGoBackMenu.Image")));
			this->btnGoBackMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGoBackMenu->Location = System::Drawing::Point(623, 409);
			this->btnGoBackMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGoBackMenu->Name = L"btnGoBackMenu";
			this->btnGoBackMenu->Size = System::Drawing::Size(149, 69);
			this->btnGoBackMenu->TabIndex = 53;
			this->btnGoBackMenu->Text = L"MENU PRINCIPAL";
			this->btnGoBackMenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnGoBackMenu->UseVisualStyleBackColor = false;
			// 
			// pbCamera
			// 
			this->pbCamera->Location = System::Drawing::Point(105, 185);
			this->pbCamera->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbCamera->Name = L"pbCamera";
			this->pbCamera->Size = System::Drawing::Size(451, 293);
			this->pbCamera->TabIndex = 52;
			this->pbCamera->TabStop = false;
			// 
			// btnTakePhoto
			// 
			this->btnTakePhoto->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTakePhoto->Location = System::Drawing::Point(635, 175);
			this->btnTakePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTakePhoto->Name = L"btnTakePhoto";
			this->btnTakePhoto->Size = System::Drawing::Size(96, 71);
			this->btnTakePhoto->TabIndex = 56;
			this->btnTakePhoto->Text = L"TOMAR FOTO";
			this->btnTakePhoto->UseVisualStyleBackColor = false;
			this->btnTakePhoto->Click += gcnew System::EventHandler(this, &SurveillanceCameraForm::btnTakePhoto_Click);
			// 
			// SurveillanceCameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(875, 544);
			this->Controls->Add(this->btnTakePhoto);
			this->Controls->Add(this->btnChangeRoute);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGoBackMenu);
			this->Controls->Add(this->pbCamera);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SurveillanceCameraForm";
			this->Text = L"SurveillanceCameraForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCamera))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnTakePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	array<Byte>^ imagen = Controller::GetImageFromCamara("http://192.168.68.111/capture");
	if (imagen != nullptr) {
		MemoryStream^ ms = gcnew MemoryStream(imagen);
		//Usar memoryStream para convertir los bytes de la imagen en una imagen para subirla  
		System::Drawing::Image^ img = System::Drawing::Image::FromStream(ms);
		pbCamera->Image = img;
		pbCamera->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	else {
		MessageBox::Show("No se pudo obtener la imagen de la cámara.");
	}

}
};
}
