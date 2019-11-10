#pragma once

namespace Lab6JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelarreglo;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelarreglo = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tamaño del arreglo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(116, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"generar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// labelarreglo
			// 
			this->labelarreglo->AutoSize = true;
			this->labelarreglo->Location = System::Drawing::Point(12, 94);
			this->labelarreglo->Name = L"labelarreglo";
			this->labelarreglo->Size = System::Drawing::Size(0, 13);
			this->labelarreglo->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Buscar Numero Secuencialmente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(116, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Buscar Numero Binaria";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(116, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(179, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Hash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(326, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->labelarreglo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		ArrayList^ numeros = gcnew ArrayList();
		Hashtable^ Hash = gcnew Hashtable();
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	

		int tamaño = Convert::ToInt32(textBox1->Text);

		int i = 0;
		Random^r = gcnew Random();
		numeros->Add(99);
		numeros->Add(2);
		do
		{
			int n = r->Next(100);
			numeros->Add(n);
			i++;
		} while (i<tamaño);


		for each (int var in numeros)
		{
			labelarreglo->Text += var+"\n";
		}

		
		for each (int var in numeros)
		{
			int llave = var % 97;
			if (Hash->ContainsKey(llave))
			{
				llave = llave + 10*var;
				Hash->Add(llave, var);
			}
			else {
				Hash->Add(llave, var);
			}
		}

	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^st = gcnew Stopwatch();
		st->Start();
		int i = 0;
		for each (int var in numeros)
		{
			if (var == Convert::ToInt32(textBox2->Text)) {
				MessageBox::Show("Valor encontrado en posicion: "+(i+1));
			}
			i++;
		}
		st->Stop();
		MessageBox::Show("Tiempo: "+st->Elapsed);
	}

	public: int BusquedaBinaria(int inicio, int final, int num) {
		
		if (final >= inicio) {
			int mitad = inicio + (final - inicio) / 2;
			int prueba = Convert::ToInt32(numeros[mitad]->ToString());
			if (prueba == num)
			{
				return (mitad + 1);
				
			}

			if (prueba < mitad) {
				return BusquedaBinaria(inicio,mitad - 1,num);
			}
			else {
				return BusquedaBinaria(mitad+1, final, num);
			}
		}

		return -1;
	}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int inicio = 0;
	int final = numeros->Count - 1;
	numeros->Sort();
	Stopwatch^ st = gcnew Stopwatch();
	st->Start();
	int num = Convert::ToInt32(textBox2->Text);
	int pos = BusquedaBinaria(inicio, final, num);

	if (pos==-1)
	{
		MessageBox::Show("Numero no encontrado");

	}
	else {
		MessageBox::Show("Numero encontrado en la posicion: "+pos+" del arreglo ordenado");
	}
	st->Stop();
	MessageBox::Show("Tiempo: " + st->Elapsed);
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int num = Convert::ToInt32(textBox2->Text);
	int llave = num % 97;
	Stopwatch^ st = gcnew Stopwatch();
	st->Start();

	if (Hash->ContainsKey(llave))
	{
			MessageBox::Show("posicion en la Hashtable: " + llave);	
	}
	else {
		MessageBox::Show("No se encuentra en la Hashtable");
	}

	st->Stop();
	MessageBox::Show("Tiempo: " + st->Elapsed);
}
};
}


