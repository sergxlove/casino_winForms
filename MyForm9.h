#pragma once
#include <string>
namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: int balance = 0;
	private: int result_convert = 0;
	private: int second_balance = 0;
	private: int sum = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
		void OnPaint(PaintEventArgs^ e) override
		{
			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::White, 2);
			g->DrawLine(pen, 5, 85, 900, 85);
			g->DrawLine(pen, 5, 185, 900, 185);
			g->DrawLine(pen, 250, 185, 250, 300);
			g->DrawLine(pen, 375, 185, 375, 300);
			g->DrawLine(pen, 5, 300, 900, 300);
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(854, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 38);
			this->label3->TabIndex = 48;
			this->label3->Text = L"10000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(619, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 38);
			this->label2->TabIndex = 47;
			this->label2->Text = L"10000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(369, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 38);
			this->label1->TabIndex = 46;
			this->label1->Text = L"10000";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(798, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 45;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(550, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 44;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(313, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(265, 125);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(98, 97);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 51;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(573, 125);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(94, 97);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 52;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(265, 125);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(98, 97);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 53;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(573, 125);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(94, 97);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 54;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(265, 125);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(98, 97);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 55;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(573, 125);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(94, 97);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 56;
			this->pictureBox9->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox1->Location = System::Drawing::Point(58, 236);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(257, 120);
			this->groupBox1->TabIndex = 57;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите валюту :";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton3->Location = System::Drawing::Point(6, 81);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(95, 33);
			this->radioButton3->TabIndex = 60;
			this->radioButton3->Text = L"dollar";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton2->Location = System::Drawing::Point(6, 51);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 33);
			this->radioButton2->TabIndex = 59;
			this->radioButton2->Text = L"evro";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 33);
			this->radioButton1->TabIndex = 58;
			this->radioButton1->Text = L"rub";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Location = System::Drawing::Point(514, 236);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(257, 120);
			this->groupBox2->TabIndex = 58;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выберите валюту :";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton4->Location = System::Drawing::Point(6, 81);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(95, 33);
			this->radioButton4->TabIndex = 63;
			this->radioButton4->Text = L"dollar";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton4_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton6->Location = System::Drawing::Point(6, 21);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(69, 33);
			this->radioButton6->TabIndex = 61;
			this->radioButton6->Text = L"rub";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton5->Location = System::Drawing::Point(6, 51);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(81, 33);
			this->radioButton5->TabIndex = 62;
			this->radioButton5->Text = L"evro";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm9::radioButton5_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(433, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 54);
			this->label4->TabIndex = 59;
			this->label4->Text = L"->";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(72, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 60;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(343, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 47);
			this->button1->TabIndex = 62;
			this->button1->Text = L"Обмен";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox3->Location = System::Drawing::Point(777, 236);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(287, 120);
			this->groupBox3->TabIndex = 63;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Курсы  :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(213, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 29);
			this->label12->TabIndex = 67;
			this->label12->Text = L"rub";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(213, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 29);
			this->label11->TabIndex = 66;
			this->label11->Text = L"rub";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(168, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 29);
			this->label10->TabIndex = 65;
			this->label10->Text = L"75";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(169, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 29);
			this->label9->TabIndex = 64;
			this->label9->Text = L"80";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 29);
			this->label8->TabIndex = 1;
			this->label8->Text = L"1 доллар = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"1 евро = ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(394, 398);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 46);
			this->label13->TabIndex = 64;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(372, 235);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 22);
			this->label14->TabIndex = 65;
			this->label14->Text = L"Сумма : ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(343, 260);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 30);
			this->textBox1->TabIndex = 66;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(8, 12);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(274, 86);
			this->button26->TabIndex = 67;
			this->button26->Text = L"Назад";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm9::button26_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1114, 489);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void delete_image()
{
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox7->Visible = false;
	pictureBox8->Visible = false;
	pictureBox9->Visible = false;
}
private: void delete_image_first_group()
{
	pictureBox4->Visible = false;
	pictureBox6->Visible = false;
	pictureBox8->Visible = false;
}
private: void delete_image_second_group()
{
	pictureBox5->Visible = false;
	pictureBox7->Visible = false;
	pictureBox9->Visible = false;
}
private: void delete_checked()
{
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	radioButton6->Checked = false;
}
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "balance.txt";
	StreamReader^ file = gcnew StreamReader(fileName);
	String^ line;
	line = file->ReadLine();
	label1->Text = line;
	line = file->ReadLine();
	label2->Text = line;
	line = file->ReadLine();
	label3->Text = line;
	file->Close();
	delete_image();
	delete_checked();
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_first_group();
	pictureBox4->Visible = true;
	label5->Text = "Максимум : " + label1->Text;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_first_group();
	pictureBox8->Visible = true;
	label5->Text = "Максимум : " + label2->Text;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_first_group();
	pictureBox6->Visible = true;
	label5->Text = "Максимум : " + label3->Text;
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_second_group();
	pictureBox5->Visible = true;
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_second_group();
	pictureBox9->Visible = true;
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	delete_image_second_group();
	pictureBox7->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked == false && radioButton2->Checked == false && radioButton3->Checked == false || radioButton4->Checked == false && radioButton5->Checked == false && radioButton6->Checked == false) 
	{
		label13->Text = "Выберите валюты для обмена";
		label13->ForeColor = Color::Red;
	}
	else
	{
		if (textBox1->Text != "")
		{
			if (radioButton1->Checked)
			{
				if (radioButton6->Checked)
				{
					label13->Text = "Обмен невозможен";
					label13->ForeColor = Color::Red;
				}
				else if (radioButton5->Checked)
				{
					balance = Convert::ToInt32(label1->Text);
					sum = Convert::ToInt32(textBox1->Text);
					if (sum < balance)
					{
						balance -= sum;
						result_convert = sum / Convert::ToInt32(label9->Text);
						second_balance = Convert::ToInt32(label3->Text);
						second_balance += result_convert;
						label1->Text = Convert::ToString(balance);
						label3->Text = Convert::ToString(second_balance);
						label13->Text = "Успешно";
						label13->ForeColor = Color::Green;
						balance = 0;
						sum = 0;
						result_convert = 0;
						second_balance = 0;
					}
					else
					{
						label13->Text = "Недостаточно средств";
						label13->ForeColor = Color::Red;
					}
				}
				else if (radioButton4->Checked)
				{
					balance = Convert::ToInt32(label1->Text);
					sum = Convert::ToInt32(textBox1->Text);
					if (sum < balance)
					{
						balance -= sum;
						result_convert = sum / Convert::ToInt32(label10->Text);
						second_balance = Convert::ToInt32(label2->Text);
						second_balance += result_convert;
						label1->Text = Convert::ToString(balance);
						label2->Text = Convert::ToString(second_balance);
						label13->Text = "Успешно";
						label13->ForeColor = Color::Green;
						balance = 0;
						sum = 0;
						result_convert = 0;
						second_balance = 0;
					}
					else
					{
						label13->Text = "Недостаточно средств";
						label13->ForeColor = Color::Red;
					}
				}
			}
			else if (radioButton2->Checked)
			{
				if (radioButton6->Checked)
				{
					balance = Convert::ToInt32(label3->Text);
					sum = Convert::ToInt32(textBox1->Text);
					if (sum < balance)
					{
						balance -= sum;
						result_convert = sum * Convert::ToInt32(label9->Text);
						second_balance = Convert::ToInt32(label1->Text);
						second_balance += result_convert;
						label1->Text = Convert::ToString(second_balance);
						label3->Text = Convert::ToString(balance);
						label13->Text = "Успешно";
						label13->ForeColor = Color::Green;
						balance = 0;
						sum = 0;
						result_convert = 0;
						second_balance = 0;
					}
					else
					{
						label13->Text = "Недостаточно средств";
						label13->ForeColor = Color::Red;
					}
				}
				else if (radioButton5->Checked)
				{
					label13->Text = "Обмен невозможен";
					label13->ForeColor = Color::Red;
				}
				else if (radioButton4->Checked)
				{
					label13->Text = "Обмен невозможен";
					label13->ForeColor = Color::Red;
				}
			}
			else if (radioButton3->Checked)
			{
				if (radioButton6->Checked)
				{
					balance = Convert::ToInt32(label2->Text);
					sum = Convert::ToInt32(textBox1->Text);
					if (sum < balance)
					{
						balance -= sum;
						result_convert = sum * Convert::ToInt32(label10->Text);
						second_balance = Convert::ToInt32(label1->Text);
						second_balance += result_convert;
						label1->Text = Convert::ToString(second_balance);
						label2->Text = Convert::ToString(balance);
						label13->Text = "Успешно";
						label13->ForeColor = Color::Green;
						balance = 0;
						sum = 0;
						result_convert = 0;
						second_balance = 0;
					}
					else
					{
						label13->Text = "Недостаточно средств";
						label13->ForeColor = Color::Red;
					}
				}
				else if (radioButton5->Checked)
				{
					label13->Text = "Обмен невозможен";
					label13->ForeColor = Color::Red;
				}
				else if (radioButton4->Checked)
				{
					label13->Text = "Обмен невозможен";
					label13->ForeColor = Color::Red;
				}
			}
		}
		else
		{
			label13->Text = "Введите сумму обмена";
			label13->ForeColor = Color::Red;
		}
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "balance.txt";
	StreamWriter^ file = gcnew StreamWriter(fileName);
	file->WriteLine(label1->Text);
	file->WriteLine(label2->Text);
	file->WriteLine(label3->Text);
	file->Close();
	this->Hide();
}
};
}
