#pragma once

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

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		
			panel4->Visible = false;
		
			// Open the file for reading
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("data2.txt");

			// Read each line and add product data to the list
			while (!reader->EndOfStream)
			{
				String^ line = reader->ReadLine();
				array<String^>^ productData = line->Split(',');

				if (productData->Length >= 6)
				{
					String^ code = productData[0];
					String^ name = productData[1];
					String^ price = productData[2];
					String^ discount = productData[3];
					String^ quantity = productData[4];
					String^ totalp = productData[5];

					System::Tuple<String^, String^, String^, String^, String^, String^>^ productTuple =
						gcnew System::Tuple<String^, String^, String^, String^, String^, String^>(code, name, price, discount, quantity,totalp);

					bil->Add(productTuple);
				}

			}
			reader->Close();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bill::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(2, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1284, 743);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Location = System::Drawing::Point(614, 108);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(648, 611);
			this->panel4->TabIndex = 6;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(2, 465);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(643, 68);
			this->panel6->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(374, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total bill (Rs) =";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->tableLayoutPanel2);
			this->panel5->Location = System::Drawing::Point(3, 63);//67-----------
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(642, 392);
			this->panel5->TabIndex = 5;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->Size = System::Drawing::Size(63, 58);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 24, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(211, 539);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 69);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Bill::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->tableLayoutPanel1);
			this->panel3->Location = System::Drawing::Point(0, 5);//3---------------
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(652, 62);
			this->panel3->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.65625F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.34375F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				113)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				79)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				74)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				78)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				135)));
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(649, 58);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(614, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(649, 69);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Thanking you for shopping";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Bill::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(10, 17);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(586, 702);
			this->panel2->TabIndex = 0;
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1286, 744);
			this->Controls->Add(this->panel1);
			this->Name = L"Bill";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bill";
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			List<System::Tuple<String^, String^, String^, String^, String^, String^>^>^ bil = gcnew List<System::Tuple<String^, String^, String^, String^, String^, String^>^>();
			//-----
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		tableLayoutPanel1->Controls->Clear();
		tableLayoutPanel2->Controls->Clear();
		label2->Text = "";
		//panel 4 outer
		//tablelayout1 content
		//label 2 bill
		//panel4->Visible = true;
		//panel5->Visible = true;

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


		String^ pr = "Price per product";
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

		String^ qqm = "Total price (Rs)";
		Label^ qn = gcnew Label();
		qn->Text = qqm;
		qn->AutoSize = true;

		tableLayoutPanel1->Controls->Add(serialff, 0, 0);
		tableLayoutPanel1->Controls->Add(p, 1, 0);
		tableLayoutPanel1->Controls->Add(n, 2, 0);
		tableLayoutPanel1->Controls->Add(pi, 3, 0);
		tableLayoutPanel1->Controls->Add(d, 4, 0);
		tableLayoutPanel1->Controls->Add(q, 5, 0);
		tableLayoutPanel1->Controls->Add(qn, 6, 0);

		
		//-------------------------------------------------------
		//tableLayoutPanel2->Controls->Clear();

		// tableLayoutPanel2
		// tableLayoutPanel2
			// 
		this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
		this->tableLayoutPanel2->ColumnCount = 7;
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			49)));
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			85)));
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			61)));
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			59)));//4
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			57)));
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			55)));
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
			125)));
		this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
		this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
		this->tableLayoutPanel2->RowCount = bil->Count;
		for (int i = 1; i <= bil->Count; i++) {
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		}
		this->tableLayoutPanel2->Size = System::Drawing::Size(483, 43* bil->Count);
		this->tableLayoutPanel2->TabIndex = 0;
		// 
		
		int totalProducts = bil->Count;
		int count = 1;

		// Create and add labels for each product in the TableLayoutPanel
		for (int i = 0; i < totalProducts; i++) {
			String^ code = bil[i]->Item1;
			String^ name = bil[i]->Item2;
			String^ price = bil[i]->Item3;
			String^ discount = bil[i]->Item4;
			String^ quantity = bil[i]->Item5;
			String^ tprice = bil[i]->Item6;

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


			// Create a label for the quantity
			Label^ tpLabel = gcnew Label();
			tpLabel->Text = tprice;
			tpLabel->AutoSize = true;

			// Add the labels to the TableLayoutPanel
			tableLayoutPanel2->Controls->Add(countLabel, 0, i);
			tableLayoutPanel2->Controls->Add(codeLabel, 1, i);
			tableLayoutPanel2->Controls->Add(nameLabel, 2, i);
			tableLayoutPanel2->Controls->Add(priceLabel, 3, i);
			tableLayoutPanel2->Controls->Add(discountLabel, 4, i);
			tableLayoutPanel2->Controls->Add(quantityLabel, 5, i);
			tableLayoutPanel2->Controls->Add(tpLabel, 6, i);
			count = Int32::Parse(countLabel->Text);

			count++;
		}
		
		//---------------------------------------------------------


		
		float ap = 0, t = 0;
		for (int i = 0; i < bil->Count; i++) {
			String^ aqq = bil[i]->Item6;
			ap = System::Single::Parse(aqq);
			t = t + ap;
			ap = 0;
		}
		String^ myString = System::Convert::ToString(t);
		label2->Text = myString;
		panel4->Visible = !panel4->Visible;
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		//end data 1 all delete
		String^ filePath = "data2.txt";
		System::IO::File::WriteAllText(filePath, "");

		for (int i = 0; i < bil->Count; i++) {
			bil->RemoveAt(i);
		}

	this->Close();
}
};
}
