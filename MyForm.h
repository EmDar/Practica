#pragma once

#include <iostream>

namespace Project1 {

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
			std::cout << "*************************************";
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button8;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(17, 253);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(433, 33);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Уточните информацию о себе";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(17, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Я состаю в браке";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Menu;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(229, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(319, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Я получал налоговый вычет раньше";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Menu;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(17, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(433, 33);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Использовал при оплате средства гос. поддержки";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Menu;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(17, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(433, 33);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Кредитный договор был подписан до 01.01.2014";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Общая информация";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(20, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Дата покупки квартиры";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(20, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Стоимость недвижимости";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(17, 320);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(433, 33);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(17, 389);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(433, 33);
			this->textBox3->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(591, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(433, 308);
			this->panel1->TabIndex = 11;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::Window;
			this->label18->Location = System::Drawing::Point(39, 151);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(263, 41);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Максимальная сумма возврата налога за недвижимость";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::Window;
			this->label16->Location = System::Drawing::Point(252, 257);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(106, 20);
			this->label16->TabIndex = 30;
			this->label16->Text = L"За % по ипотеке";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::Window;
			this->label17->Location = System::Drawing::Point(248, 211);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 37);
			this->label17->TabIndex = 29;
			this->label17->Text = L"0 ₽";
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(41, 257);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 16);
			this->label14->TabIndex = 28;
			this->label14->Text = L"За покупку";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(37, 211);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(143, 37);
			this->label15->TabIndex = 27;
			this->label15->Text = L"0 ₽";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::Window;
			this->label12->Location = System::Drawing::Point(252, 78);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 41);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Можно вернуть в последующих годах";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(248, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 37);
			this->label13->TabIndex = 25;
			this->label13->Text = L"0 ₽";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(41, 78);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 41);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Можно вернуть в текущем году";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(37, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 37);
			this->label10->TabIndex = 23;
			this->label10->Text = L"0 ₽";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(44, 135);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(347, 5);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Menu;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(17, 462);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 33);
			this->button5->TabIndex = 12;
			this->button5->Text = L"1 год";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Menu;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(107, 462);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 33);
			this->button6->TabIndex = 13;
			this->button6->Text = L"2 года";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Menu;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Sitka Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(198, 462);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 33);
			this->button7->TabIndex = 14;
			this->button7->Text = L"3 года";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(17, 535);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(149, 33);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(182, 535);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(149, 33);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(348, 535);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 33);
			this->textBox6->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(20, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(376, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Сумма уплаченных процентов по ипотеке на момент расчета, ₽";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(20, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"За какой срок заявить выплату";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(20, 516);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Зарплата в 2023, ₽";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8+
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(185, 516);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Зарплата в 2022, ₽";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Location = System::Drawing::Point(351, 516);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 16);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Зарплата в 2021, ₽";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label19->Location = System::Drawing::Point(591, 336);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(433, 86);
			this->label19->TabIndex = 23;
			this->label19->Text = resources->GetString(L"label19.Text");
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(17, 600);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(480, 50);
			this->button8->TabIndex = 24;
			this->button8->Text = L"ВЫПОЛНИТЬ РАССЧЕТЫ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 689);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int money;
			int percent;
			int year;
			int sal1;
			int sal2;
			int sal3;
			bool but1, but2, but3, but4;
			//char* data;

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::String^ labelText = clickedLabel->Text;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ DataText;
		if(but4)
		{
			DataText = "31.12.2013";
		}
		else
			DataText = safe_cast<String^>(sender);

		this->label3->Text = DataText;

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::Int32^ MoneyText = System::Convert::ToInt32(clickedLabel->Text);
			money = (int)MoneyText;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		but1 = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		but2 = true;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::Int32^ PerText = System::Convert::ToInt32(clickedLabel->Text);
			percent = (int)PerText;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		but3 = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		but4 = true;
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		year = 1;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		year = 2;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		year = 3;
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::Int32^ SalText1 = System::Convert::ToInt32(clickedLabel->Text);
			sal1 = (int)SalText1;
		}
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::Int32^ SalText2 = System::Convert::ToInt32(clickedLabel->Text);
			sal2 = (int)SalText2;
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			System::Int32^ SalText3 = System::Convert::ToInt32(clickedLabel->Text);
			sal3 = (int)SalText3;
		}
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	} 
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		int result1 = sal1 + sal2 + sal3;

		int result2 = money * 0.13 * year * 0.13;
		int result3 = 2000000 * 0.13;
		int result4 = result2 + result3;

		label17->Text = result1.ToString() + " ₽";
		label15->Text = result3.ToString() + " ₽";
		label10->Text = result4.ToString() + " ₽";
	}
	};
}
