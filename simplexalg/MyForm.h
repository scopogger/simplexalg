#pragma once

#include <iostream>
#include <array>
using namespace std;

namespace simplexalg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ bt1;
	private: System::Windows::Forms::Label^ lb02;
	protected:



	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lb1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lb6;

	private: System::Windows::Forms::Label^ lb5;
	private: System::Windows::Forms::Label^ lb4;
	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb2;
	private: System::Windows::Forms::TextBox^ tb6;
	private: System::Windows::Forms::TextBox^ tb5;
	private: System::Windows::Forms::TextBox^ tb4;
	private: System::Windows::Forms::TextBox^ tb3;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::Label^ lb9;
	private: System::Windows::Forms::TextBox^ tb9;


	private: System::Windows::Forms::Label^ lb03;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tb8;

	private: System::Windows::Forms::TextBox^ tb7;

	private: System::Windows::Forms::Label^ k7;
	private: System::Windows::Forms::Label^ lb8;


	private: System::Windows::Forms::Label^ lb01;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->lb02 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tb8 = (gcnew System::Windows::Forms::TextBox());
			this->lb9 = (gcnew System::Windows::Forms::Label());
			this->tb7 = (gcnew System::Windows::Forms::TextBox());
			this->k7 = (gcnew System::Windows::Forms::Label());
			this->tb9 = (gcnew System::Windows::Forms::TextBox());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			this->tb6 = (gcnew System::Windows::Forms::TextBox());
			this->tb5 = (gcnew System::Windows::Forms::TextBox());
			this->tb4 = (gcnew System::Windows::Forms::TextBox());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->lb6 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->lb03 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lb01 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// bt1
			// 
			this->bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt1->Location = System::Drawing::Point(149, 234);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(89, 36);
			this->bt1->TabIndex = 0;
			this->bt1->Text = L"Старт";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &MyForm::bt1_Click);
			// 
			// lb02
			// 
			this->lb02->AutoSize = true;
			this->lb02->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb02->Location = System::Drawing::Point(27, 12);
			this->lb02->Name = L"lb02";
			this->lb02->Size = System::Drawing::Size(167, 25);
			this->lb02->TabIndex = 1;
			this->lb02->Text = L"Входные данные";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 248);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb1->Location = System::Drawing::Point(31, 49);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(33, 25);
			this->lb1->TabIndex = 3;
			this->lb1->Text = L"k1";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tb8);
			this->panel1->Controls->Add(this->lb9);
			this->panel1->Controls->Add(this->tb7);
			this->panel1->Controls->Add(this->bt1);
			this->panel1->Controls->Add(this->k7);
			this->panel1->Controls->Add(this->tb9);
			this->panel1->Controls->Add(this->lb8);
			this->panel1->Controls->Add(this->tb6);
			this->panel1->Controls->Add(this->tb5);
			this->panel1->Controls->Add(this->tb4);
			this->panel1->Controls->Add(this->tb3);
			this->panel1->Controls->Add(this->tb2);
			this->panel1->Controls->Add(this->tb1);
			this->panel1->Controls->Add(this->lb6);
			this->panel1->Controls->Add(this->lb5);
			this->panel1->Controls->Add(this->lb4);
			this->panel1->Controls->Add(this->lb02);
			this->panel1->Controls->Add(this->lb3);
			this->panel1->Controls->Add(this->lb1);
			this->panel1->Controls->Add(this->lb2);
			this->panel1->Location = System::Drawing::Point(423, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(258, 285);
			this->panel1->TabIndex = 4;
			// 
			// tb8
			// 
			this->tb8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb8->Location = System::Drawing::Point(171, 193);
			this->tb8->Name = L"tb8";
			this->tb8->Size = System::Drawing::Size(44, 30);
			this->tb8->TabIndex = 20;
			this->tb8->Text = L"5";
			// 
			// lb9
			// 
			this->lb9->AutoSize = true;
			this->lb9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb9->Location = System::Drawing::Point(11, 239);
			this->lb9->Name = L"lb9";
			this->lb9->Size = System::Drawing::Size(29, 25);
			this->lb9->TabIndex = 16;
			this->lb9->Text = L"M";
			// 
			// tb7
			// 
			this->tb7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb7->Location = System::Drawing::Point(70, 193);
			this->tb7->Name = L"tb7";
			this->tb7->Size = System::Drawing::Size(44, 30);
			this->tb7->TabIndex = 19;
			this->tb7->Text = L"6";
			// 
			// k7
			// 
			this->k7->AutoSize = true;
			this->k7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->k7->Location = System::Drawing::Point(31, 196);
			this->k7->Name = L"k7";
			this->k7->Size = System::Drawing::Size(33, 25);
			this->k7->TabIndex = 17;
			this->k7->Text = L"k7";
			// 
			// tb9
			// 
			this->tb9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb9->Location = System::Drawing::Point(48, 239);
			this->tb9->Name = L"tb9";
			this->tb9->Size = System::Drawing::Size(83, 30);
			this->tb9->TabIndex = 15;
			this->tb9->Text = L"1000";
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb8->Location = System::Drawing::Point(132, 196);
			this->lb8->Name = L"lb8";
			this->lb8->Size = System::Drawing::Size(33, 25);
			this->lb8->TabIndex = 18;
			this->lb8->Text = L"k8";
			// 
			// tb6
			// 
			this->tb6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb6->Location = System::Drawing::Point(171, 146);
			this->tb6->Name = L"tb6";
			this->tb6->Size = System::Drawing::Size(44, 30);
			this->tb6->TabIndex = 14;
			this->tb6->Text = L"7";
			// 
			// tb5
			// 
			this->tb5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb5->Location = System::Drawing::Point(70, 146);
			this->tb5->Name = L"tb5";
			this->tb5->Size = System::Drawing::Size(44, 30);
			this->tb5->TabIndex = 13;
			this->tb5->Text = L"3";
			// 
			// tb4
			// 
			this->tb4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb4->Location = System::Drawing::Point(171, 96);
			this->tb4->Name = L"tb4";
			this->tb4->Size = System::Drawing::Size(44, 30);
			this->tb4->TabIndex = 12;
			this->tb4->Text = L"4";
			// 
			// tb3
			// 
			this->tb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb3->Location = System::Drawing::Point(70, 96);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(44, 30);
			this->tb3->TabIndex = 11;
			this->tb3->Text = L"5";
			// 
			// tb2
			// 
			this->tb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb2->Location = System::Drawing::Point(171, 46);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(44, 30);
			this->tb2->TabIndex = 10;
			this->tb2->Text = L"5";
			// 
			// tb1
			// 
			this->tb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb1->Location = System::Drawing::Point(70, 46);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(44, 30);
			this->tb1->TabIndex = 9;
			this->tb1->Text = L"6";
			// 
			// lb6
			// 
			this->lb6->AutoSize = true;
			this->lb6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb6->Location = System::Drawing::Point(132, 149);
			this->lb6->Name = L"lb6";
			this->lb6->Size = System::Drawing::Size(33, 25);
			this->lb6->TabIndex = 8;
			this->lb6->Text = L"k6";
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb5->Location = System::Drawing::Point(31, 149);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(33, 25);
			this->lb5->TabIndex = 7;
			this->lb5->Text = L"k5";
			// 
			// lb4
			// 
			this->lb4->AutoSize = true;
			this->lb4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb4->Location = System::Drawing::Point(132, 99);
			this->lb4->Name = L"lb4";
			this->lb4->Size = System::Drawing::Size(33, 25);
			this->lb4->TabIndex = 6;
			this->lb4->Text = L"k4";
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb3->Location = System::Drawing::Point(31, 99);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(33, 25);
			this->lb3->TabIndex = 5;
			this->lb3->Text = L"k3";
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb2->Location = System::Drawing::Point(132, 49);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(33, 25);
			this->lb2->TabIndex = 4;
			this->lb2->Text = L"k2";
			// 
			// lb03
			// 
			this->lb03->AutoSize = true;
			this->lb03->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb03->Location = System::Drawing::Point(15, 15);
			this->lb03->Name = L"lb03";
			this->lb03->Size = System::Drawing::Size(78, 25);
			this->lb03->TabIndex = 17;
			this->lb03->Text = L"Ответ:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->lb03);
			this->panel2->Location = System::Drawing::Point(12, 303);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(669, 86);
			this->panel2->TabIndex = 18;
			// 
			// lb01
			// 
			this->lb01->AutoSize = true;
			this->lb01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb01->Location = System::Drawing::Point(172, 21);
			this->lb01->Name = L"lb01";
			this->lb01->Size = System::Drawing::Size(105, 25);
			this->lb01->TabIndex = 19;
			this->lb01->Text = L"Вариант 7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 401);
			this->Controls->Add(this->lb01);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Form1 \"M-метод\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt1_Click(System::Object^ sender, System::EventArgs^ e) {

		double SLAU1[4][8];
		double SLAU2[4][8];

		for (int n = 0; n < 4; n++)
			for (int t = 0; t < 8; t++)
				SLAU1[n][t] = 0;

		//for (int n = 0; n < 4; n++)
		//	for (int t = 1; t < 3; t++)
		//		cin >> SLAU1[n][t];

		// Автоввод переменных
		//int M = 1000;
		//SLAU1[0][1] = 6;
		//SLAU1[0][2] = 5;
		//SLAU1[1][1] = 5;
		//SLAU1[1][2] = 4;
		//SLAU1[2][1] = 3;
		//SLAU1[2][2] = 7;
		//SLAU1[3][1] = 6;
		//SLAU1[3][2] = 5;

		int M = 0;
		SLAU1[0][1] = 0;
		SLAU1[0][2] = 0;
		SLAU1[1][1] = 0;
		SLAU1[1][2] = 0;
		SLAU1[2][1] = 0;
		SLAU1[2][2] = 0;
		SLAU1[3][1] = 0;
		SLAU1[3][2] = 0;

		if (this->tb1->Text->Length != 0)
			SLAU1[0][1] = Convert::ToInt32(tb1->Text);
		if (this->tb2->Text->Length != 0)
			SLAU1[0][2] = Convert::ToInt32(tb2->Text);
		if (this->tb3->Text->Length != 0)
			SLAU1[1][1] = Convert::ToInt32(tb3->Text);
		if (this->tb4->Text->Length != 0)
			SLAU1[1][2] = Convert::ToInt32(tb4->Text);
		if (this->tb5->Text->Length != 0)
			SLAU1[2][1] = Convert::ToInt32(tb5->Text);
		if (this->tb6->Text->Length != 0)
			SLAU1[2][2] = Convert::ToInt32(tb6->Text);
		if (this->tb7->Text->Length != 0)
			SLAU1[3][1] = Convert::ToInt32(tb7->Text);
		if (this->tb8->Text->Length != 0)
			SLAU1[3][2] = Convert::ToInt32(tb8->Text);
		if (this->tb9->Text->Length != 0)
			M = Convert::ToInt32(tb9->Text);


		SLAU1[0][0] = 1;
		SLAU1[0][5] = -M;
		SLAU1[0][6] = -M;
		SLAU1[1][3] = -1;
		SLAU1[1][5] = 1;
		SLAU1[1][7] = 6;
		SLAU1[2][6] = 1;
		SLAU1[2][7] = 10;
		SLAU1[3][4] = 1;
		SLAU1[3][7] = 20;


		for (int n = 0; n < 4; n++)
		{
			for (int t = 0; t < 8; t++)
				cout << SLAU1[n][t] << " ";
			//cout << "\n"; // Пошаговый вывод
		}

		for (int n = 0; n < 4; n++) // backup
			for (int t = 0; t < 8; t++)
				SLAU2[n][t] = SLAU1[n][t];

		for (int n = 1; n < 3; n++) // M number
			for (int t = 0; t < 8; t++)
				SLAU1[n][t] = SLAU1[n][t] * M;

		for (int n = 1; n < 3; n++) // 1 line + (2 + 3)
			for (int t = 0; t < 8; t++)
				SLAU2[0][t] += SLAU1[n][t];


		for (int n = 0; n < 4; n++)
		{
			for (int t = 0; t < 8; t++)
				cout << SLAU2[n][t] << " ";
			//cout << "\n"; // Пошаговый вывод
		}


		int k = 1, l = 1;
		double d, r;
		r = SLAU2[1][1];
		d = SLAU2[0][1] / r;   // 1(Z) КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[0][n] = SLAU2[0][n] - SLAU2[k][n] * d;
			//cout << SLAU2[0][n] << " "; // Пошаговый вывод
		}

		d = SLAU2[2][1] / r;   //3 КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[2][n] = SLAU2[2][n] - SLAU2[k][n] * d;
			cout << SLAU2[2][n] << " "; // Пошаговый вывод
		}
		cout << "\n";
		d = SLAU2[3][1] / r;   //4 КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[3][n] = SLAU2[3][n] - SLAU2[k][n] * d;
			//cout << SLAU2[3][n] << " "; // Пошаговый вывод
		}

		for (int n = 0; n < 8; n++) {
			SLAU2[k][n] = SLAU2[k][n] / r;
			//cout << SLAU2[k][n] << " "; // Пошаговый вывод
		}

		k = 2;
		r = SLAU2[2][2];
		d = SLAU2[0][2] / r;   // 1(Z) КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[0][n] = SLAU2[0][n] - SLAU2[k][n] * d;
			//cout << SLAU2[0][n] << " "; // Пошаговый вывод
		}

		d = SLAU2[1][2] / r;   //2 КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[1][n] = SLAU2[1][n] - SLAU2[k][n] * d;
			//cout << SLAU2[1][n] << " "; // Пошаговый вывод
		}

		d = SLAU2[3][2] / r;   //4 КОЭФ
		for (int n = 0; n < 8; n++)
		{
			SLAU2[3][n] = SLAU2[3][n] - SLAU2[k][n] * d;
			cout << SLAU2[3][n] << " "; // Пошаговый вывод
		}

		for (int n = 0; n < 8; n++) {
			SLAU2[k][n] = SLAU2[k][n] / r;
			//cout << SLAU2[k][n] << " "; // Пошаговый вывод
		}

		lb03->Text = "Ответ: x*={" + SLAU2[1][7] + "; " + SLAU2[2][7] + "} \n"
			+ "              Z = " + SLAU2[0][7];

		//cout << "x*={" << SLAU2[1][7] << "; " << SLAU2[2][7] << "} Z=" << SLAU2[0][7];
		//cin >> r; // Вывод решения в консоль
	}
};
}
