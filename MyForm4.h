#pragma once

namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	enum check_var
	{
		var_orel,
		var_reshka,
		off
	};
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
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
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: bool balance_rub = false;
	private: bool balance_dol = false;
	private: bool balance_evro = false;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: int stavka = 0;
	private: int var = check_var::off;
	private: double full_kf = 1.00;
	private: double middle_kf = 0.50;
	private: int bal = 0;
	protected:
		void OnPaint(PaintEventArgs^ e) override
		{
			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::White, 2);
			g->DrawLine(pen, 10, 90, 1050, 90);
			g->DrawLine(pen, 430, 90, 430, 520);
			g->DrawLine(pen, 450, 275, 1050, 275);
			g->DrawLine(pen, 10, 520, 430, 520);
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Red;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(1256, 46);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(121, 49);
			this->button29->TabIndex = 64;
			this->button29->Text = L"Выбрать";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm4::button29_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(858, 46);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 49);
			this->button28->TabIndex = 63;
			this->button28->Text = L"Выбрать";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm4::button28_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Red;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(512, 45);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 49);
			this->button27->TabIndex = 62;
			this->button27->Text = L"Выбрать";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm4::button27_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Info;
			this->label9->Location = System::Drawing::Point(300, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Выберите валюту:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1045, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 38);
			this->label3->TabIndex = 60;
			this->label3->Text = L"10000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(695, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 38);
			this->label2->TabIndex = 59;
			this->label2->Text = L"10000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(359, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 38);
			this->label1->TabIndex = 58;
			this->label1->Text = L"10000";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(989, 45);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 57;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(639, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(303, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(5, 9);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(274, 86);
			this->button26->TabIndex = 54;
			this->button26->Text = L"Назад";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm4::button26_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(24, 138);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(516, 485);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 65;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(24, 138);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(516, 485);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 66;
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(594, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 38);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Введите ставку :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(601, 195);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 77);
			this->textBox1->TabIndex = 68;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(1217, 195);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 77);
			this->button16->TabIndex = 72;
			this->button16->Text = L"+10";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm4::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(1323, 195);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 77);
			this->button15->TabIndex = 71;
			this->button15->Text = L"+100";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm4::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(1093, 195);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 77);
			this->button14->TabIndex = 70;
			this->button14->Text = L"/2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm4::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(987, 195);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 77);
			this->button13->TabIndex = 69;
			this->button13->Text = L"х2";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm4::button13_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(794, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 77);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(601, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(376, 92);
			this->button2->TabIndex = 74;
			this->button2->Text = L"Орёл";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1047, 370);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(376, 92);
			this->button3->TabIndex = 75;
			this->button3->Text = L"Решка";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(596, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 32);
			this->label5->TabIndex = 76;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(1047, 487);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(376, 293);
			this->textBox2->TabIndex = 77;
			this->textBox2->Text = L"История :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(34, 660);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(319, 32);
			this->label6->TabIndex = 78;
			this->label6->Text = L"Текущий коэффицент :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(483, 660);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(361, 32);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Следующий коэффицент :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(144, 712);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 32);
			this->label8->TabIndex = 80;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(595, 712);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 32);
			this->label10->TabIndex = 81;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(603, 503);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(376, 92);
			this->button4->TabIndex = 82;
			this->button4->Text = L"Забрать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(34, 772);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 32);
			this->label11->TabIndex = 83;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(412, 772);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 32);
			this->label12->TabIndex = 84;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(971, 370);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 92);
			this->label13->TabIndex = 85;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(1418, 370);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 92);
			this->label14->TabIndex = 86;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1479, 829);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
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
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	if (textBox1->Text != "")
	{
		stavka = Convert::ToInt32(textBox1->Text);
		stavka *= 2;
		textBox1->Text = Convert::ToString(stavka);
	}
	else
	{
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		stavka = Convert::ToInt32(textBox1->Text);
		stavka /= 2;
		textBox1->Text = Convert::ToString(stavka);
	}
	else
	{
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		stavka = Convert::ToInt32(textBox1->Text);
		stavka += 10;
		textBox1->Text = Convert::ToString(stavka);
	}
	else
	{
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		stavka = Convert::ToInt32(textBox1->Text);
		stavka += 100;
		textBox1->Text = Convert::ToString(stavka);
	}
	else
	{
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label13->BackColor = Color::Green;
	label14->BackColor = Color::Red;
	var = check_var::var_orel;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label13->BackColor = Color::Red;
	label14->BackColor = Color::Green;
	var = check_var::var_reshka;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		stavka = Convert::ToInt32(textBox1->Text);
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
			if (bal >= stavka)
			{
				if (var != check_var::off)
				{
					label5->Text = "Ставка принята";
					label5->ForeColor = Color::Green;
					Random^ random = gcnew Random();
					int image = random->Next(1, 3);
					double n = 0.25;
					full_kf += middle_kf;
					label8->Text = Convert::ToString(full_kf);
					middle_kf += n;
					n += 0.25;
					label10->Text = Convert::ToString(full_kf + middle_kf);
					if (image == 1)
					{
						pictureBox4->Visible = true;
						pictureBox5->Visible = false;
					}
					if (image == 2)
					{
						pictureBox5->Visible = true;
						pictureBox4->Visible = false;
					}
					if (var == check_var::var_orel)
					{
						if (image == 1)
						{
							label11->Text = "Возможный выйгрыш";
							label11->ForeColor = Color::Green;
							button4->Visible = true;
							label12->Text = Convert::ToString(stavka * full_kf);
							label12->ForeColor = Color::Green;
						}
						else
						{
							label11->Text = "Вы проиграли";
							label11->ForeColor = Color::Red;
							label12->Text = Convert::ToString(stavka);
							label12->ForeColor = Color::Red;
							if (balance_rub == true)
							{
								int balance = Convert::ToInt32(label1->Text);
								balance -= stavka;
								label1->Text = Convert::ToString(balance);
							}
							if (balance_dol == true)
							{
								int balance = Convert::ToInt32(label2->Text);
								balance -= stavka;
								label2->Text = Convert::ToString(balance);
							}
							if (balance_evro == true)
							{
								int balance = Convert::ToInt32(label3->Text);
								balance -= stavka;
								label3->Text = Convert::ToString(balance);
							}
							textBox2->Text += "\r\nПроигрыш - " + stavka;
							button4->Visible = false;
							full_kf = 1.00;
							middle_kf = 0.50;
						}
					}
					if (var == check_var::var_reshka)
					{
						if (image == 1)
						{
							label11->Text = "Вы проиграли";
							label11->ForeColor = Color::Red;
							label12->Text = Convert::ToString(stavka);
							label12->ForeColor = Color::Red;
							if (balance_rub == true)
							{
								int balance = Convert::ToInt32(label1->Text);
								balance -= stavka;
								label1->Text = Convert::ToString(balance);
							}
							if (balance_dol == true)
							{
								int balance = Convert::ToInt32(label2->Text);
								balance -= stavka;
								label2->Text = Convert::ToString(balance);
							}
							if (balance_evro == true)
							{
								int balance = Convert::ToInt32(label3->Text);
								balance -= stavka;
								label3->Text = Convert::ToString(balance);
							}
							textBox2->Text += "\r\nПроигрыш - " + stavka;
							button4->Visible = false;
							full_kf = 1.00;
							middle_kf = 0.50;
						}
						else
						{
							label11->Text = "Возможный выйгрыш";
							label11->ForeColor = Color::Green;
							button4->Visible = true;
							label12->Text = Convert::ToString(stavka * full_kf);
							label12->ForeColor = Color::Green;
						}
					}
				}
				else
				{
					label5->Text = "Выберите исход ( Орел или Решка)";
					label5->ForeColor = Color::Red;
				}
			}
			else
			{
				label5->Text = "Недостаточно средств";
				label5->ForeColor = Color::Red;
			}
		}
		else
		{
			label5->Text = "Выберите валюту";
			label5->ForeColor = Color::Red;
		}
	}
	else
	{
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (balance_rub == true)
	{
		int balance = Convert::ToInt32(label1->Text);
		int priz = (stavka * full_kf) - stavka;
		balance += priz;
		label1->Text = Convert::ToString(balance);
	}
	if (balance_dol == true)
	{
		int balance = Convert::ToInt32(label2->Text);
		int priz = (stavka * full_kf) - stavka;
		balance += priz;
		label2->Text = Convert::ToString(balance);
	}
	if (balance_evro == true)
	{
		int balance = Convert::ToInt32(label3->Text);
		int priz = (stavka * full_kf) - stavka;
		balance += priz;
		label3->Text = Convert::ToString(balance);
	}
	textBox2->Text += "\r\nВыйгрыш - " + (stavka * full_kf);
	full_kf = 1.00;
	middle_kf = 0.50;
	button4->Visible = false;
}
};
}
