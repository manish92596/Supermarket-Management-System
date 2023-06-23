#pragma once
#include "Adminlogin.h"
#include "Buyerlogin.h"
#include <fstream> // Include the necessary header file for file operations

namespace Supermarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PowderBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label1->Location = System::Drawing::Point(305, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(616, 113);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Supermarket";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(102, 242);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(298, 366);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(38, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 75);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(28, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 85);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Admin";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(875, 249);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(298, 366);
			this->panel2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(32, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label3->Location = System::Drawing::Point(42, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 85);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Buyer";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1146, 681);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1285, 743);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Adminlogin^ newform = gcnew Adminlogin();
		newform->Show();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Buyerlogin^ newform = gcnew Buyerlogin();
	newform->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Delete all data in file "data1.txt"
	std::ofstream file("data1.txt", std::ofstream::out | std::ofstream::trunc);
	file.close();
	this->Close(); // Close the current form

}
};
}
