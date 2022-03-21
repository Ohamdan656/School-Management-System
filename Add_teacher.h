#pragma once
#include"Add_student.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_teacher
	/// </summary>
	public ref class Add_teacher : public System::Windows::Forms::Form
	{
	public:
		Form ^back;
		Add_teacher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Add_teacher(Form ^ obj1)
		{
			back = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool data_integrity_space(string& st)
		{
			bool space=false;
			int size = st.length();
			cout << size;
			for (int s = 0; s < size; s++)
			{
				if (st[s] == ' ')
				{
					st[s] = '_';
					space = true;
				}
			}
			return space;
		}
		bool data_integrity_numeric(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (st[s] == '0' || st[s] == '1' || st[s] == '2' || st[s] == '3' || st[s] == '4' || st[s] == '5' || st[s] == '6' || st[s] == '7' || st[s] == '8' || st[s] == '9')
					return true;
			}
			return false;
		}
		bool data_integrity_alpha(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (((int)st[s] >= 65 && (int)st[s] <= 90) || ((int)st[s] >= 97 && (int)st[s] <= 122))
					return true;
			}
			return false;
		}
		bool data_integrity_symbols(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (!(((int)st[s] >= 65 && (int)st[s] <= 90) || ((int)st[s] >= 97 && (int)st[s] <= 122) || (int)st[s] == 95 || ((int)st[s] >= 48 && (int)st[s] <= 57)))
					return true;
			}
			return false;
		}
		bool data_integrity_at_rate(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (st[s] == '@')
					return true;
			}
			return false;
		}
		int data_integrity_length(string st)
		{
			int size = st.length();
			return size;
		}
		void generate_login(string fname,string lname,string pass)
		{
			ofstream write;
			write.open("Teachers ids.txt", ios::app);
			if (!write)
				cout << "\nTeacher ID's file NOT Opened!";
			else
			{
				write << fname << " ";
				write << lname<<" ";
				write << pass << endl;
			}
			write.close();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  fname;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  lname;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  contact;

	private: System::Windows::Forms::ComboBox^  gender;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  qual;

	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  join_date;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  con_pass;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  cnic;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  birth;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  salary;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Button^  submit;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_teacher::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->qual = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->join_date = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->con_pass = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cnic = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->birth = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->salary = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 29, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(23, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 48);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Teacher Information";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"First Name";
			// 
			// fname
			// 
			this->fname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->ForeColor = System::Drawing::Color::Gainsboro;
			this->fname->Location = System::Drawing::Point(108, 147);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(143, 14);
			this->fname->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(285, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Last Name";
			// 
			// lname
			// 
			this->lname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lname->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname->ForeColor = System::Drawing::Color::Gainsboro;
			this->lname->Location = System::Drawing::Point(390, 147);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(143, 14);
			this->lname->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(13, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Email";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::Gainsboro;
			this->email->Location = System::Drawing::Point(108, 184);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(143, 14);
			this->email->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(285, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Contact #";
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->ForeColor = System::Drawing::Color::Gainsboro;
			this->contact->Location = System::Drawing::Point(390, 260);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(143, 14);
			this->contact->TabIndex = 9;
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gender->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->gender->Location = System::Drawing::Point(108, 298);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(143, 23);
			this->gender->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(13, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 15);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Gender";
			// 
			// qual
			// 
			this->qual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->qual->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->qual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->qual->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qual->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->qual->FormattingEnabled = true;
			this->qual->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Computer", L"Mechanical", L"Mathematics", L"Commerce" });
			this->qual->Location = System::Drawing::Point(390, 298);
			this->qual->Name = L"qual";
			this->qual->Size = System::Drawing::Size(143, 23);
			this->qual->TabIndex = 56;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(285, 301);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 15);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Qualification";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(285, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 15);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Joining Date";
			// 
			// join_date
			// 
			this->join_date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->join_date->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->join_date->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->join_date->ForeColor = System::Drawing::Color::Gainsboro;
			this->join_date->Location = System::Drawing::Point(390, 183);
			this->join_date->Name = L"join_date";
			this->join_date->Size = System::Drawing::Size(143, 14);
			this->join_date->TabIndex = 59;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(13, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 15);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Password";
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::Gainsboro;
			this->pass->Location = System::Drawing::Point(108, 222);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(143, 14);
			this->pass->TabIndex = 61;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(285, 221);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 15);
			this->label10->TabIndex = 64;
			this->label10->Text = L"Conf. Password";
			// 
			// con_pass
			// 
			this->con_pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->con_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->con_pass->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->con_pass->ForeColor = System::Drawing::Color::Gainsboro;
			this->con_pass->Location = System::Drawing::Point(390, 222);
			this->con_pass->Name = L"con_pass";
			this->con_pass->Size = System::Drawing::Size(143, 14);
			this->con_pass->TabIndex = 63;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(13, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 15);
			this->label11->TabIndex = 66;
			this->label11->Text = L"CNIC";
			// 
			// cnic
			// 
			this->cnic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->cnic->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->ForeColor = System::Drawing::Color::Gainsboro;
			this->cnic->Location = System::Drawing::Point(108, 260);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(143, 14);
			this->cnic->TabIndex = 65;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(10, 348);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 15);
			this->label12->TabIndex = 68;
			this->label12->Text = L"Birth Date";
			// 
			// birth
			// 
			this->birth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->birth->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->birth->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birth->ForeColor = System::Drawing::Color::Gainsboro;
			this->birth->Location = System::Drawing::Point(108, 349);
			this->birth->Name = L"birth";
			this->birth->Size = System::Drawing::Size(143, 14);
			this->birth->TabIndex = 67;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(285, 348);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 15);
			this->label13->TabIndex = 70;
			this->label13->Text = L"Salary";
			// 
			// salary
			// 
			this->salary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->salary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->salary->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salary->ForeColor = System::Drawing::Color::Gainsboro;
			this->salary->Location = System::Drawing::Point(390, 349);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(143, 14);
			this->salary->TabIndex = 69;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(10, 386);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 15);
			this->label14->TabIndex = 72;
			this->label14->Text = L"Address";
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->address->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::Color::Gainsboro;
			this->address->Location = System::Drawing::Point(108, 387);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(425, 14);
			this->address->TabIndex = 71;
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->cancel->Location = System::Drawing::Point(719, 424);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(106, 33);
			this->cancel->TabIndex = 74;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Add_teacher::cancel_Click);
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::LightGray;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->Location = System::Drawing::Point(603, 424);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(106, 33);
			this->submit->TabIndex = 73;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Add_teacher::submit_Click);
			// 
			// Add_teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(852, 469);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->address);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->salary);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->birth);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->con_pass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->join_date);
			this->Controls->Add(this->qual);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Add_teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_teacher";
			this->Load += gcnew System::EventHandler(this, &Add_teacher::Add_teacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Add_teacher_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
				 			 Teacher obj;
				 			 /////////////// taking data into object /////////
							 /////////////// with data integrity     ////////
				 			 string fname1= msclr::interop::marshal_as<string>(fname->Text);
							 data_integrity_space(fname1);
							 if (data_integrity_numeric(fname1) == false && data_integrity_symbols(fname1) == false)
								 obj.set_fname(fname1);
							 else
								 MessageBox::Show("First Name should NOT contain numerics or symbols!");
				 			 /////////////////////
				 			 string lname1 = msclr::interop::marshal_as<string>(lname->Text);
							 data_integrity_space(lname1);
							 if (data_integrity_numeric(lname1) == false && data_integrity_symbols(lname1) == false)
								 obj.set_lname(lname1);
							 else
								 MessageBox::Show("Second Name should NOT contain numerics or symbols!");
				 			 ///////////////////
				 			 string email1 = msclr::interop::marshal_as<string>(email->Text);
							 data_integrity_space(email1);
							 if (data_integrity_alpha(email1) == true && data_integrity_at_rate(email1) == true)
								 obj.set_email(email1);
							 else if (!(email1==""))
								 MessageBox::Show("Email MUST contain Alphabets and @ !");
				 			 //////////////////
				 			 string join_date1 = msclr::interop::marshal_as<string>(join_date->Text);
							 data_integrity_space(join_date1);
							 if (data_integrity_alpha(join_date1) == false && data_integrity_at_rate(join_date1) == false)
								 obj.set_join_date(join_date1);
							 else 
								 MessageBox::Show("Joining Date should NOT contain alphabets or @ symbols!");
				 			 ///////////////////////////////////
							 bool one = false, two = false;
				 			 string pass1 = msclr::interop::marshal_as<string>(pass->Text);
							 if (data_integrity_space(pass1) == false && data_integrity_length(pass1) >=8 )
								 one = true;
							 else if (!(pass1 == ""))
								 MessageBox::Show("Password should NOT contain Spaces & MUST be greater 8 characters!");
							 //////////////////
							 string con_pass1 = msclr::interop::marshal_as<string>(con_pass->Text);
							 if (data_integrity_space(con_pass1) == false && (data_integrity_length(con_pass1) >= 8))
								 two = true;
							 else if (!(con_pass1 == ""))
								 MessageBox::Show("Password should NOT contain Spaces & MUST be greater 8 characters!");
							 if (one==true && two==true)
								 obj.set_pass(con_pass1);
							 /////////////////////////////////////
				 			 string gender1 = msclr::interop::marshal_as<string>(gender->Text);
				 			 obj.set_gender(gender1);
							 /////////////////
				 			 string contact1 = msclr::interop::marshal_as<string>(contact->Text);
							 data_integrity_space(contact1);
							 if (data_integrity_alpha(contact1) == false && data_integrity_symbols(contact1) == false && (data_integrity_length(contact1) == 11 || data_integrity_length(contact1) == 12))
								 obj.set_contact(contact1);
							 else if (!(contact1 == ""))
								 MessageBox::Show("Contact Number should NOT contain alphabets or symbols & MUST be complete!");
				 			 ///////////////
				 			 string cnic1 = msclr::interop::marshal_as<string>(cnic->Text);
							 data_integrity_space(cnic1);
							 if (data_integrity_alpha(cnic1) == false && data_integrity_symbols(cnic1) == false && data_integrity_length(cnic1) == 1)
								 obj.set_cnic(cnic1);
							 else if (!(cnic1 == ""))
								 MessageBox::Show("CNIC Number should NOT contain alphabets or symbols & MUST be of 13-digits!");
				 			 //////////////
				 			 string qual1 = msclr::interop::marshal_as<string>(qual->Text);
				 			 obj.set_qual(qual1);
							 //////////////
				 			 string birth1 = msclr::interop::marshal_as<string>(birth->Text);
							 data_integrity_space(birth1);
							 if (data_integrity_alpha(birth1) == false && data_integrity_at_rate(birth1) == false)
								 obj.set_birth(birth1);
							 else
								 MessageBox::Show("Birth Date should NOT contain alphabets or @ symbol!");
				 			 /////////////
				 			 string salary1 = msclr::interop::marshal_as<string>(salary->Text);
							 if (data_integrity_alpha(salary1) == false && data_integrity_symbols(salary1) == false && data_integrity_space(salary1)==false)
								 obj.set_salary(salary1);
							 else
								 MessageBox::Show("Salary should NOT contain alphabets, symbol or spaces!");
				 			 /////////////
				 			 string address1 = msclr::interop::marshal_as<string>(address->Text);
							 data_integrity_space(address1);
				 			 obj.set_address(address1);
				 			 /////// Adding Teacher ///////
							 if (obj.get_fname() == "" || obj.get_lname() == "" || obj.get_email() == "" || obj.get_join_date() == ""
								 || obj.get_lname() == "" || obj.get_pass() == "" || obj.get_gender() == ""
								 || obj.get_contact() == "" || obj.get_cnic() == "" || obj.get_qual() == "" || obj.get_birth() == ""
								 || obj.get_salary() == "" || obj.get_address() == "")
							 {
								 MessageBox::Show("All Fields MUST Filled and correct!");
							 }
							 else if (!(pass1 == con_pass1))
							 {
								 MessageBox::Show("Password did not Matched!");
							 }
							 else
							 {
								 Administrator admin;
								 admin.add_teacher(obj);
								 generate_login(fname1,lname1, pass1);
								 MessageBox::Show("Login ID Generated! Teacher login ID formate is <First_name Second_name> .");
								 MessageBox::Show("Teacher Information Saved!");
								 this->Hide();
								 back->Show();
							 }
	}
	};
}
