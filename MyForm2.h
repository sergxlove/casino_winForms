#pragma once
namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button29;
	protected:

	private: System::Windows::Forms::Button^ button28;
	protected:

	private: System::Windows::Forms::Button^ button27;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ label14;
	private: bool completion = false;
	private: int* bomb;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->button29->Location = System::Drawing::Point(1263, 49);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(121, 49);
			this->button29->TabIndex = 42;
			this->button29->Text = L"Выбрать";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(865, 49);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(121, 49);
			this->button28->TabIndex = 41;
			this->button28->Text = L"Выбрать";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Red;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(519, 48);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(121, 49);
			this->button27->TabIndex = 40;
			this->button27->Text = L"Выбрать";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Info;
			this->label9->Location = System::Drawing::Point(307, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 29);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Выберите валюту:";
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
			this->label3->TabIndex = 38;
			this->label3->Text = L"10000";
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
			this->label2->TabIndex = 37;
			this->label2->Text = L"10000";
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
			this->label1->TabIndex = 36;
			this->label1->Text = L"10000";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(996, 48);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 35;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(646, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 34;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(310, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(12, 12);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(274, 86);
			this->button26->TabIndex = 32;
			this->button26->Text = L"Назад";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(613, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(373, 32);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Введите количество бомб :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(1019, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 38);
			this->textBox1->TabIndex = 69;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(1000, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 32);
			this->label5->TabIndex = 70;
			this->label5->Text = L"Мин 1 - Макс 24";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(613, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(292, 32);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Введите вашу ставку";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(619, 290);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 77);
			this->textBox2->TabIndex = 72;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(1224, 290);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(100, 77);
			this->button30->TabIndex = 77;
			this->button30->Text = L"+10";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(1330, 290);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(100, 77);
			this->button31->TabIndex = 76;
			this->button31->Text = L"+100";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(1100, 290);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(100, 77);
			this->button32->TabIndex = 75;
			this->button32->Text = L"/2";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(994, 290);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(100, 77);
			this->button33->TabIndex = 74;
			this->button33->Text = L"х2";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(788, 290);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(199, 77);
			this->button34->TabIndex = 73;
			this->button34->Text = L"Поставить";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(613, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(319, 32);
			this->label7->TabIndex = 78;
			this->label7->Text = L"Текущий коэффицент :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(1053, 437);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(361, 32);
			this->label8->TabIndex = 79;
			this->label8->Text = L"Следующий коэффицент :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(703, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 32);
			this->label10->TabIndex = 80;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(1165, 483);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 32);
			this->label11->TabIndex = 81;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(6, 772);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 32);
			this->label12->TabIndex = 82;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(466, 772);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(108, 32);
			this->label13->TabIndex = 83;
			this->label13->Text = L"label13";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox3->Location = System::Drawing::Point(619, 524);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(475, 232);
			this->textBox3->TabIndex = 84;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox4->Location = System::Drawing::Point(1113, 524);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(317, 232);
			this->textBox4->TabIndex = 85;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 90);
			this->button1->TabIndex = 86;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 90);
			this->button2->TabIndex = 87;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(260, 124);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 90);
			this->button3->TabIndex = 88;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(383, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 90);
			this->button4->TabIndex = 89;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(504, 124);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 90);
			this->button5->TabIndex = 90;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 255);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 90);
			this->button6->TabIndex = 91;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(137, 255);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 90);
			this->button7->TabIndex = 92;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(260, 255);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 90);
			this->button8->TabIndex = 93;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(383, 255);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 90);
			this->button9->TabIndex = 94;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(504, 255);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 90);
			this->button10->TabIndex = 95;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 390);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 90);
			this->button11->TabIndex = 96;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(137, 390);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 90);
			this->button12->TabIndex = 97;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(260, 390);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 90);
			this->button13->TabIndex = 98;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(383, 390);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 90);
			this->button14->TabIndex = 99;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(504, 390);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 90);
			this->button15->TabIndex = 100;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(12, 524);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 90);
			this->button16->TabIndex = 101;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(137, 524);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 90);
			this->button17->TabIndex = 102;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(260, 524);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 90);
			this->button18->TabIndex = 103;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(383, 524);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 90);
			this->button19->TabIndex = 104;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(504, 524);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 90);
			this->button20->TabIndex = 105;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(12, 656);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(90, 90);
			this->button21->TabIndex = 106;
			this->button21->Text = L"21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(137, 656);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(90, 90);
			this->button22->TabIndex = 107;
			this->button22->Text = L"22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(260, 656);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(90, 90);
			this->button23->TabIndex = 108;
			this->button23->Text = L"23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(383, 656);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 90);
			this->button24->TabIndex = 109;
			this->button24->Text = L"24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(504, 656);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 90);
			this->button25->TabIndex = 110;
			this->button25->Text = L"25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm2::btn_Check);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(613, 390);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 32);
			this->label14->TabIndex = 111;
			this->label14->Text = L"label14";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1445, 893);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
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
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void btn_Check(System::Object^ sender, System::EventArgs^ e)
	{
		bool have_bomb = false;
		int min = Convert::ToInt32(textBox1->Text);
		int min_for_check = min;
		if (completion==false)
		{
			bomb = new int[min];
		}
		if (textBox1->Text != "")
		{
			if (textBox2->Text != "")
			{
				Button^ button = safe_cast<Button^>(sender);
				Random^ random = gcnew Random();
				if (completion == false)
				{
					label14->Text = "Ставка принята";
					label14->ForeColor = Color::Green;
					bool unicue_value;
					int k = 0;
					for (int i = 0;min!=0;)
					{
						int value = random->Next(1, 26);
						unicue_value = false;
						for (int j = 0;j < k;j++)
						{
							if (bomb[j] == value)
							{
								unicue_value = true;
							}
						}
						if (unicue_value == false)
						{
							bomb[i] = value;
							i++;
							k++;
							min--;
						}
					}
					completion = true;
				}
				for (int i = 0;i < min_for_check;i++)
				{
					if (bomb[i] == Convert::ToInt32(button->Text))
					{
						have_bomb = true;
					}
				}
				if (have_bomb == true)
				{
					button->Text = "*";
					button->BackColor = Color::Red;
				}
				else
				{
					button->Text = "$";
					button->BackColor = Color::Green;
				}

			}
			else
			{
				label14->Text = "Сделайте ставку";
				label14->ForeColor = Color::Red;
			}
		}
		else
		{
			label14->Text = "Выберите количество мин";
			label14->ForeColor = Color::Red;
		}
	}
};
}
