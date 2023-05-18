#pragma once
#include <windows.h>
#include <stdio.h>
#include<string> 
#include <fstream>
#include <iostream>
#include <cmath> 

unsigned long long seed = 0x9ABD15FA;
bool flag;

namespace Project1 
{
	int RSA_KEY(unsigned long long* p, unsigned long long* q, unsigned long long* n, unsigned long long* f, unsigned long long* e, unsigned long long* d);
	void RSA_ENCRYPT();
	int RSA_DECRYPT();
	unsigned long int pow(unsigned long long base, unsigned long long power, unsigned long long N);
	unsigned long generation(unsigned long min, unsigned long max);
	void newseed();
	bool rabinmiller(bool aa, unsigned long seed);
	int gcd(unsigned long long number1, unsigned long long number2);
	unsigned long long extended_evklid(unsigned long long e, unsigned long long f, unsigned long long* y);

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;





	public:
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите зерно 32 бита (HEX)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(469, 79);
			this->textBox1->MaxLength = 8;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"9ABD15FA";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Задать случайное зерно";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 54);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сгенерировать новое число";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(472, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Новое число";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(27, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(261, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Минимальное значение (HEX)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(27, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(269, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Максимальное значение (HEX)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(314, 144);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(73, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"00000000";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(314, 222);
			this->textBox3->MaxLength = 8;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(73, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"FFFFFFFF";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(476, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"0000000000";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(584, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 49);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Ввести зерно";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(53, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 54);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Проверить зерно на простоту";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(150, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Зерно:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(27, 420);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Число 1";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(27, 454);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Число 2";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(49, 493);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"НОД:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(144, 420);
			this->textBox4->MaxLength = 8;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(73, 22);
			this->textBox4->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(144, 454);
			this->textBox5->MaxLength = 8;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(73, 22);
			this->textBox5->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(77, 520);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 30);
			this->button5->TabIndex = 19;
			this->button5->Text = L"НОД";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(108, 493);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"-";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(284, 525);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 30);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Результат";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(330, 422);
			this->textBox6->MaxLength = 8;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(73, 22);
			this->textBox6->TabIndex = 22;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(330, 450);
			this->textBox7->MaxLength = 8;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(73, 22);
			this->textBox7->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(291, 422);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 20);
			this->label11->TabIndex = 24;
			this->label11->Text = L"E =";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(291, 452);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 20);
			this->label12->TabIndex = 25;
			this->label12->Text = L"F =";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(291, 477);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 20);
			this->label13->TabIndex = 26;
			this->label13->Text = L"D =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(292, 500);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 20);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Y =";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(328, 476);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 20);
			this->label15->TabIndex = 28;
			this->label15->Text = L"-";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(328, 500);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 20);
			this->label16->TabIndex = 29;
			this->label16->Text = L"-";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(90, 376);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 29);
			this->label17->TabIndex = 30;
			this->label17->Text = L"НОД";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(250, 376);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(223, 29);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Раз. алг. Евклида";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(519, 376);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(212, 29);
			this->label19->TabIndex = 41;
			this->label19->Text = L"Мод. Воз. в Степ";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(538, 467);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(73, 20);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Модуль";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(536, 438);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 20);
			this->label24->TabIndex = 36;
			this->label24->Text = L"Степень";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(536, 412);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(101, 20);
			this->label25->TabIndex = 35;
			this->label25->Text = L"Основание";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(646, 440);
			this->textBox8->MaxLength = 8;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(73, 22);
			this->textBox8->TabIndex = 34;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(646, 412);
			this->textBox9->MaxLength = 8;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(73, 22);
			this->textBox9->TabIndex = 33;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(575, 525);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 30);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Результат";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(646, 468);
			this->textBox10->MaxLength = 8;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(73, 22);
			this->textBox10->TabIndex = 42;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(622, 501);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 20);
			this->label20->TabIndex = 43;
			this->label20->Text = L"-";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(799, 274);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 46);
			this->button8->TabIndex = 44;
			this->button8->Text = L"Создать ключи";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(932, 274);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 30);
			this->button9->TabIndex = 45;
			this->button9->Text = L"Зашифровать";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(932, 317);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 30);
			this->button10->TabIndex = 46;
			this->button10->Text = L"Разшифровать";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(768, 48);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(184, 29);
			this->label21->TabIndex = 47;
			this->label21->Text = L"Алгоритм RSA";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(795, 103);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 20);
			this->label22->TabIndex = 48;
			this->label22->Text = L"P";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(857, 103);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(15, 20);
			this->label26->TabIndex = 49;
			this->label26->Text = L"-";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(855, 128);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(15, 20);
			this->label27->TabIndex = 51;
			this->label27->Text = L"-";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(793, 128);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 20);
			this->label28->TabIndex = 50;
			this->label28->Text = L"Q";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(857, 156);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(15, 20);
			this->label29->TabIndex = 53;
			this->label29->Text = L"-";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(795, 156);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(21, 20);
			this->label30->TabIndex = 52;
			this->label30->Text = L"N";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(857, 183);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(15, 20);
			this->label31->TabIndex = 55;
			this->label31->Text = L"-";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(795, 183);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(19, 20);
			this->label32->TabIndex = 54;
			this->label32->Text = L"F";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(857, 237);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(15, 20);
			this->label33->TabIndex = 59;
			this->label33->Text = L"-";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(795, 237);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(22, 20);
			this->label34->TabIndex = 58;
			this->label34->Text = L"D";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(857, 210);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 20);
			this->label35->TabIndex = 57;
			this->label35->Text = L"-";
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(795, 210);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(20, 20);
			this->label36->TabIndex = 56;
			this->label36->Text = L"E";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 567);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		newseed();
		char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
		std::string q;
		unsigned long a = seed;
			while (a > 0)
			{
				short int r;
				r = a % 16;
				q = hex[r] + q;
				a = a / 16;
			}
		textBox1->Text = gcnew String (q.c_str());

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

	unsigned long min = 0;
	System::String^ q = textBox2->Text;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (q[i] == hex[j])
			{
				min = min << 4;
				min = min + j;
				break;

			}
		}

	}
	unsigned long max = 0;
	q = textBox3->Text;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (q[i] == hex[j])
			{
				max = max << 4;
				max = max + j;
				break;

			}
		}

	}
				unsigned long z = generation(min, max);			

				std::string str = std::to_string(z);
				
				label2->Text = gcnew String(str.c_str());		

				std::string d;
				unsigned long a = seed;
				while (a > 0)
				{
					short int r;
					r = a % 16;
					d = hex[r] + d;
					a = a / 16;
				}
				textBox1->Text = gcnew String(d.c_str());


		
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	System::String^ q = textBox1->Text;
	
	
	seed = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (q[i] == hex[j])
			{
				seed = seed << 4;
				seed = seed + j;
				break;

			}
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	flag = true;
	flag = rabinmiller( flag, seed);

	if (flag) {
		label6->Text = L"Зерно: вероятно простое";
	}
	else { label6->Text = L"Зерно: составное"; };
}





