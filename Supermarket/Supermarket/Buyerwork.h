
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include "Bill.h"
#pragma once

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
	/// Summary for Buyerwork
	/// </summary>
	public ref class Buyerwork : public System::Windows::Forms::Form
	{
	public:
		Buyerwork()
		{
			InitializeComponent();
		
			// Open the file for reading
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("data1.txt");

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
						gcnew System::Tuple<String^, String^, String^, String^, String^>(code, name,price,discount,quantity);

					productss->Add(productTuple);
				}
			
			}
			reader->Close();
			//
			//TODO: Add the constructor code here
			//
			panel1->Visible = false;
			panel3->Visible = false;
			panel5->Visible = false;
			panel6->Visible = false;
			tableLayoutPanel4->Visible = false;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Buyerwork()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Panel^ panel6;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Buyerwork::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(40, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(565, 78);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Click here to see the list of the products";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Buyerwork::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(25, 193);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(587, 490);
			this->panel1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				95)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Size = System::Drawing::Size(95, 41);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::BurlyWood;
			this->panel2->Location = System::Drawing::Point(640, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(35, 746);
			this->panel2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(696, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(565, 78);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Click here to buy the products";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Buyerwork::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PowderBlue;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(696, 134);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(565, 549);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->tableLayoutPanel4);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Location = System::Drawing::Point(9, 217);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(543, 320);
			this->panel4->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->tableLayoutPanel2);
			this->panel6->Location = System::Drawing::Point(3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(199, 49);
			this->panel6->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.51163F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.48837F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				63)));
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(198, 46);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				60)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 54);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->Size = System::Drawing::Size(48, 32);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(402, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 48);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Buy";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Buyerwork::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(216, 152);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Buyerwork::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(411, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 40);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(411, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 40);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(362, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter product quantity";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter product code";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(1148, 689);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 47);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Buyerwork::button3_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::PowderBlue;
			this->panel5->Controls->Add(this->tableLayoutPanel3);
			this->panel5->Location = System::Drawing::Point(25, 134);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(587, 65);
			this->panel5->TabIndex = 6;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel3->ColumnCount = 6;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				55.97826F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				44.02174F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				133)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				79)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				78)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				85)));
			this->tableLayoutPanel3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(584, 62);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// Buyerwork
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1285, 741);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Name = L"Buyerwork";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Buyerwork";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			List<System::Tuple<String^, String^, String^, String^, String^>^>^ productss = gcnew List<System::Tuple<String^, String^, String^, String^, String^>^>();
			//-----

			//print all the data

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		// Clear any existing controls from the tableLayoutPanel1
		tableLayoutPanel1->Controls->Clear();
		tableLayoutPanel3->Controls->Clear();
		this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
		this->tableLayoutPanel1->ColumnCount = 6;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			60)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			100)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			60)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			60)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			62)));
		
		this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = (productss->Count);
		//this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
		for (int i = 1; i <= (productss->Count); i++) {
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
		}
		this->tableLayoutPanel1->Size = System::Drawing::Size(432, 43* (productss->Count));
		this->tableLayoutPanel1->TabIndex = 0;

		int totalProducts = productss->Count;
		int count = 1;

		//---------------------------------------------------------------
		//2222222222
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

		tableLayoutPanel3->Controls->Add(serialff, 0, 0);
		tableLayoutPanel3->Controls->Add(p, 1, 0);
		tableLayoutPanel3->Controls->Add(n, 2, 0);
		tableLayoutPanel3->Controls->Add(pi, 3, 0);
		tableLayoutPanel3->Controls->Add(d, 4, 0);
		tableLayoutPanel3->Controls->Add(q, 5, 0);


		//------------------------------------------------------------------

		// Create and add labels for each product in the TableLayoutPanel
		for (int i = 0; i < totalProducts; i++) {
			String^ code = productss[i]->Item1;
			String^ name = productss[i]->Item2;
			String^ price = productss[i]->Item3;
			String^ discount = productss[i]->Item4;
			String^ quantity = productss[i]->Item5;

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
			tableLayoutPanel1->Controls->Add(countLabel, 0, i );
			tableLayoutPanel1->Controls->Add(codeLabel, 1, i );
			tableLayoutPanel1->Controls->Add(nameLabel, 2, i );
			tableLayoutPanel1->Controls->Add(priceLabel, 3, i );
			tableLayoutPanel1->Controls->Add(discountLabel, 4, i );
			tableLayoutPanel1->Controls->Add(quantityLabel, 5, i );
			count = Int32::Parse(countLabel->Text);

			count++;
		}
		
		panel1->Visible = !panel1->Visible;
		panel5->Visible = !panel5->Visible;
	}
		   public:
			   int clearcount=0;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Text = "";
	textBox2->Text = "";
	tableLayoutPanel4->Controls->Clear();
	panel6->Visible = false;
	tableLayoutPanel4->Visible = false;
	for (int i = 0; i < addp->Count; i++) {
		addp->RemoveAt(i);
	}



	clearcount = 1;


	tableLayoutPanel2->Controls->Clear();
	panel3->Visible = !panel3->Visible;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); // Close the current form
}


	   private:
		   List<System::Tuple<String^, String^>^>^ addp = gcnew List<System::Tuple< String^, String^>^>();
		   //-----

		   //add the item button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ acode = textBox1->Text;
	String^ aquantity = textBox2->Text;
	//String^ e = "";

	int i;
	if (acode == "" && aquantity == "") {
		MessageBox::Show("Enter the data.");
	}
	else if (acode !="" && aquantity !="") {
		int cc = 0;
		for ( i = 0; i < productss->Count; i++) {
			if (productss[i]->Item1 == acode) {
				cc = 1;
				break;
			}
		}
		if (cc == 0) {
			textBox1->Text = "";
			textBox2->Text = "";
			MessageBox::Show("Product code not found");

		}
		else {
			int qcount;
			int tcount;

			String^ oquantity = productss[i]->Item5;
			 qcount= Int32::Parse(oquantity);
			 tcount = Int32::Parse(textBox2->Text);


			 if (tcount > qcount) {
				 MessageBox::Show("Not enough quantity");
			 }
			 else {
				 ///////////////////////////////////////////////////////////
				 int mn = 0;
				 int i = 0;

				 for (i = 0; i < addp->Count; i++) {
					 if (acode == addp[i]->Item1) {
						 mn = 1;
						 break;
					 }
				 }

				 if (mn == 0) {
					 //means not before added
					// rest code
	 //not convert to string
					 addp->Add(System::Tuple::Create(acode, aquantity));

					 textBox1->Text = "";
					 textBox2->Text = "";


					 MessageBox::Show("Product added successfully.");
					 panel6->Visible = true;

					 tableLayoutPanel2->Controls->Clear();
					 String^ serialf = "Serial no.";
					 Label^ serialff = gcnew Label();
					 serialff->Text = serialf;
					 serialff->AutoSize = true;


					 String^ pp = "Product code";
					 Label^ p = gcnew Label();
					 p->Text = pp;
					 p->AutoSize = true;


					 String^ qq = "Quantity";
					 Label^ q = gcnew Label();
					 q->Text = qq;
					 q->AutoSize = true;

					 tableLayoutPanel2->Controls->Add(serialff, 0, 0);
					 tableLayoutPanel2->Controls->Add(p, 1, 0);
					 tableLayoutPanel2->Controls->Add(q, 2, 0);



					 tableLayoutPanel4->Visible = true;
					 // tableLayoutPanel4
				// 
					 tableLayoutPanel4->Controls->Clear();
					 this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
					 this->tableLayoutPanel4->ColumnCount = 3;
					 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
						 6)));
					 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
						 6)));
					 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
						 58)));
					 this->tableLayoutPanel4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->tableLayoutPanel4->Location = System::Drawing::Point(3, 35);
					 this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
					 this->tableLayoutPanel4->RowCount = addp->Count;
					 for (int i = 1; i <= (addp->Count); i++) {
						 this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
					 }
					 this->tableLayoutPanel4->Size = System::Drawing::Size(148, 38 * addp->Count);
					 this->tableLayoutPanel4->TabIndex = 3;

					 int totalProducts = addp->Count;
					 int count = 1;

					 // Create and add labels for each product in the TableLayoutPanel
					 for (int i = 0; i < totalProducts; i++) {
						 String^ acode = addp[i]->Item1;
						 String^ aquantity = addp[i]->Item2;

						 // Create a label for the count
						 Label^ countLabel = gcnew Label();
						 countLabel->Text = count.ToString(); // Convert count to a string
						 countLabel->AutoSize = true;

						 // Create a label for the code
						 Label^ codeLabel = gcnew Label();
						 codeLabel->Text = acode;
						 codeLabel->AutoSize = true;

						 // Create a label for the quantity
						 Label^ quantityLabel = gcnew Label();
						 quantityLabel->Text = aquantity;
						 quantityLabel->AutoSize = true;

						 // Add the labels to the TableLayoutPanel
						 tableLayoutPanel4->Controls->Add(countLabel, 0, i);
						 tableLayoutPanel4->Controls->Add(codeLabel, 1, i);
						 tableLayoutPanel4->Controls->Add(quantityLabel, 5, i);
						 count = Int32::Parse(countLabel->Text);

						 count++;
					 }

				 }
				 else {
					 int adqq;
					 String^ adq = addp[i]->Item2;
					 adqq = Int32::Parse(adq);

					 int pssqq;
					 String^ pssq = productss[i]->Item5;
					 pssqq = Int32::Parse(pssq);
					 int newtcount = (adqq + tcount);
					 if (newtcount > pssqq) {
						 MessageBox::Show("Not enough quantity");

					 }
					 else {

						 //allrestcode ,convert to string and aquantity=newtcount;

						 addp->RemoveAt(i);

						 aquantity = newtcount.ToString();
						 addp->Add(System::Tuple::Create(acode, aquantity));

						 textBox1->Text = "";
						 textBox2->Text = "";


						 MessageBox::Show("Product added successfully.");
						 panel6->Visible = true;

						 tableLayoutPanel2->Controls->Clear();
						 String^ serialf = "Serial no.";
						 Label^ serialff = gcnew Label();
						 serialff->Text = serialf;
						 serialff->AutoSize = true;


						 String^ pp = "Product code";
						 Label^ p = gcnew Label();
						 p->Text = pp;
						 p->AutoSize = true;


						 String^ qq = "Quantity";
						 Label^ q = gcnew Label();
						 q->Text = qq;
						 q->AutoSize = true;

						 tableLayoutPanel2->Controls->Add(serialff, 0, 0);
						 tableLayoutPanel2->Controls->Add(p, 1, 0);
						 tableLayoutPanel2->Controls->Add(q, 2, 0);



						 tableLayoutPanel4->Visible = true;
						 // tableLayoutPanel4
					// 
						 tableLayoutPanel4->Controls->Clear();
						 this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
						 this->tableLayoutPanel4->ColumnCount = 3;
						 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
							 6)));
						 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
							 6)));
						 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
							 58)));
						 this->tableLayoutPanel4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 this->tableLayoutPanel4->Location = System::Drawing::Point(3, 35);
						 this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
						 this->tableLayoutPanel4->RowCount = addp->Count;
						 for (int i = 1; i <= (addp->Count); i++) {
							 this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
						 }
						 this->tableLayoutPanel4->Size = System::Drawing::Size(148, 38 * addp->Count);
						 this->tableLayoutPanel4->TabIndex = 3;

						 int totalProducts = addp->Count;
						 int count = 1;

						 // Create and add labels for each product in the TableLayoutPanel
						 for (int i = 0; i < totalProducts; i++) {
							 String^ acode = addp[i]->Item1;
							 String^ aquantity = addp[i]->Item2;

							 // Create a label for the count
							 Label^ countLabel = gcnew Label();
							 countLabel->Text = count.ToString(); // Convert count to a string
							 countLabel->AutoSize = true;

							 // Create a label for the code
							 Label^ codeLabel = gcnew Label();
							 codeLabel->Text = acode;
							 codeLabel->AutoSize = true;

							 // Create a label for the quantity
							 Label^ quantityLabel = gcnew Label();
							 quantityLabel->Text = aquantity;
							 quantityLabel->AutoSize = true;

							 // Add the labels to the TableLayoutPanel
							 tableLayoutPanel4->Controls->Add(countLabel, 0, i);
							 tableLayoutPanel4->Controls->Add(codeLabel, 1, i);
							 tableLayoutPanel4->Controls->Add(quantityLabel, 5, i);
							 count = Int32::Parse(countLabel->Text);

							 count++;
						 }



					 }



				 }
				
			 }
		
		}

	}
	else {
		MessageBox::Show("Enter the data.");
	}

}

