#pragma once

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
	/// Resumen de ReportAlarms
	/// </summary>
	public ref class ReportAlarms : public System::Windows::Forms::Form
	{
	public:
		ReportAlarms(void)
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
		~ReportAlarms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartAlarmsByDate;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartAlarmsbytype;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartAlarmsByDate = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartAlarmsbytype = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAlarmsByDate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAlarmsbytype))->BeginInit();
			this->SuspendLayout();
			// 
			// chartAlarmsByDate
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartAlarmsByDate->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartAlarmsByDate->Legends->Add(legend1);
			this->chartAlarmsByDate->Location = System::Drawing::Point(31, 134);
			this->chartAlarmsByDate->Name = L"chartAlarmsByDate";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de alarmas";
			this->chartAlarmsByDate->Series->Add(series1);
			this->chartAlarmsByDate->Size = System::Drawing::Size(464, 392);
			this->chartAlarmsByDate->TabIndex = 0;
			this->chartAlarmsByDate->Text = L"chart1";
			// 
			// chartAlarmsbytype
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartAlarmsbytype->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartAlarmsbytype->Legends->Add(legend2);
			this->chartAlarmsbytype->Location = System::Drawing::Point(527, 134);
			this->chartAlarmsbytype->Name = L"chartAlarmsbytype";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Categorias";
			this->chartAlarmsbytype->Series->Add(series2);
			this->chartAlarmsbytype->Size = System::Drawing::Size(438, 392);
			this->chartAlarmsbytype->TabIndex = 1;
			this->chartAlarmsbytype->Text = L"chart2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 529);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Reporte de cantidad de alarmas por mes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(529, 530);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Reporte de cantidad de alarmas por categoría";
			// 
			// ReportAlarms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(990, 596);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chartAlarmsbytype);
			this->Controls->Add(this->chartAlarmsByDate);
			this->Name = L"ReportAlarms";
			this->Text = L"ReportAlarms";
			this->Load += gcnew System::EventHandler(this, &ReportAlarms::ReportAlarms_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAlarmsByDate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAlarmsbytype))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportAlarms_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Warning^>^ alarms = Controller::QueryAllWarnings();

		Dictionary<int, int>^ alarmasPorMes = gcnew Dictionary<int, int>();

		// Contar alarmas por mes
		for (int i = 0; i < alarms->Count; i++) {
			DateTime^ fecha = alarms[i]->StartingDate;
			int mes = fecha->Month;

			if (alarmasPorMes->ContainsKey(mes)) {
				alarmasPorMes[mes]++;
			}
			else {
				alarmasPorMes->Add(mes, 1);
			}
		}

		// Limpiar la serie antes de llenarla
		chartAlarmsByDate->Series["Cantidad de alarmas"]->Points->Clear();

		array<String^>^ nombresMeses = gcnew array<String^>{
			"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
				"Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
		};


		for (int mes = 1; mes <= 12; mes++) {
			int cantidad = alarmasPorMes->ContainsKey(mes) ? alarmasPorMes[mes] : 0;
			int index = chartAlarmsByDate->Series["Cantidad de alarmas"]->Points->AddXY(nombresMeses[mes - 1], cantidad);

			// Opcional: mostrar la cantidad como etiqueta encima de cada barra
			chartAlarmsByDate->Series["Cantidad de alarmas"]->Points[index]->Label = cantidad.ToString();
		}

		//CHART2 PIE ALARMAS POR CATEGORIA
		//chartAlarmsbytype->Series["Categorias"]->ChartType = SeriesChartType::Pie;
		chartAlarmsbytype->Series["Categorias"]->Points->Clear();
		Dictionary<String^, int>^ conteoPorTipo = gcnew Dictionary<String^, int>();

		for each (Warning ^ alarma in alarms) {
			String^ tipo = alarma->Type->Name;

			if (conteoPorTipo->ContainsKey(tipo)) {
				conteoPorTipo[tipo]++;
			}
			else {
				conteoPorTipo->Add(tipo, 1);
			}
		}

		// Paso 3: Rellenar el gráfico con los datos agrupados
		for each (KeyValuePair<String^, int> par in conteoPorTipo) {
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ punto = chartAlarmsbytype->Series["Categorias"]->Points->Add(par.Value);
			punto->LegendText = par.Key;
			punto->Label = par.Value.ToString();
		}
	}
	};
}