private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


		char hex[10] = { '0','1','2','3','4','5','6','7','8','9' };

		unsigned long number1 = 0, number2 = 0;
		System::String^ q = textBox5->Text;
	
		for (int i = 0; i < q->Length; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (q[i] == hex[j])
				{
					number1 = number1 * 10;
					number1 = number1 + j;
					break;

				}
			}
		
		}

		
	q = textBox4->Text;
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				number2 = number2 * 10;
				number2 = number2 + j;
				break;

			}
		}

	}
	int z = gcd( number2, number1);

	std::string str = std::to_string(z);

	label10->Text = gcnew String(str.c_str());


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	unsigned long number1 = 0, number2 = 0;
	System::String^ q = textBox6->Text;
	char hex[10] = { '0','1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				number1 = number1 * 10;
				number1 = number1 + j;
				break;

			}
		}

	}
	q = textBox7->Text;
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				number2 = number2 * 10;
				number2 = number2 + j;
				break;

			}
		}

	}
	unsigned long long y=0;
	unsigned long d = extended_evklid(number1, number2, &y);
	
	

	std::string str = std::to_string(d);

	label15->Text = gcnew String(str.c_str());

	str = std::to_string(y);

	label16->Text = gcnew String(str.c_str());

}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	
	
	unsigned long base = 0, power = 0, n;
	System::String^ q = textBox9->Text;
	char hex[10] = { '0','1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				base = base * 10;
				base = base + j;
				break;

			}
		}

	}
	q = textBox8->Text;
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				power = power * 10;
				power = power + j;
				break;

			}
		}

	}
	q = textBox10->Text;
	for (int i = 0; i < q->Length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (q[i] == hex[j])
			{
				n = n * 10;
				n = n + j;
				break;

			}
		}

	}
	
	
	unsigned long long res = pow(base, power, n);

	std::string str = std::to_string(res);

	label20->Text = gcnew String(str.c_str());



}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	unsigned long long p, q, n, f, ex, d,tmp;
	RSA_KEY(&p,&q,&n,&f,&ex,&d);



	std::string str = std::to_string(p);
	label26->Text = gcnew String(str.c_str());

	str = std::to_string(q);
	label27->Text = gcnew String(str.c_str());

	str = std::to_string(n);
	label29->Text = gcnew String(str.c_str());

	str = std::to_string(f);
	label31->Text = gcnew String(str.c_str());

	str = std::to_string(d);
	label33->Text = gcnew String(str.c_str());


}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RSA_ENCRYPT();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	RSA_DECRYPT();
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

