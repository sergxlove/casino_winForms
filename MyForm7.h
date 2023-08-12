#pragma once

namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	enum check_seven
	{
		var_less,
		var_eqully,
		var_more
	};
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button29;
	protected:
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: bool balance_rub = false;
	private: bool balance_dol = false;
	private: bool balance_evro = false;
	private: int stavka = 0;
	private: int priz = 0;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: int value1 = 0;
	private: int value2 = 0;
	private: int var = 9;
	private: int really_var;
	private: int bal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	protected:
		void OnPaint(PaintEventArgs^ e) override
		{
			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::White, 2);
			g->DrawLine(pen, 10, 95, 1075, 95);
			g->DrawLine(pen, 10, 500, 1075, 500);
			g->DrawLine(pen, 10, 400, 1075, 400);
			g->DrawLine(pen, 800, 95, 800, 400);
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Red;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button29->Location = System::Drawing::Point(1264, 55);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(121, 49);
			this->button29->TabIndex = 97;
			this->button29->Text = L"Выбрать";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm7::button29_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->Location = System::Drawing::Point(866, 55);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 49);
			this->button28->TabIndex = 96;
			this->button28->Text = L"Выбрать";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm7::button28_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Red;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button27->Location = System::Drawing::Point(520, 54);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 49);
			this->button27->TabIndex = 95;
			this->button27->Text = L"Выбрать";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm7::button27_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Info;
			this->label9->Location = System::Drawing::Point(308, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 94;
			this->label9->Text = L"Выберите валюту:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1053, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 38);
			this->label3->TabIndex = 93;
			this->label3->Text = L"10000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(703, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 38);
			this->label2->TabIndex = 92;
			this->label2->Text = L"10000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(367, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 38);
			this->label1->TabIndex = 91;
			this->label1->Text = L"10000";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(997, 54);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 90;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(647, 54);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 89;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(311, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(13, 18);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(274, 86);
			this->button26->TabIndex = 87;
			this->button26->Text = L"Назад";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm7::button26_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 509);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(387, 89);
			this->button1->TabIndex = 98;
			this->button1->Text = L"<7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(483, 509);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(387, 89);
			this->button2->TabIndex = 99;
			this->button2->Text = L"=7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(965, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(387, 89);
			this->button3->TabIndex = 100;
			this->button3->Text = L">7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm7::button3_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(214, 684);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(185, 77);
			this->button10->TabIndex = 107;
			this->button10->Text = L"Играть";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm7::button10_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(637, 684);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 77);
			this->button16->TabIndex = 106;
			this->button16->Text = L"+10";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm7::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(743, 684);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 77);
			this->button15->TabIndex = 105;
			this->button15->Text = L"+100";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm7::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(513, 684);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 77);
			this->button14->TabIndex = 104;
			this->button14->Text = L"/2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm7::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(407, 684);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 77);
			this->button13->TabIndex = 103;
			this->button13->Text = L"х2";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm7::button13_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(21, 684);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 77);
			this->textBox2->TabIndex = 102;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(14, 627);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(274, 38);
			this->label7->TabIndex = 101;
			this->label7->Text = L"Введите ставку :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(1138, 133);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 350);
			this->textBox1->TabIndex = 108;
			this->textBox1->Text = L"История :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(870, 729);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 32);
			this->label8->TabIndex = 109;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(124, 133);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(350, 350);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 110;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(124, 133);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(350, 350);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 111;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(124, 133);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(350, 350);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 112;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(124, 133);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(350, 350);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 113;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(124, 133);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(350, 350);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 114;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(124, 133);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(350, 350);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 115;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(628, 133);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(350, 350);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 116;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(628, 133);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(350, 350);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 117;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(628, 133);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(350, 350);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 118;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(628, 133);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(350, 350);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 119;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(628, 133);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(350, 350);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 120;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(628, 133);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(350, 350);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 121;
			this->pictureBox15->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(870, 650);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 32);
			this->label4->TabIndex = 122;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(404, 509);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 89);
			this->label5->TabIndex = 123;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(876, 509);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 89);
			this->label6->TabIndex = 124;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(1358, 509);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 89);
			this->label10->TabIndex = 125;
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1470, 786);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button26);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"MyForm7";
			this->Text = L"MyForm7";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	balance_rub = true;
	balance_dol = false;
	balance_evro = false;
	button27->Text = "Выбрано";
	button28->Text = "Выбрать";
	button29->Text = "Выбрать";
	button27->BackColor = Color::Green;
	button28->BackColor = Color::Red;
	button29->BackColor = Color::Red;
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	balance_rub = false;
	balance_dol = true;
	balance_evro = false;
	button27->Text = "Выбрать";
	button28->Text = "Выбрано";
	button29->Text = "Выбрать";
	button27->BackColor = Color::Red;
	button28->BackColor = Color::Green;
	button29->BackColor = Color::Red;
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	balance_rub = false;
	balance_dol = false;
	balance_evro = true;
	button27->Text = "Выбрать";
	button28->Text = "Выбрать";
	button29->Text = "Выбрано";
	button27->BackColor = Color::Red;
	button28->BackColor = Color::Red;
	button29->BackColor = Color::Green;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "")
	{
		stavka = Convert::ToInt32(textBox2->Text);
		stavka *= 2;
		textBox2->Text = Convert::ToString(stavka);
	}
	else
	{
		label8->Text = "Введите ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "")
	{
		stavka = Convert::ToInt32(textBox2->Text);
		stavka /= 2;
		textBox2->Text = Convert::ToString(stavka);
	}
	else
	{
		label8->Text = "Введите ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "")
	{
		stavka = Convert::ToInt32(textBox2->Text);
		stavka += 10;
		textBox2->Text = Convert::ToString(stavka);
	}
	else
	{
		label8->Text = "Введите ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "")
	{
		stavka = Convert::ToInt32(textBox2->Text);
		stavka += 100;
		textBox2->Text = Convert::ToString(stavka);
	}
	else
	{
		label8->Text = "Введите ставку";
		label8->ForeColor = Color::Red;
	}
}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text != "")
		{
			stavka = Convert::ToInt32(textBox2->Text);
			if (balance_rub == true || balance_dol == true || balance_evro == true)
			{
				if (balance_rub == true)
				{
					bal = Convert::ToInt32(label1->Text);
				}
				if (balance_dol == true)
				{
					bal = Convert::ToInt32(label2->Text);
				}
				if (balance_evro == true)
				{
					bal = Convert::ToInt32(label3->Text);
				}
				if (stavka < bal)
				{
					if (var != 9)
					{
						Random^ random = gcnew Random();
						value1 = random->Next(1, 7);
						value2 = random->Next(1, 7);
						pictureBox4->Visible = false;
						pictureBox5->Visible = false;
						pictureBox6->Visible = false;
						pictureBox7->Visible = false;
						pictureBox8->Visible = false;
						pictureBox9->Visible = false;
						pictureBox10->Visible = false;
						pictureBox11->Visible = false;
						pictureBox12->Visible = false;
						pictureBox13->Visible = false;
						pictureBox14->Visible = false;
						pictureBox15->Visible = false;
						if (value1 == 1)
						{
							pictureBox4->Visible = true;
						}
						if (value1 == 2)
						{
							pictureBox5->Visible = true;
						}
						if (value1 == 3)
						{
							pictureBox6->Visible = true;
						}
						if (value1 == 4)
						{
							pictureBox7->Visible = true;
						}
						if (value1 == 5)
						{
							pictureBox8->Visible = true;
						}
						if (value1 == 6)
						{
							pictureBox9->Visible = true;
						}
						if (value2 == 1)
						{
							pictureBox10->Visible = true;
						}
						if (value2 == 2)
						{
							pictureBox11->Visible = true;
						}
						if (value2 == 3)
						{
							pictureBox12->Visible = true;
						}
						if (value2 == 4)
						{
							pictureBox13->Visible = true;
						}
						if (value2 == 5)
						{
							pictureBox14->Visible = true;
						}
						if (value2 == 6)
						{
							pictureBox15->Visible = true;
						}
						if (value1 + value2 == 7)
						{
							really_var = check_seven::var_eqully;
							label4->Text = "Выпало 7";
						}
						else
						{
							if (value1 + value2 > 7)
							{
								really_var = check_seven::var_more;
								label4->Text = "Выпало больше 7";
							}
							else
							{
								really_var = check_seven::var_less;
								label4->Text = "Выпало меньше 7";
							}
						}
						if (var == really_var)
						{
							label8->Text = "Вы выйграли";
							label8->ForeColor = Color::Green;
							if (var == check_seven::var_less || var == check_seven::var_more)
							{
								priz = stavka * 2;
							}
							if (var == check_seven::var_eqully)
							{
								priz = stavka * 6;
							}
							textBox1->Text += "\r\nВыйгрыш - " + priz;
							if (balance_rub == true)
							{
								bal = Convert::ToInt32(label1->Text);
								bal += priz;
								label1->Text = Convert::ToString(bal);
							}
							if (balance_dol == true)
							{
								bal = Convert::ToInt32(label2->Text);
								bal += priz;
								label2->Text = Convert::ToString(bal);
							}
							if (balance_evro == true)
							{
								bal = Convert::ToInt32(label3->Text);
								bal += priz;
								label3->Text = Convert::ToString(bal);
							}
						}
						else
						{
							label8->Text = "Вы проиграли   " + stavka;
							label8->ForeColor = Color::Red;
							textBox1->Text += "\r\nПроигрыш - " + stavka;
							if (balance_rub == true)
							{
								bal = Convert::ToInt32(label1->Text);
								bal -= stavka;
								label1->Text = Convert::ToString(bal);
							}
							if (balance_dol == true)
							{
								bal = Convert::ToInt32(label2->Text);
								bal -= stavka;
								label2->Text = Convert::ToString(bal);
							}
							if (balance_evro == true)
							{
								bal = Convert::ToInt32(label3->Text);
								bal -= stavka;
								label3->Text = Convert::ToString(bal);
							}
						}
					}
					else
					{
						label8->Text = "Выберите исход";
						label8->ForeColor = Color::Red;
					}
				}
				else
				{
					label8->Text = "Недостаточно средств";
					label8->ForeColor = Color::Red;
				}
			}
			else
			{
				label8->Text = "Выберите валюту";
				label8->ForeColor = Color::Red;
			}
		}
		else
		{
			label8->Text = "Введите ставку";
			label8->ForeColor = Color::Red;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	var = check_seven::var_less;
	label5->BackColor = Color::Green;
	label6->BackColor = Color::Red;
	label10->BackColor = Color::Red;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	var = check_seven::var_eqully;
	label5->BackColor = Color::Red;
	label6->BackColor = Color::Green;
	label10->BackColor = Color::Red;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	var = check_seven::var_more;
	label5->BackColor = Color::Red;
	label6->BackColor = Color::Red;
	label10->BackColor = Color::Green;
}
};
}
