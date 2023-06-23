

#pragma once
//-------------------------------------
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>

namespace Supermarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	using namespace System::Collections::Generic;
	//------------------------------------------

	/// <summary>
	/// Summary for Adminwork
	/// </summary>
	public ref class Adminwork : public System::Windows::Forms::Form
	{
	public:
		int pcount;

		Adminwork(void)
		{
			InitializeComponent();

			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("data1.txt");

			// Check if the file is empty
			if (reader->Peek() == -1)
			{
				// File is empty
				Console::WriteLine("The file is empty.");
			}
			else
			{
				// File is not empty

				// Read each line and add product data to the list
				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();
					array<String^>^ productData = line->Split(',');

					if (productData->Length >= 5)
					{
						String^ code = productData[0];
						String^ name = productData[1];
						String^ price = productData[2];
						String^ discount = productData[3];
						String^ quantity = productData[4];

						System::Tuple<String^, String^, String^, String^, String^>^ productTuple =
							gcnew System::Tuple<String^, String^, String^, String^, String^>(code, name, price, discount, quantity);

						products->Add(productTuple);
					}
				}

				// Close the reader
				reader->Close();
			}

			
			//
			//TODO: Add the constructor code here
			//
			
			panel1->Visible = false;
			panel2->Visible = false;
			panel3->Visible = false;
			panel4->Visible = false;
			panel5->Visible = false;
	
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Adminwork()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminwork::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(76, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(370, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add the product";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Adminwork::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(76, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(370, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modify the product";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Adminwork::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(76, 343);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(370, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Delete the product";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Adminwork::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(76, 503);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(370, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"List of the product";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Adminwork::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(622, 148);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(601, 470);
			this->panel1->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(367, 312);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(198, 28);
			this->textBox5->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(367, 250);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 28);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(367, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 28);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(367, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 28);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(367, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 28);
			this->textBox1->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(246, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 58);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Add";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Adminwork::button6_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Discount on product";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Price of the product";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name of the product";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product code of the product";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(76, 662);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(370, 70);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Adminwork::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(622, 102);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(601, 554);
			this->panel2->TabIndex = 6;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(205, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(177, 55);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Check";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Adminwork::button9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(40, 415);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 26);
			this->label11->TabIndex = 12;
			this->label11->Text = L"New quantity";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox11->Location = System::Drawing::Point(350, 415);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(198, 28);
			this->textBox11->TabIndex = 11;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox10->Location = System::Drawing::Point(350, 353);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(198, 28);
			this->textBox10->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox9->Location = System::Drawing::Point(350, 278);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(198, 28);
			this->textBox9->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox8->Location = System::Drawing::Point(350, 211);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(198, 28);
			this->textBox8->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(227, 74);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 46);
			this->textBox6->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(216, 468);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(166, 64);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Modify";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Adminwork::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(40, 353);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(259, 26);
			this->label10->TabIndex = 4;
			this->label10->Text = L"New discount on product";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(40, 278);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(258, 26);
			this->label9->TabIndex = 3;
			this->label9->Text = L"New price of the product";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(40, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"New name of the product";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(125, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(332, 42);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Enter product code";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PowderBlue;
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->textBox12);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Location = System::Drawing::Point(610, 240);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(625, 253);
			this->panel3->TabIndex = 7;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(207, 168);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(175, 55);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Delete";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Adminwork::button8_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(228, 90);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(134, 46);
			this->textBox12->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(145, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(332, 42);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Enter product code";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::PowderBlue;
			this->panel4->Controls->Add(this->tableLayoutPanel1);
			this->panel4->Location = System::Drawing::Point(558, 105);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(677, 603);
			this->panel4->TabIndex = 8;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				78)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Size = System::Drawing::Size(78, 43);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::PowderBlue;
			this->panel5->Controls->Add(this->tableLayoutPanel2);
			this->panel5->Location = System::Drawing::Point(558, 43);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(677, 67);
			this->panel5->TabIndex = 9;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel2->ColumnCount = 6;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45.28302F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				54.71698F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				171)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				94)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				95)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				79)));
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(17, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(638, 64);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// Adminwork
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1286, 744);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Adminwork";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adminwork";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		panel1->Visible = !panel1->Visible;


	}

		   //modify panel show button
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox6->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
		panel2->Visible = !panel2->Visible;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Visible = !panel3->Visible;

	}
		   //all list button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		tableLayoutPanel1->Controls->Clear();
		tableLayoutPanel2->Controls->Clear();

		//display the content
		// tableLayoutPanel1
		this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
		this->tableLayoutPanel1->ColumnCount = 6;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			70)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			130)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			70)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			70)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			70)));
		//this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			//89)));

		this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tableLayoutPanel1->Location = System::Drawing::Point(11, 0);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = (products->Count);
		for (int i = 1; i <= (products->Count + 1); i++) {
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		}
			
		this->tableLayoutPanel1->Size = System::Drawing::Size(485, 55*(products->Count));
		this->tableLayoutPanel1->TabIndex = 0;


		int totalProducts = products->Count;
		int count = 1;

		//tableLayoutPanel2->Controls->Clear();
		String^ serialf = "Serial no.";
		Label^ serialff = gcnew Label();
		serialff->Text = serialf;
		serialff->AutoSize = true;
		

		String^ pp = "Product code";
		Label^ p = gcnew Label();
		p->Text = pp;
		p->AutoSize = true;

		String^ nn = "Product name";
		Label^ n = gcnew Label();
		n->Text = nn;
		n->AutoSize = true;


		String^ pr = "Price";
		Label^ pi = gcnew Label();
		pi->Text = pr;
		pi->AutoSize = true;

		String^ dd = "Discount";
		Label^ d = gcnew Label();
		d->Text = dd;
		d->AutoSize = true;


		String^ qq = "Quantity";
		Label^ q = gcnew Label();
		q->Text = qq;
		q->AutoSize = true;

		tableLayoutPanel2->Controls->Add(serialff, 0, 0);
		tableLayoutPanel2->Controls->Add(p, 1, 0);
		tableLayoutPanel2->Controls->Add(n, 2, 0);
		tableLayoutPanel2->Controls->Add(pi, 3, 0);
		tableLayoutPanel2->Controls->Add(d, 4, 0);
		tableLayoutPanel2->Controls->Add(q, 5, 0);

		
		//------------------------------------------------------------------

		// Create and add labels for each product in the TableLayoutPanel
		for (int i = 0; i < totalProducts; i++) {

			String^ code = products[i]->Item1;
			String^ name = products[i]->Item2;
			String^ price = products[i]->Item3;
			String^ discount = products[i]->Item4;
			String^ quantity = products[i]->Item5;

			// Create a label for the count
			Label^ countLabel = gcnew Label();
			countLabel->Text = count.ToString(); // Convert count to a string
			countLabel->AutoSize = true;

			// Create a label for the code
			Label^ codeLabel = gcnew Label();
			codeLabel->Text = code;
			codeLabel->AutoSize = true;

			// Create a label for the name
			Label^ nameLabel = gcnew Label();
			nameLabel->Text = name;
			nameLabel->AutoSize = true;

			// Create a label for the price
			Label^ priceLabel = gcnew Label();
			priceLabel->Text = price;
			priceLabel->AutoSize = true;

			// Create a label for the discount
			Label^ discountLabel = gcnew Label();
			discountLabel->Text = discount;
			discountLabel->AutoSize = true;

			// Create a label for the quantity
			Label^ quantityLabel = gcnew Label();
			quantityLabel->Text = quantity;
			quantityLabel->AutoSize = true;

			// Add the labels to the TableLayoutPanel
			tableLayoutPanel1->Controls->Add(countLabel, 0, i);
			tableLayoutPanel1->Controls->Add(codeLabel, 1, i );
			tableLayoutPanel1->Controls->Add(nameLabel, 2, i );
			tableLayoutPanel1->Controls->Add(priceLabel, 3, i );
			tableLayoutPanel1->Controls->Add(discountLabel, 4, i );
			tableLayoutPanel1->Controls->Add(quantityLabel, 5, i );
			count = Int32::Parse(countLabel->Text);

			count++;
		}



		panel4->Visible = !panel4->Visible;
		panel5->Visible = !panel5->Visible;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("data1.txt");

		for (int i = 0; i < products->Count; i++) {
			String^ code = products[i]->Item1;
			String^ name = products[i]->Item2;
			String^ price = products[i]->Item3;
			String^ discount = products[i]->Item4;
			String^ quantity = products[i]->Item5;



			// Write the product data to the file
			writer->WriteLine(code + "," + name + "," + price + "," + discount + "," + quantity);
		}
		writer->Close();

		this->Close(); // Close the current form
		
	}

	private:
		List<System::Tuple<String^, String^, String^, String^, String^>^>^ products = gcnew List<System::Tuple<String^, String^, String^, String^, String^>^>();
		//-----------------------------------------------

		//add button in a panel
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ code = textBox1->Text;
		String^ name = textBox2->Text;
		String^ price = textBox3->Text;
		String^ discount = textBox4->Text;
		String^ quantity = textBox5->Text;

		int cc = 0;
		if (code == "" || name == "" || price == "" || discount == "" || quantity == "") {
			MessageBox::Show("Enter all product data.");

		}
		else {
			if (cc == 0) {
				for (int i = 0; i < products->Count; i++) {
					if (products[i]->Item1 == code) {
						cc = 1;
						break;
					}
				}
					if (cc == 1) {
						MessageBox::Show("This product code already exit.");
					}
					else {
						products->Add(System::Tuple::Create(code, name, price, discount, quantity));
						MessageBox::Show("Product added successfully.");
				
						textBox1->Text = "";
						textBox2->Text = "";
						textBox3->Text = "";
						textBox4->Text = "";
						textBox5->Text = "";
						pcount = products->Count;
					
				}
			}

		

		}
	}

		   //delete button in a panel
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codeToDelete = textBox12->Text;

	if (codeToDelete == "") {
		MessageBox::Show("Enter Product code.");
	}

	else {
		// Find the index of the product with the matching code
		int indexToDelete = -1;
		for (int i = 0; i < products->Count; i++) {
			if (products[i]->Item1 == codeToDelete) {
				indexToDelete = i;
				break;
			}
		}

		// Delete the product if found
		if (indexToDelete != -1) {
			products->RemoveAt(indexToDelete);

		
			pcount = products->Count;
			MessageBox::Show("Product deleted successfully.");


		}
		else {
			MessageBox::Show("Product not found.");
		}
	}

	textBox12->Text = "";



}


	   //modify button in panel
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ checkcode = textBox6->Text;
	String^ newname = textBox8->Text;
	String^ newprice = textBox9->Text;
	String^ newdiscount = textBox10->Text;
	String^ newquantity = textBox11->Text;

	if (checkcode == "" || newname == "" || newprice == "" || newdiscount == "" || newquantity == "") {
		MessageBox::Show("Enter all product data.");

	}
	else {


		// Find the product with the matching code
		for (int i = 0; i < products->Count; i++) {
			if (products[i]->Item1 == checkcode) {
				// Modify the product's name
				products[i] = System::Tuple::Create(checkcode, newname, newprice, newdiscount, newquantity);
			
				textBox6->Text = "";
				textBox8->Text = "";
				textBox9->Text = "";
				textBox10->Text = "";
				textBox11->Text = "";

				MessageBox::Show("Modified the product successfully.");
				return;
			}
		}

		MessageBox::Show("Product not found.");
	}

}



	   //check code button for modify
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ checkcode = textBox6->Text;


	if(checkcode==""){
		MessageBox::Show("Enter product code.");
	}
	else {
		// Find the index of the product with the matching code
		int indexToDelete = -1;
		for (int i = 0; i < products->Count; i++) {
			if (products[i]->Item1 == checkcode) {
				indexToDelete = i;
				break;
			}
		}

		//  the product if found
		if (indexToDelete != -1) {

			MessageBox::Show("Product code found.");

		}
		else {
			MessageBox::Show("Product code not found.");
		}
	}

}

};
}