unsigned  long generation(unsigned long min, unsigned long max)
	{
			unsigned long long m = seed;
			unsigned int hight = 0xFFFFFFFF;// маска 32 бита
			m = (m * m);
			m = m >> 16;
			m = m & hight;
			seed = m;
			 
			m = m % (max - min) + min;
			return m;
	}

void  newseed()
	{
		SYSTEMTIME lt;
		GetLocalTime(&lt);
		long long randomseed;
		int h = lt.wHour, m = lt.wMinute, s = lt.wSecond, ms = lt.wMilliseconds, dm = lt.wDay;
		
		randomseed = 0x10;
		randomseed = randomseed << 2;
		randomseed += dm;
		randomseed = randomseed >> 2;

		randomseed = randomseed << 10;
		randomseed += ms;

		randomseed = randomseed << 5;
		randomseed += h;

		randomseed = randomseed << 6;
		randomseed += s;

		randomseed = randomseed << 6;
		randomseed += m;	
		seed = randomseed;
	}


bool rabinmiller(bool aa, unsigned long seed)
{
	bool flag = aa;
	unsigned long long duplicate_seed = seed; // копия зерна
	unsigned long d = 0; // степень
	unsigned long long a = duplicate_seed / 2.2; // число свидетель 
	duplicate_seed--;

	int  count = 0;

	if (seed % 2 == 0) { flag = false; }
	else {

		while (duplicate_seed % 2 == 0)
		{
			duplicate_seed /= 2;
			count += 1;
		}
		d = duplicate_seed;

		// d  степень

		for (int j = 0; j < 4; j++)
		{
			a = a * 1.2;
			unsigned long long sum = 1;
			for (int i = 0; i < d; i++)
			{
				sum = pow(a, d, seed);

			}

			if (sum == 1 || sum == (seed - 1))
			{
				continue;
			}
			else
			{

				for (int i = 0; i < (count - 1); i++)
				{
					sum = pow(sum, 2, seed);

					if (sum == 1)
					{

					}
					if (sum == seed - 1)
					{
						break;
					}
				}

			}
			if (sum != seed - 1)
			{
				return false;

			}
		}
		return true;
	}
	return false;
}

int gcd(unsigned long long number1, unsigned long long number2)
{

	unsigned long long a = number1, b = number2;
	int z = 1;
	while (z != 0)
	{
		z = a % b;
		a = b;
		b = z;
	}

	return a;
}


unsigned long long extended_evklid(unsigned long long number1, unsigned long long number2, unsigned long long* y)
{
	unsigned long long e = number1, f = number2, r = 1, y0 = 0, y1 = 1, d, d0 = 1, d1 = 0, counter = 0;


	while (r > 0)
	{

		r = e % f;

		d = d0 + ((e / f) * d1);
		*y = y0 + ((e / f) * y1);
		e = f;
		f = r;
	
		d0 = d1;
		d1 = d;
		y0 = y1;
		y1 = *y;
		counter++;


	}
	if (counter & 1 == 1)
	{		*y = y1 - y0;
		d = d1-d0;
	}
	else 
	{
		d = d0;
		*y = y0;
	}
	
	return d;
}


unsigned long int pow(unsigned long long base, unsigned long long power, unsigned long long N)
{
	unsigned long long rez=1;

	while (power != 0 )
	{
		if ((power & 1) != 0)
		{
			rez = (rez * base) % N;
		}
		base = (base * base) % N;
		power >>= 1;
	}

	return rez;

}

