#pragma once

namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
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
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button11;
	private: bool balance_rub = false;
	private: bool balance_dol = false;
	private: bool balance_evro = false;
	private: int stavka = 0;
	private: bool start_game = false;
	private: double kf = 1.00;
	private: double midlle_kf = 0.50;
	private: double priz;
	private: double n = 0.25;
	protected:
		void OnPaint(PaintEventArgs^ e) override
		{
			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::White, 2);
			g->DrawLine(pen, 10, 90, 1050, 90);
			g->DrawLine(pen, 10, 220, 875, 220);
			g->DrawLine(pen, 10, 340, 875, 340);
			g->DrawLine(pen, 10, 460, 1050, 460);
			g->DrawLine(pen, 650, 460, 650, 700);
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Red;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button29->Location = System::Drawing::Point(1261, 47);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(121, 49);
			this->button29->TabIndex = 75;
			this->button29->Text = L"Выбрать";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm5::button29_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->Location = System::Drawing::Point(863, 47);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 49);
			this->button28->TabIndex = 74;
			this->button28->Text = L"Выбрать";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm5::button28_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Red;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button27->Location = System::Drawing::Point(517, 46);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 49);
			this->button27->TabIndex = 73;
			this->button27->Text = L"Выбрать";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm5::button27_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Info;
			this->label9->Location = System::Drawing::Point(305, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 72;
			this->label9->Text = L"Выберите валюту:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1050, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 38);
			this->label3->TabIndex = 71;
			this->label3->Text = L"10000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(700, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 38);
			this->label2->TabIndex = 70;
			this->label2->Text = L"10000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(364, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 38);
			this->label1->TabIndex = 69;
			this->label1->Text = L"10000";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(994, 46);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 68;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(644, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 67;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(308, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 66;
			this->pictureBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(10, 10);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(274, 86);
			this->button26->TabIndex = 65;
			this->button26->Text = L"Назад";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm5::button26_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(10, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(360, 105);
			this->button1->TabIndex = 76;
			this->button1->Text = L"\?\?\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::btn_click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(412, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(360, 105);
			this->button2->TabIndex = 77;
			this->button2->Text = L"\?\?\?";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::btn_click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(817, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(360, 105);
			this->button3->TabIndex = 78;
			this->button3->Text = L"\?\?\?";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::btn_click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SlateBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(10, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(360, 105);
			this->button4->TabIndex = 79;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button_play_game);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(412, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(360, 105);
			this->button5->TabIndex = 80;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button_play_game);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SlateBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(817, 291);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(360, 105);
			this->button6->TabIndex = 81;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button_play_game);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SlateBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(12, 438);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(360, 105);
			this->button7->TabIndex = 82;
			this->button7->Text = L"...";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm5::btn_click2);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SlateBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(412, 438);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(360, 105);
			this->button8->TabIndex = 83;
			this->button8->Text = L"...";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm5::btn_click2);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SlateBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(817, 438);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(360, 105);
			this->button9->TabIndex = 84;
			this->button9->Text = L"...";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm5::btn_click2);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(1200, 148);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(286, 395);
			this->textBox1->TabIndex = 85;
			this->textBox1->Text = L"История :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(17, 762);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 32);
			this->label5->TabIndex = 93;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(215, 669);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(185, 77);
			this->button10->TabIndex = 92;
			this->button10->Text = L"Начать";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm5::button10_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(638, 669);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 77);
			this->button16->TabIndex = 91;
			this->button16->Text = L"+10";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm5::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(744, 669);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 77);
			this->button15->TabIndex = 90;
			this->button15->Text = L"+100";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm5::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(514, 669);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 77);
			this->button14->TabIndex = 89;
			this->button14->Text = L"/2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm5::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(408, 669);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 77);
			this->button13->TabIndex = 88;
			this->button13->Text = L"х2";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm5::button13_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(22, 669);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 77);
			this->textBox2->TabIndex = 87;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(15, 612);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 38);
			this->label4->TabIndex = 86;
			this->label4->Text = L"Введите ставку :";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(923, 612);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(491, 133);
			this->button11->TabIndex = 94;
			this->button11->Text = L"Забрать";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm5::button11_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1498, 858);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
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
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
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
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
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
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
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
		label5->Text = "Введите ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void btn_click(System::Object^ sender, System::EventArgs^ e) {
	label5->Text = "Выберите ячейку уровнем ниже";
	label5->ForeColor = Color::Red;
}
private: System::Void btn_click2(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "Выберите ячейку уровнем выше";
	label5->ForeColor = Color::Red;
}
private: System::Void button_play_game(System::Object^ sender, System::EventArgs^ e)
{
	if (start_game == true)
	{
		Button^ button = safe_cast<Button^>(sender);
		Random^ random = gcnew Random();
		int value = random->Next(1, 4);
		stavka = Convert::ToInt32(textBox2->Text);
		if (value == 1)
		{
			button7->BackColor = Color::Green;
			button7->Text = "";
			button8->BackColor = Color::Red;
			button8->Text = "";
			button9->BackColor = Color::Red;
			button9->Text = "";
		}
		if (value == 2)
		{
			button7->BackColor = Color::Red;
			button7->Text = "";
			button8->BackColor = Color::Green;
			button8->Text = "";
			button9->BackColor = Color::Red;
			button9->Text = "";
		}
		if (value == 3)
		{
			button7->BackColor = Color::Red;
			button7->Text = "";
			button8->BackColor = Color::Red;
			button8->Text = "";
			button9->BackColor = Color::Green;
			button9->Text = "";
		}
		if (button->Text == "1")
		{
			if (value == Convert::ToInt32(button->Text))
			{
				priz = kf + midlle_kf;
				label5->Text = "Возможный выйгрыш   " + priz;
				label5->ForeColor = Color::Green;
				n += 0.5;
				midlle_kf += n;
				button11->Visible = true;
			}
			else
			{
				label5->Text = "Вы проиграли   " + stavka;
				label5->ForeColor = Color::Red;
				textBox1->Text += "\r\nПроигрыш - " + stavka;
				midlle_kf = 0.50;
				n = 0.25;
				button11->Visible = false;
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
			}
		}
		if (button->Text == "2")
		{
			if (value == Convert::ToInt32(button->Text))
			{
				priz = kf + midlle_kf;
				label5->Text = "Возможный выйгрыш   " + priz;
				label5->ForeColor = Color::Green;
				n += 0.5;
				midlle_kf += n;
				button11->Visible = true;
			}
			else
			{
				label5->Text = "Вы проиграли   " + stavka;
				label5->ForeColor = Color::Red;
				textBox1->Text += "\r\nПроигрыш - " + stavka;
				midlle_kf = 0.50;
				n = 0.25;
				button11->Visible = false;
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
			}
		}
		if (button->Text == "3")
		{
			if (value == Convert::ToInt32(button->Text))
			{
				priz = kf + midlle_kf;
				label5->Text = "Возможный выйгрыш   " + priz;
				label5->ForeColor = Color::Green;
				n += 0.5;
				midlle_kf += n;
				button11->Visible = true;
			}
			else
			{
				label5->Text = "Вы проиграли   " + stavka;
				label5->ForeColor = Color::Red;
				textBox1->Text += "\r\nПроигрыш - " + stavka;
				midlle_kf = 0.50;
				n = 0.25;
				button11->Visible = false;
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
			}
		}
	}
	else
	{
		label5->Text = "Нажмите начать";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "")
	{
		if (balance_rub == true || balance_dol == true || balance_evro == true)
		{
			int balance;
			if (balance_rub == true)
			{
				balance = Convert::ToInt32(label1->Text);
			}
			if (balance_dol == true)
			{
				balance = Convert::ToInt32(label2->Text);
			}
			if (balance_evro == true)
			{
				balance = Convert::ToInt32(label3->Text);
			}
			stavka = Convert::ToInt32(textBox2->Text);
			if (stavka < balance)
			{
				start_game = true;
				label5->Text = "Игра начата";
				label5->ForeColor = Color::Green;
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
		label5->Text = "Сделайте ставку";
		label5->ForeColor = Color::Red;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "\r\nВыйгрыш - " + (priz * stavka);
	label5->Text = "Вы выйграли : " + (priz * stavka);
	label5->ForeColor = Color::Green;
	midlle_kf = 0.50;
	n = 0.25;
	button11->Visible = false;
	if (balance_rub == true)
	{
		int balance = Convert::ToInt32(label1->Text);
		balance += (priz * stavka) - stavka;
		label1->Text = Convert::ToString(balance);
	}
	if (balance_dol == true)
	{
		int balance = Convert::ToInt32(label2->Text);
		balance += (priz * stavka) - stavka;
		label2->Text = Convert::ToString(balance);
	}
	if (balance_evro == true)
	{
		int balance = Convert::ToInt32(label3->Text);
		balance += (priz * stavka) - stavka;
		label3->Text = Convert::ToString(balance);
	}
}
};
}
