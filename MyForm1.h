#pragma once
#include <Windows.h>
namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	enum check_stavka
	{
		var_red,
		var_black,
		var_1_18,
		var_19_36,
		var_1_12,
		var_13_24,
		var_25_36,
		var_chet,
		var_ne_chet,
		var_0
	};
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8; 
	private: int stavka;
	private: bool check_pol = false;
	private: bool check_third = false;
	private: bool check_color = false;
	private: bool check_chet = false;
	private: bool check_0 = false;
	private: int stavka_pol;
	private: int stavka_third;
	private: int stavka_color;
	private: int stavka_chet;
	private: int stavka_0;
	private: bool wallet_rub = false;
	private: bool wallet_evr = false;
	private: bool wallet_dol = false;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 86);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(310, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(646, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(996, 48);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(366, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 38);
			this->label1->TabIndex = 4;
			this->label1->Text = L"10000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(702, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"10000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1052, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"10000";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(948, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(436, 77);
			this->button2->TabIndex = 7;
			this->button2->Text = L"19-36 (х2)";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(490, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(436, 77);
			this->button3->TabIndex = 8;
			this->button3->Text = L"1-18 (х2)";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SlateBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(490, 237);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(295, 77);
			this->button4->TabIndex = 9;
			this->button4->Text = L"1-12 (х3)";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(797, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(290, 77);
			this->button5->TabIndex = 10;
			this->button5->Text = L"13-24 (х3)";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SlateBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(1094, 237);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(290, 77);
			this->button6->TabIndex = 11;
			this->button6->Text = L"25-36 (х3)";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(490, 335);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(436, 77);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Чётное (х2)";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(948, 335);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(436, 77);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Нечётное (х2)";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(490, 439);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(369, 77);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Красное (х2)";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(1015, 439);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(369, 77);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Чёрное (х2)";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(865, 439);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(144, 77);
			this->button11->TabIndex = 16;
			this->button11->Text = L"0 (х36)";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(490, 578);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 77);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(484, 534);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(292, 32);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Введите вашу ставку";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(743, 578);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(199, 77);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Вращать";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(948, 578);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 77);
			this->button13->TabIndex = 20;
			this->button13->Text = L"х2";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(1054, 578);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 77);
			this->button14->TabIndex = 21;
			this->button14->Text = L"/2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(1284, 578);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 77);
			this->button15->TabIndex = 22;
			this->button15->Text = L"+100";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(1178, 578);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 77);
			this->button16->TabIndex = 23;
			this->button16->Text = L"+10";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm1::button16_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(46, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(402, 520);
			this->label5->TabIndex = 24;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(66, 686);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 38);
			this->label6->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(366, 686);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 38);
			this->label7->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(825, 529);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 38);
			this->label8->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(307, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Выберите валюту:";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Red;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(519, 48);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(121, 49);
			this->button17->TabIndex = 29;
			this->button17->Text = L"Выбрать";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(865, 49);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(121, 49);
			this->button18->TabIndex = 30;
			this->button18->Text = L"Выбрать";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Red;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(1263, 49);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(121, 49);
			this->button19->TabIndex = 31;
			this->button19->Text = L"Выбрать";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm1::button19_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(865, 661);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(519, 172);
			this->textBox2->TabIndex = 32;
			this->textBox2->Text = L"Ваша ставки :";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(490, 661);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(369, 172);
			this->textBox3->TabIndex = 33;
			this->textBox3->Text = L"История :";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1415, 845);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int balance_rub = Convert::ToInt32(label1->Text);
	int balance_dl = Convert::ToInt32(label2->Text);
	int balance_evro = Convert::ToInt32(label3->Text);
	int priz = 0;
	int all_stavka = 0;
	if (wallet_rub == false && wallet_dol == false && wallet_evr == false)
	{
		label8->Text = "выберите валюту";
		label8->ForeColor = Color::Red;
	}
	else
	{
		if (textBox1->Text == "")
		{
			label8->Text = "выберите сумму ставки";
			label8->ForeColor = Color::Red;
		}
		else if (check_0 == true || check_chet == true || check_color == true || check_pol == true || check_third == true)
		{
			stavka = Convert::ToInt32(textBox1->Text);
			if (stavka > balance_rub)
			{
				label8->Text = "недостаточно средств на балансе";
				label8->ForeColor = Color::Red;
			}
			else
			{
				Random^ random = gcnew Random();
				int num = random->Next(0, 36);
				if (num == 0)
				{
					label5->Text = Convert::ToString(num);
					label5->BackColor = Color::Green;
					label5->ForeColor = Color::White;
				}
				else if (num % 2 == 0)
				{
					label5->Text = Convert::ToString(num);
					label5->BackColor = Color::Red;
					label5->ForeColor = Color::Black;
				}
				else if (num % 2 == 1)
				{
					label5->Text = Convert::ToString(num);
					label5->BackColor = Color::Black;
					label5->ForeColor = Color::Red;
				}
				if (check_0 == true)
				{
					all_stavka += stavka;
					if (num == 0)
					{
						priz += stavka * 36;
					}
					check_0 = false;
				}
				if (check_chet == true)
				{
					all_stavka += stavka;
					if (stavka_chet == check_stavka::var_chet)
					{
						if (num % 2 == 0 && num != 0)
						{
							priz += stavka * 2;
						}
					}
					if (stavka_chet == check_stavka::var_ne_chet)
					{
						if (num % 2 == 1 && num != 0)
						{
							priz += stavka * 2;
						}
					}
					check_chet = false;
				}
				if (check_color == true)
				{
					all_stavka += stavka;
					if (stavka_color == check_stavka::var_red)
					{
						if (num % 2 == 0 && num != 0)
						{
							priz += stavka * 2;
						}
					}
					if (stavka_color == check_stavka::var_black)
					{
						if (num % 2 == 1 && num != 0)
						{
							priz += stavka * 2;
						}
					}
					check_color = false;
				}
				if (check_pol == true)
				{
					all_stavka += stavka;
					if (stavka_pol == check_stavka::var_1_18)
					{
						if (num >= 1 && num <= 18)
						{
							priz += stavka * 2;
						}
					}
					if (stavka_pol == check_stavka::var_19_36)
					{
						if (num >= 19 && num <= 36)
						{
							priz += stavka * 2;
						}
					}
					check_pol = false;
				}
				if (check_third == true)
				{
					all_stavka += stavka;
					if (stavka_third == check_stavka::var_1_12)
					{
						if (num >= 1 && num <= 12)
						{
							priz += stavka * 3;
						}
					}
					if (stavka_third == check_stavka::var_13_24)
					{
						if (num >= 13 && num <= 24)
						{
							priz += stavka * 3;
						}
					}
					if (stavka_third == check_stavka::var_25_36)
					{
						if (num >= 25 && num <= 36)
						{
							priz += stavka * 3;
						}
					}
					check_third = false;
				}
				if (wallet_rub == true)
				{
					balance_rub -= all_stavka;
					balance_rub += priz;
					label1->Text = Convert::ToString(balance_rub);
				}
				else if (wallet_dol == true)
				{
					balance_dl -= all_stavka;
					balance_dl += priz;
					label2->Text = Convert::ToString(balance_dl);
				}
				else if (wallet_evr == true)
				{
					balance_evro -= all_stavka;
					balance_evro += priz;
					label3->Text = Convert::ToString(balance_evro);
				}
				if (all_stavka <= priz)
				{
					label6->Text = "вы выйграли";
					label7->Text = Convert::ToString(priz);
					label6->ForeColor = Color::Green;
					label7->ForeColor = Color::Green;
					textBox3->Text += "\r\nВыйгрыш :" + priz;
				}
				else
				{
					label6->Text = "вы проиграли";
					label7->Text = Convert::ToString(all_stavka - priz);
					label6->ForeColor = Color::Red;
					label7->ForeColor = Color::Red;
					textBox3->Text += "\r\nПройгрыш :" + (all_stavka - priz);
				}
				textBox2->Text = "Ваши ставки:";
			}
		}
		else
		{
			label8->Text = "Выберите ставку";
			label8->ForeColor = Color::Red;
		}
	}
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
		label8->Text = "сначала сделайте ставку";
		label8->ForeColor = Color::Red;
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
		label8->Text = "сначала сделайте ставку";
		label8->ForeColor = Color::Red;
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
		label8->Text = "сначала сделайте ставку";
		label8->ForeColor = Color::Red;
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
		label8->Text = "сначала сделайте ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_pol == false)
	{
		check_pol = true;
		stavka_pol = check_stavka::var_1_18;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\n1-18   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_pol == false)
	{
		check_pol = true;
		stavka_pol = check_stavka::var_19_36;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\n19-36   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_third == false)
	{
		check_third = true;
		stavka_third = check_stavka::var_1_12;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\n1-12   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_third == false)
	{
		check_third = true;
		stavka_third = check_stavka::var_13_24;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\n13-24   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_third == false)
	{
		check_third = true;
		stavka_third = check_stavka::var_25_36;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\n25-36   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_chet == false)
	{
		check_chet = true;
		stavka_chet = check_stavka::var_chet;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\nЧетное   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_chet == false)
	{
		check_chet = true;
		stavka_chet = check_stavka::var_ne_chet;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\nНечетное   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_color == false)
	{
		check_color = true;
		stavka_color = check_stavka::var_red;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\nКрасное   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_color == false)
	{
		check_color = true;
		stavka_color = check_stavka::var_black;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\nЧерное   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделали ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check_0 == false)
	{
		check_0 = true;
		stavka_0 = check_stavka::var_0;
		label8->Text = "ставка принята";
		label8->ForeColor = Color::Green;
		textBox2->Text += "\r\nНа 0   сумма : " + stavka;
	}
	else
	{
		label8->Text = "вы уже сделал ставку";
		label8->ForeColor = Color::Red;
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	wallet_rub = true;
	wallet_evr = false;
	wallet_dol = false;
	button17->Text = "Выбрано";
	button18->Text = "Выбрать";
	button19->Text = "Выбрать";
	button17->BackColor = Color::Green;
	button18->BackColor = Color::Red;
	button19->BackColor = Color::Red;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	wallet_rub = false;
	wallet_evr = false;
	wallet_dol = true;
	button17->Text = "Выбрать";
	button18->Text = "Выбрано";
	button19->Text = "Выбрать";
	button17->BackColor = Color::Red;
	button18->BackColor = Color::Green;
	button19->BackColor = Color::Red;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	wallet_rub = false;
	wallet_evr = true;
	wallet_dol = false;
	button17->Text = "Выбрать";
	button18->Text = "Выбрать";
	button19->Text = "Выбрано";
	button17->BackColor = Color::Red;
	button18->BackColor = Color::Red;
	button19->BackColor = Color::Green;
}
};
}