int RSA_KEY(unsigned long long* p, unsigned long long* q, unsigned long long* n, unsigned long long* f, unsigned long long* e, unsigned long long* d)
{	
	unsigned long long  y;
	y = 1;
	bool flag = false;
	while (flag != true)
	{
		*p = generation(0x4000, 0x4FFF); 
			flag = rabinmiller(flag, *p);
	}

	
	flag = false;
	
	while (flag != true)
	{
		*q = generation(0x4000, 0x4FFF);
		flag = rabinmiller(flag, *q);	}

	*n = *q * *p;

	*f = (*q - 1) * (*p - 1);

	*e  = generation(0x2, seed);

	while (gcd(*e, *f) != 1)
	{
		*e++;
	}

	*d = extended_evklid(*e, *f, &y);


	std::ofstream close_key("CloseKey.txt"), open_key("OpenKey.txt");
	close_key << *n << '\n' << *d;
	open_key << *n << '\n' << *e;
	close_key.close();
	open_key.close();
	return 0;
}
void RSA_ENCRYPT()
{
	std::ifstream open_key("OpenKey.txt"),input("Input.txt");
	std::ofstream encrypt("encrypt.txt");
	int a;
	unsigned long long  n, e, c = 1, tmp = 0;;
	open_key >> n;
	open_key >> e;
	open_key.close();
	int count = 0, s;

	bool fl = false, f2 = true;;
	while (a != EOF)
	{
		count = 0;
		a = 1;
		c = 0;
		if (fl)
		{

			fl = false;
			tmp = s & 0xF; 
			c = tmp;// 1111
			for (int i = 0; i < 3; i++)
			{
				a = input.get();
				if (count == 0 && a == EOF) { return; }
				count++;
				if (a == EOF) { a = 32;}
				c = c << 8; // 1111 00000000
				c = c + a;
			}
			c = pow(c, e, n);
			c = c;
		}
		else
		{
			fl = true;
			for (int i = 0; i < 4; i++)
			{

				a = input.get();
				if (count == 0 && a == EOF) { return; }
				count++;
				if (a == EOF) { a = 32; }
				if (i == 3)
				{
					s = a;
					tmp = a & 0xF0;
					tmp = tmp >> 4;
					c = c << 4;
					c = c + tmp;

				}
				else
				{
					c = c << 8;
					c = c + a;
				}
			}
			f2 = true;
			c = pow(c, e, n);
			c = c;
		}


		/////////////  транспортное /////////////
		if (count != 0) {
			unsigned long long q = c;
			char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
			int mas[8];
			for (int i = 0; i < 8; i++)
			{
				short int r = 0xF;
				mas[i] = q & r;
				q = q >> 4;
			}
			for (int i = 7; i > -1; i--)
			{
				char z;
				z = hex[mas[i]];
				encrypt << z;
			}
		}
	}
		//////////////////////////////////////	
	input.close();
	encrypt.close();
}
 int RSA_DECRYPT()
{
	std::ifstream close_key("CloseKey.txt"), encrypt("encrypt.txt");
	std::ofstream decrypt("decrypt.txt");


	unsigned long long  n, d,z, c = 0;
	close_key >> n;
	close_key >> d;
	close_key.close();
	int a = 0;
	int tmp = 0;
	char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	bool fl = false;
	while (a != EOF)
	{
		 

		if (fl)
		{
			fl = false;
			c = 0;
			z = 0;
			for (int j = 0; j < 8; j++)
			{
				a = encrypt.get();
			
				if (a == EOF) { return 0; }
				else
				for (int i = 0; i < 16; i++)
				{
					if (a == hex[i])
					{
						c = c << 4;
						c = c + i;
						break;
					}
				}
			}

			z = pow(c, d, n);
			int a1 = 0, a2 = 0, a3 = 0, a4 = 0;


			a3 = z & 0xFF;

			a2 = z & 0xFF00;
			a2 = a2 >> 8;

			a1 = z & 0xFF0000;
			a1 = a1 >> 16;

			a4 = z & 0xFF000000;
			a4 = a4 >> (6*4);
			tmp = tmp << 4;
			tmp = tmp + a4;

			decrypt.put(tmp);
			decrypt.put(a1);
			decrypt.put(a2);
			decrypt.put(a3);
			tmp = 0;
		}
		else 
			{
			tmp = 0;
			z = 0;
			c = 0;
			fl = true;
			for (int j = 0; j < 8; j++)
			{
				a = encrypt.get();
				if (a == EOF) { return 0; }
				for (int i = 0; i < 16; i++)
				{
					if (a == hex[i])
					{
						c = c << 4;
						c = c + i;
						break;
					}
				}
			}
			z = pow(c, d, n);

			int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
			a1 = z & 0xFF00000;
			a1 = a1 >> 20;
			a2 = z & 0xFF000;
			a2 = a2 >> 12;
			a3 = z & 0xFF0;
			a3 = a3 >> 4;

			tmp = z & 0xF;

			decrypt.put(a1);
			decrypt.put(a2);
			decrypt.put(a3);
		}
		
	}
	decrypt.close();
	encrypt.close();
	return 0;

}

}