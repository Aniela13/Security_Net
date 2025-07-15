#pragma once
namespace SecurityGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Http;
	using namespace System::Threading::Tasks;
	using namespace System::Web::Script::Serialization; // Para deserializar JSON
	using namespace Microsoft::Web::WebView2::WinForms;
	using namespace Microsoft::Web::WebView2::Core;

	/// <summary>
	/// Resumen de WebMapForm
	/// </summary>
	public ref class WebMapForm : public System::Windows::Forms::Form
	{
	public:
		WebMapForm(void)
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
		~WebMapForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: Microsoft::Web::WebView2::WinForms::WebView2^ webView21;
	private: System::Windows::Forms::TextBox^ txtPointY;
	private: System::Windows::Forms::TextBox^ txtPointX;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	/*private: void GetCoordinatesFromESP32();
	private: void ProcessAnswerGPS(String^ json);
	private: void DrawMarkInMap(double lat, double lon);*/

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->webView21 = (gcnew Microsoft::Web::WebView2::WinForms::WebView2());
			this->txtPointY = (gcnew System::Windows::Forms::TextBox());
			this->txtPointX = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webView21))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(398, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 52);
			this->label1->TabIndex = 1;
			this->label1->Text = L"MAPA";
			// 
			// webView21
			// 
			this->webView21->AllowExternalDrop = true;
			this->webView21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webView21->CreationProperties = nullptr;
			this->webView21->DefaultBackgroundColor = System::Drawing::Color::White;
			this->webView21->Location = System::Drawing::Point(57, 142);
			this->webView21->Name = L"webView21";
			this->webView21->Size = System::Drawing::Size(1007, 359);
			this->webView21->TabIndex = 2;
			this->webView21->ZoomFactor = 1;
			// 
			// txtPointY
			// 
			this->txtPointY->Location = System::Drawing::Point(211, 569);
			this->txtPointY->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointY->Name = L"txtPointY";
			this->txtPointY->ReadOnly = true;
			this->txtPointY->Size = System::Drawing::Size(133, 22);
			this->txtPointY->TabIndex = 40;
			// 
			// txtPointX
			// 
			this->txtPointX->Location = System::Drawing::Point(211, 533);
			this->txtPointX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPointX->Name = L"txtPointX";
			this->txtPointX->ReadOnly = true;
			this->txtPointX->Size = System::Drawing::Size(133, 22);
			this->txtPointX->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 572);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Coordenada Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 533);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Coordenada X:";
			// 
			// WebMapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1127, 645);
			this->Controls->Add(this->txtPointY);
			this->Controls->Add(this->txtPointX);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->webView21);
			this->Controls->Add(this->label1);
			this->Name = L"WebMapForm";
			this->Text = L"WebMapForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &WebMapForm::WebMapForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &WebMapForm::WebMapForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webView21))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
		void SecurityGUIApp::WebMapForm::DrawMarkInMap(double lat, double lon)
		{
			String^ script = String::Format(
				"L.marker([{0}, {1}]).addTo(map).bindPopup('Ubicación GPS').openPopup(); map.setView([{0}, {1}], 16);",
				lat, lon);

			webView21->CoreWebView2->ExecuteScriptAsync(script);
		}

		void SecurityGUIApp::WebMapForm::ProcessAnswerGPS(String^ json)
		{
			JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();
			auto dict = safe_cast<Collections::Generic::Dictionary<String^, Object^>^>(serializer->DeserializeObject(json));

			if (dict->ContainsKey("lat") && dict->ContainsKey("lon")) {
				double lat = System::Convert::ToDouble(dict["lat"]);
				double lon = System::Convert::ToDouble(dict["lon"]);
				
				DrawMarkInMap(lat, lon);
			}
		}
		void WebMapForm::OnReadJsonFinished(Task<String^>^ task) {
			if (task->Status == TaskStatus::RanToCompletion) {
				String^ json = task->Result;
				this->Invoke(gcnew Action<String^>(this, &WebMapForm::ProcessAnswerGPS), json);
			}
		}
		
		void SecurityGUIApp::WebMapForm::GetCoordinatesFromESP32()
		{
			HttpClient^ client = gcnew HttpClient();
			String^ url = "http://192.168.68.108/gps"; // Cambia por tu IP

			Task<HttpResponseMessage^>^ responseTask = client->GetAsync(url);
			responseTask->ContinueWith(gcnew Action<Task<HttpResponseMessage^>^>(this, &WebMapForm::OnResponseReceived));
		}
		void WebMapForm::OnResponseReceived(Task<HttpResponseMessage^>^ task) {
			if (task->Status == TaskStatus::RanToCompletion) {
				HttpResponseMessage^ response = task->Result;
				Task<String^>^ readTask = response->Content->ReadAsStringAsync();
				readTask->ContinueWith(gcnew Action<Task<String^>^>(this, &WebMapForm::OnReadJsonFinished));
			}
		}
		
		private: bool seguirActualizando = true;

		private: void IniciarActualizacionContinuaGPS() {
			Task::Run(gcnew Action(this, &WebMapForm::ActualizarLoopGPS));
		}

		private: void ActualizarLoopGPS() {
			while (seguirActualizando) {
				try {
					GetCoordinatesFromESP32();
					
				}
				catch (Exception^ ex) {
					Console::WriteLine("Error en actualización GPS: " + ex->Message);
				}
				Threading::Thread::Sleep(5000); // Espera 5 segundos
			}
		}

#pragma endregion
	private: System::Void WebMapForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path = Application::StartupPath + "\\mapa.html";
		webView21->Source = gcnew Uri("file:///" + path->Replace("\\", "/"));
		IniciarActualizacionContinuaGPS();
		/*txtPointX->Text = System::Convert::ToString(lat);
		txtPointY->Text = System::Convert::ToString(lon);*/
	}
	private: System::Void WebMapForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		seguirActualizando = false;

	}
};
}
