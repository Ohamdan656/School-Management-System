#pragma once
#include<iostream>
#include<msclr/marshal_cppstd.h>
#include<string>
#include"Admin_panel.h"
#include"Teacher_Panel.h"
#include"Parent_module.h"
using namespace std;

namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for Main_Form
	/// </summary>
	
	public ref class Main_Form : public System::Windows::Forms::Form
	{
		public:
		
		Main_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//
		
		
		}
		void database()
		{
			
		//	con.open();
		}
		void login_file(string name)
		{

			ofstream write;
			write.open("t_login.txt");
			write << name;
		}
		void login_file_parent(string name)
		{
			ofstream write;
			write.open("p_login.txt");
			write << name;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  admin_id;
	private: System::Windows::Forms::TextBox^  admin_password;
	private: System::Windows::Forms::Button^  admin_login;
	private: System::Windows::Forms::Button^  parent_login;


	private: System::Windows::Forms::TextBox^  parent_password;

	private: System::Windows::Forms::TextBox^  parent_id;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  teacher_login;

	private: System::Windows::Forms::TextBox^  teacher_password;

	private: System::Windows::Forms::TextBox^  teacher_id;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;








	private: System::Windows::Forms::Label^  label18;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->admin_id = (gcnew System::Windows::Forms::TextBox());
			this->admin_password = (gcnew System::Windows::Forms::TextBox());
			this->admin_login = (gcnew System::Windows::Forms::Button());
			this->parent_login = (gcnew System::Windows::Forms::Button());
			this->parent_password = (gcnew System::Windows::Forms::TextBox());
			this->parent_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->teacher_login = (gcnew System::Windows::Forms::Button());
			this->teacher_password = (gcnew System::Windows::Forms::TextBox());
			this->teacher_id = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(298, 823);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L" Admin";
			this->label1->Click += gcnew System::EventHandler(this, &Main_Form::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 882);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID";
			this->label2->Click += gcnew System::EventHandler(this, &Main_Form::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(297, 882);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &Main_Form::label3_Click);
			// 
			// admin_id
			// 
			this->admin_id->BackColor = System::Drawing::Color::LightGray;
			this->admin_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->admin_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_id->Location = System::Drawing::Point(170, 877);
			this->admin_id->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->admin_id->Name = L"admin_id";
			this->admin_id->Size = System::Drawing::Size(120, 23);
			this->admin_id->TabIndex = 3;
			this->admin_id->TextChanged += gcnew System::EventHandler(this, &Main_Form::admin_id_TextChanged);
			// 
			// admin_password
			// 
			this->admin_password->BackColor = System::Drawing::Color::LightGray;
			this->admin_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->admin_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_password->Location = System::Drawing::Point(398, 879);
			this->admin_password->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->admin_password->Name = L"admin_password";
			this->admin_password->Size = System::Drawing::Size(130, 23);
			this->admin_password->TabIndex = 4;
			this->admin_password->TextChanged += gcnew System::EventHandler(this, &Main_Form::admin_password_TextChanged);
			// 
			// admin_login
			// 
			this->admin_login->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->admin_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_login->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_login->Location = System::Drawing::Point(129, 912);
			this->admin_login->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->admin_login->Name = L"admin_login";
			this->admin_login->Size = System::Drawing::Size(399, 54);
			this->admin_login->TabIndex = 5;
			this->admin_login->Text = L"L o g i n";
			this->admin_login->UseVisualStyleBackColor = false;
			this->admin_login->Click += gcnew System::EventHandler(this, &Main_Form::admin_login_Click);
			// 
			// parent_login
			// 
			this->parent_login->BackColor = System::Drawing::Color::OrangeRed;
			this->parent_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->parent_login->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parent_login->Location = System::Drawing::Point(578, 912);
			this->parent_login->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->parent_login->Name = L"parent_login";
			this->parent_login->Size = System::Drawing::Size(399, 54);
			this->parent_login->TabIndex = 11;
			this->parent_login->Text = L"L o g i n";
			this->parent_login->UseVisualStyleBackColor = false;
			this->parent_login->Click += gcnew System::EventHandler(this, &Main_Form::parent_login_Click);
			// 
			// parent_password
			// 
			this->parent_password->BackColor = System::Drawing::Color::LightGray;
			this->parent_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->parent_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parent_password->Location = System::Drawing::Point(846, 879);
			this->parent_password->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->parent_password->Name = L"parent_password";
			this->parent_password->Size = System::Drawing::Size(130, 23);
			this->parent_password->TabIndex = 10;
			this->parent_password->TextChanged += gcnew System::EventHandler(this, &Main_Form::parent_password_TextChanged);
			// 
			// parent_id
			// 
			this->parent_id->BackColor = System::Drawing::Color::LightGray;
			this->parent_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->parent_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parent_id->Location = System::Drawing::Point(618, 877);
			this->parent_id->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->parent_id->Name = L"parent_id";
			this->parent_id->Size = System::Drawing::Size(120, 23);
			this->parent_id->TabIndex = 9;
			this->parent_id->TextChanged += gcnew System::EventHandler(this, &Main_Form::parent_id_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(746, 882);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password";
			this->label4->Click += gcnew System::EventHandler(this, &Main_Form::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(579, 882);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"ID";
			this->label5->Click += gcnew System::EventHandler(this, &Main_Form::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(720, 805);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 51);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Parent";
			this->label6->Click += gcnew System::EventHandler(this, &Main_Form::label6_Click);
			// 
			// teacher_login
			// 
			this->teacher_login->BackColor = System::Drawing::Color::RoyalBlue;
			this->teacher_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->teacher_login->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_login->Location = System::Drawing::Point(1021, 912);
			this->teacher_login->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->teacher_login->Name = L"teacher_login";
			this->teacher_login->Size = System::Drawing::Size(399, 54);
			this->teacher_login->TabIndex = 17;
			this->teacher_login->Text = L"L o g i n";
			this->teacher_login->UseVisualStyleBackColor = false;
			this->teacher_login->Click += gcnew System::EventHandler(this, &Main_Form::teacher_login_Click);
			// 
			// teacher_password
			// 
			this->teacher_password->BackColor = System::Drawing::Color::LightGray;
			this->teacher_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->teacher_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_password->Location = System::Drawing::Point(1289, 879);
			this->teacher_password->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->teacher_password->Name = L"teacher_password";
			this->teacher_password->Size = System::Drawing::Size(130, 23);
			this->teacher_password->TabIndex = 16;
			// 
			// teacher_id
			// 
			this->teacher_id->BackColor = System::Drawing::Color::LightGray;
			this->teacher_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->teacher_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_id->Location = System::Drawing::Point(1061, 877);
			this->teacher_id->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->teacher_id->Name = L"teacher_id";
			this->teacher_id->Size = System::Drawing::Size(120, 23);
			this->teacher_id->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1189, 882);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1023, 882);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label9->Location = System::Drawing::Point(1163, 805);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 51);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Teacher";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(740, 48);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1070, 87);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Welcome to School Management System";
			this->label18->Click += gcnew System::EventHandler(this, &Main_Form::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(252, 362);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(113, 51);
			this->label19->TabIndex = 28;
			this->label19->Text = L"Tools";
			this->label19->Click += gcnew System::EventHandler(this, &Main_Form::label19_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(160, 417);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(346, 77);
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Main_Form::pictureBox2_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(152, 549);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(176, 51);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Written In";
			this->label20->Click += gcnew System::EventHandler(this, &Main_Form::label20_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(357, 503);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(114, 114);
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Main_Form::pictureBox3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Violet;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1473, 902);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(413, 54);
			this->button1->TabIndex = 37;
			this->button1->Text = L"L o g i n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main_Form::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1755, 870);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 23);
			this->textBox1->TabIndex = 36;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(1548, 865);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 23);
			this->textBox2->TabIndex = 35;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1676, 870);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 20);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Roll No";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1444, 870);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 20);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Full Name";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Violet;
			this->label12->Location = System::Drawing::Point(1615, 795);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 51);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Student";
			// 
			// Main_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1912, 1028);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->teacher_login);
			this->Controls->Add(this->teacher_password);
			this->Controls->Add(this->teacher_id);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->parent_login);
			this->Controls->Add(this->parent_password);
			this->Controls->Add(this->parent_id);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->admin_login);
			this->Controls->Add(this->admin_password);
			this->Controls->Add(this->admin_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->MaximizeBox = false;
			this->Name = L"Main_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management Software";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main_Form::Main_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Main_Form_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void admin_login_Click(System::Object^  sender, System::EventArgs^  e) {

				 string id = msclr::interop::marshal_as<string>(admin_id->Text);
				 string pass = msclr::interop::marshal_as<string>(admin_password->Text);
				 if (id == "admin" && pass == "sms")
				 {
					// this->Hide();
					 Admin_panel ^obj = gcnew Admin_panel(this);
					 obj->ShowDialog();
				 }
				 else
					 MessageBox::Show("Entered Credentials are NOT Correct!");
	}
			 void check()
			 {

			 }
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void parent_login_Click(System::Object^  sender, System::EventArgs^  e) {
			 string log = msclr::interop::marshal_as<string>(parent_id->Text);
			 string pass = msclr::interop::marshal_as<string>(parent_password->Text);
			 ifstream read;
			 bool flag = false;
			 read.open("Parents.txt");
			 if (!read)
				 cout << "\nParents file not opened!";
			 else
			 {
				 string roll;
				 while (!read.eof())
				 {
					 read >> roll;
					 if (log == roll && pass == "parent")
					 {
						 //this->Hide();
						 login_file_parent(log);
						 flag = false;
						 Parent_module^ obj = gcnew Parent_module(this);
						 obj->ShowDialog();
						 
					 }
					 else
						 flag = true;
				 }
				 if (flag==true)
					 MessageBox::Show("Entered Credentials are not correct!");
			 }

}
private: System::Void parent_password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void parent_id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void admin_password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void admin_id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void teacher_login_Click(System::Object^  sender, System::EventArgs^  e) {
			 string id = msclr::interop::marshal_as<string>(teacher_id->Text);
			 SqlConnection ^con;
			 //con = gcnew SqlConnection(L"Data Source=(LocalDB)\v11.0;AttachDbFilename=" + "\"" + "C:\\Users\\dell\\Documents\\newone.mdf" + "\"" + "; Integrated Security = True; Connect Timeout = 30");
			// con->Open();
			 string pass = msclr::interop::marshal_as<string>(teacher_password->Text);
			 ifstream read;
			 read.open("Teachers ids.txt");
			 if (!read)
				 cout << "\nTeachers id file NOT Opened!";
			 else
			 {
				/* string aq = "select* from Teacher_Login where ID = '" +id + "' and  password ='" + pass + "';";
				 String^ q= gcnew String(aq.c_str());
				 SqlDataAdapter^da = gcnew SqlDataAdapter(q, con);
				 SqlCommand^cmd = gcnew SqlCommand(q, con);
				 DataTable^dt = gcnew DataTable();*/
				 int indicate = 0;
				 string con_id, con_pass,temp;
				 /*  if (dt->Rows->Count > 0)
				 {
					 login_file(con_id);
					 //this->Hide();
					 Teacher_Panel^ obj = gcnew Teacher_Panel(this);
					 obj->ShowDialog();
				 }*/
				 while (!read.eof())
				 {
					 read >> con_id;
					 read >> temp;
					 con_id = con_id + " " + temp;
					 read >> con_pass;
					 if (con_id == id && con_pass == pass)
					 {
						 indicate = 1;
						 break;
					 }
					 else if (con_id == id && con_pass != pass)
					 {
						 indicate = 2;
						 break;
					 }
					 else
						 indicate = 3;
				 }

				 if (indicate == 1)
				 {
					 read.close();
					 login_file(con_id);
					 //this->Hide();
					 Teacher_Panel^ obj = gcnew Teacher_Panel(this);
					 obj->ShowDialog();
				 }
				 else if (indicate == 2)
					 MessageBox::Show("Password did not match for this teacher ID");
				 else if (indicate == 3)
					 MessageBox::Show("Teacher ID does not Exist!");
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 string id = msclr::interop::marshal_as<string>(teacher_id->Text);
			 SqlConnection ^con;
			 //con = gcnew SqlConnection(L"Data Source=(LocalDB)\v11.0;AttachDbFilename=" + "\"" + "C:\\Users\\dell\\Documents\\newone.mdf" + "\"" + "; Integrated Security = True; Connect Timeout = 30");
			 // con->Open();
			 string pass = msclr::interop::marshal_as<string>(teacher_password->Text);
			 ifstream read;
			 read.open("Teachers ids.txt");
			 if (!read)
				 cout << "\nTeachers id file NOT Opened!";
			 else
			 {
				 /* string aq = "select* from Teacher_Login where ID = '" +id + "' and  password ='" + pass + "';";
				 String^ q= gcnew String(aq.c_str());
				 SqlDataAdapter^da = gcnew SqlDataAdapter(q, con);
				 SqlCommand^cmd = gcnew SqlCommand(q, con);
				 DataTable^dt = gcnew DataTable();*/
				 int indicate = 0;
				 string con_id, con_pass, temp;
				 /*  if (dt->Rows->Count > 0)
				 {
				 login_file(con_id);
				 //this->Hide();
				 Teacher_Panel^ obj = gcnew Teacher_Panel(this);
				 obj->ShowDialog();
				 }*/
				 while (!read.eof())
				 {
					 read >> con_id;
					 read >> temp;
					 con_id = con_id + " " + temp;
					 read >> con_pass;
					 if (con_id == id && con_pass == pass)
					 {
						 indicate = 1;
						 break;
					 }
					 else if (con_id == id && con_pass != pass)
					 {
						 indicate = 2;
						 break;
					 }
					 else
						 indicate = 3;
				 }

				 if (indicate == 1)
				 {
					 read.close();
					 login_file(con_id);
					 //this->Hide();
					 Teacher_Panel^ obj = gcnew Teacher_Panel(this);
					 obj->ShowDialog();
				 }
				 else if (indicate == 2)
					 MessageBox::Show("Password did not match for this teacher ID");
				 else if (indicate == 3)
					 MessageBox::Show("Teacher ID does not Exist!");
			 }
}
};
}
