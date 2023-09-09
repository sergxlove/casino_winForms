#pragma once

namespace casinowinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(200, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите промокод";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 64);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(101, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(555, 34);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(497, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 64);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Применить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm11::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(28, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 38);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите промокод";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(35, 262);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(35, 318);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(35, 374);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(121, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 42);
			this->label3->TabIndex = 8;
			this->label3->Text = L"10000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(121, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 42);
			this->label4->TabIndex = 9;
			this->label4->Text = L"10000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(121, 382);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 42);
			this->label5->TabIndex = 10;
			this->label5->Text = L"10000";
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(745, 449);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "balance.txt";
	StreamWriter^ file = gcnew StreamWriter(fileName);
	file->WriteLine(label3->Text);
	file->WriteLine(label4->Text);
	file->WriteLine(label5->Text);
	file->Close();
	this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		String^ promocod;
		promocod = textBox1->Text;
		int balance = 0;
		bool check_promocod = false;
		if (promocod == "free")
		{
			balance = Convert::ToInt32(label3->Text);
			balance += 1000;
			label3->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (promocod == "getbronze")
		{
			balance = Convert::ToInt32(label3->Text);
			balance += 10000;
			label3->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (promocod == "getsilver")
		{
			balance = Convert::ToInt32(label4->Text);
			balance += 10000;
			label4->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (promocod == "getgold")
		{
			balance = Convert::ToInt32(label5->Text);
			balance += 10000;
			label5->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (promocod == "getall")
		{
			balance = Convert::ToInt32(label3->Text);
			balance += 10000;
			label3->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			balance = Convert::ToInt32(label4->Text);
			balance += 10000;
			label4->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			balance = Convert::ToInt32(label5->Text);
			balance += 10000;
			label5->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (promocod == "getmore")
		{
			balance = Convert::ToInt32(label3->Text);
			balance += 100000;
			label3->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			balance = Convert::ToInt32(label4->Text);
			balance += 100000;
			label4->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			balance = Convert::ToInt32(label5->Text);
			balance += 100000;
			label5->Text = Convert::ToString(balance);
			label2->Text = "Промокод активирован";
			label2->ForeColor = Color::Green;
			check_promocod = true;
		}
		if (check_promocod == false)
		{
			label2->Text = "Промокод не найден";
			label2->ForeColor = Color::Red;
		}
		textBox1->Text = "";
	}
}
private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "balance.txt";
	StreamReader^ file = gcnew StreamReader(fileName);
	String^ line;
	line = file->ReadLine();
	label3->Text = line;
	line = file->ReadLine();
	label4->Text = line;
	line = file->ReadLine();
	label5->Text = line;
	file->Close();
}
};
}