//buy button
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	//pcode,pname,discount,price of 1 product,quantity,total,total bill


	String^ filePath = "data2.txt";
	// Create a new StreamWriter object to write to the file
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath);

	for (int i = 0; i < addp->Count; i++) {

		for (int j = 0; j < productss->Count; j++) {

			if (addp[i]->Item1 == productss[j]->Item1) {
				int newqpss = 0;
				int x = 0;
				int y = 0;
				String^ acode = addp[i]->Item1;
				String^ aquantity = addp[i]->Item2;

				//String^ acode = productss[i]->Item1;

				String^ psname = productss[j]->Item2;
				String^ psprice = productss[j]->Item3;
				String^ psdiscount = productss[j]->Item4;
				//String^ aquantity = productss[i]->Item5;

				float ad, aq,ap,atotal;
				String^ aqq = addp[i]->Item2;
				String^ app = productss[j]->Item3;
				String^ addd = productss[j]->Item4;
				 ad = System::Single::Parse(addd);
				 aq = System::Single::Parse(aqq);
				 ap = System::Single::Parse(app);
				 atotal = (ap*aq)-((ap * aq)*(ad/100));
				 String^ myString = System::Convert::ToString(atotal);
				 //String^ myString = atotal.ToString("F2");



				// Write the product data to the file
				writer->WriteLine(acode + "," + psname + "," + psprice + "," + psdiscount + "," + aquantity + "," + myString);

				String^ firstps = productss[j]->Item5;
				String^ secondad = addp[i]->Item2;
				x = Int32::Parse(firstps);
				y = Int32::Parse(secondad);
				newqpss = x - y;
				String^ newww = newqpss.ToString();

				// Create a new tuple with the updated value
				Tuple<String^, String^, String^, String^, String^>^ updatedTuple = Tuple::Create(
					productss[j]->Item1,
					productss[j]->Item2,
					productss[j]->Item3,
					productss[j]->Item4,
					newww
				);

				// Replace the old tuple with the updated tuple in the list
				productss[j] = updatedTuple;
				break;

			}
		}
	}

	// Close the StreamWriter object to release resources
	writer->Close();
	
	String^ filePath2 = "data1.txt";

	// Check if the file already exists
	if (System::IO::File::Exists(filePath2))
	{
		
		System::IO::File::Delete(filePath2);
	}

	// Create a new StreamWriter object to write to the file
	writer = gcnew System::IO::StreamWriter(filePath2);

	for (int i = 0; i < productss->Count; i++) {
		String^ mcode = productss[i]->Item1;
		String^ mname = productss[i]->Item2;
		String^ mprice = productss[i]->Item3;
		String^ mdiscount = productss[i]->Item4;
		String^ mquantity = productss[i]->Item5;

		// Write the product data to the file
		writer->WriteLine(mcode + "," + mname + "," + mprice + "," + mdiscount + "," + mquantity);
	}

	// Close the StreamWriter object to release resources
	writer->Close();

	textBox1->Text = "";
	textBox2->Text = "";
	tableLayoutPanel4->Controls->Clear();
	panel6->Visible = false;
	panel3->Visible = false;
	panel1->Visible = false;
	panel5->Visible = false;
	tableLayoutPanel4->Visible = false;
	for (int i = 0; i < addp->Count; i++) {
		addp->RemoveAt(i);
	}

	Bill^ newform = gcnew Bill();
	newform->Show();
	this->Hide();
	//Buyerwork mn;
}
};
}


































