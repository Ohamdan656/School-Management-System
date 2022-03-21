#pragma once
#include"Code_flow.h"
#include<msclr/marshal_cppstd.h>
using namespace std;
namespace SMS {

	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_student
	/// </summary>
	public ref class Add_student : public System::Windows::Forms::Form
	{
	public:
		Form ^back;
		SqlConnection ^con;
		string **array;
		int rows = 0;
		Add_student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		Add_student(Form ^obj)
		{
			back = obj;
			InitializeComponent();
			//String^a = L"Data Source=(LocalDB)\v11.0;AttachDbFilename="+ "\""  +"C:\\Users\\dell\\Documents\\School.mdf" + "\"" + "; Integrated Security = True; Connect Timeout = 30";
			//con = gcnew SqlConnection(a);
			//con->Open();
			//
			//TODO: Add the constructor code here
			//
		}
		void generate_parent_login(string roll)
		{
			ofstream write;
			write.open("Parents.txt",ios::app);
			write << endl << roll;
			write.close();
		}
		void data_integrity_space(string& st)
		{
			int size = st.length();
			cout << size;
			for (int s = 0; s < size; s++)
			{
				if (st[s] == ' ')
					st[s] = '_';
			}
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
				if (st[s]=='@')
					return true;
			}
			return false;
		}
		void load_data()
		{
			Administrator admin;
			ifstream read;
			read.open("Students.txt");
			if (!read)
				cout << "\nStudent File NOT Opened!";
			else
			{
				rows = admin.view_students();
				// initializing array
				array = new string*[rows];
				for (int i = 0; i < rows; i++)
				{
					array[i] = new string[18];
				}
				////// putting data into array ////
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < 18; j++)
					{
						read >> array[i][j];
					}
				}
				////////////////////////////////
			}
		}
		string assign_roll()
		{
			string temp = array[rows-1][0];
			int len = temp.length();
					if (temp[len - 1] == '9')
					{
						if (temp[len - 2] != '9')
						{
							temp[len - 2] = temp[len - 2] + 1;
							temp[len - 1] = '0';
						}
					}
					else
						temp[len - 1] = temp[len - 1] + 1;

					if (temp[len - 2] == '9')
					{
						if (temp[len - 3] != '9')
						{
							temp[len - 3] = temp[len - 3] + 1;
							temp[len - 2] = '0';
						}
					}
					if (temp[len - 3] == '9')
					{
						if (temp[len - 4] != '9')
						{
							temp[len - 4] = temp[len - 4] + 1;
							temp[len - 3] = '0';
						}
					}
					if (temp[len - 1] == '9' && temp[len - 2] == '9' && temp[len - 3] == '9' && temp[len - 4] == '9')
					{
						temp[2] += 1;
					}
			return temp;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_student()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  fname;
	protected:

	private: System::Windows::Forms::Label^  label2;




































	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  lname;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  roll;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  reg_date;
	private: System::Windows::Forms::ComboBox^  clas;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::ComboBox^  gender;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  father;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  mother;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  father_pro;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  mother_pro;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  parent_contact;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  birth;



	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  fee;

	private: System::Windows::Forms::ComboBox^  blood;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Button^  cancel;


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_student::typeid));
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->roll = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->reg_date = (gcnew System::Windows::Forms::TextBox());
			this->clas = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->father = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->mother = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->father_pro = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->mother_pro = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->parent_contact = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->birth = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->fee = (gcnew System::Windows::Forms::TextBox());
			this->blood = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// fname
			// 
			this->fname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->ForeColor = System::Drawing::Color::Gainsboro;
			this->fname->Location = System::Drawing::Point(110, 122);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(143, 14);
			this->fname->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(15, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(65, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 45);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Student Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(271, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 15);
			this->label3->TabIndex = 40;
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
			this->lname->Location = System::Drawing::Point(383, 122);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(143, 14);
			this->lname->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightGray;
			this->label4->Location = System::Drawing::Point(15, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Roll #";
			// 
			// roll
			// 
			this->roll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->roll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->roll->Enabled = false;
			this->roll->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roll->ForeColor = System::Drawing::Color::Gainsboro;
			this->roll->Location = System::Drawing::Point(110, 158);
			this->roll->Name = L"roll";
			this->roll->Size = System::Drawing::Size(143, 14);
			this->roll->TabIndex = 41;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightGray;
			this->label5->Location = System::Drawing::Point(271, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 15);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Email";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::Gainsboro;
			this->email->Location = System::Drawing::Point(383, 158);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(143, 14);
			this->email->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightGray;
			this->label6->Location = System::Drawing::Point(15, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 15);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Reg. Date";
			// 
			// reg_date
			// 
			this->reg_date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->reg_date->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->reg_date->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg_date->ForeColor = System::Drawing::Color::Gainsboro;
			this->reg_date->Location = System::Drawing::Point(110, 190);
			this->reg_date->Name = L"reg_date";
			this->reg_date->Size = System::Drawing::Size(143, 14);
			this->reg_date->TabIndex = 45;
			// 
			// clas
			// 
			this->clas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->clas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->clas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clas->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clas->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->clas->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Play_Group", L"Nursery", L"KG", L"Class_1", L"Class_2",
					L"Class_3", L"Class_4", L"Class_5", L"Class_6", L"Class_7", L"Class_8", L"Class_9", L"Class_10"
			});
			this->clas->Location = System::Drawing::Point(383, 223);
			this->clas->Name = L"clas";
			this->clas->Size = System::Drawing::Size(143, 23);
			this->clas->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(271, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 15);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Choose Class";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::LightGray;
			this->label8->Location = System::Drawing::Point(15, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 15);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Gender";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(271, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 15);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Contact #";
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->ForeColor = System::Drawing::Color::Gainsboro;
			this->contact->Location = System::Drawing::Point(383, 189);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(143, 14);
			this->contact->TabIndex = 50;
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
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->gender->Location = System::Drawing::Point(110, 223);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(143, 23);
			this->gender->TabIndex = 52;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::LightGray;
			this->label10->Location = System::Drawing::Point(15, 271);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 15);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Father Name";
			// 
			// father
			// 
			this->father->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->father->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->father->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->father->ForeColor = System::Drawing::Color::Gainsboro;
			this->father->Location = System::Drawing::Point(110, 271);
			this->father->Name = L"father";
			this->father->Size = System::Drawing::Size(143, 14);
			this->father->TabIndex = 53;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LightGray;
			this->label11->Location = System::Drawing::Point(271, 271);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 15);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Mother Name";
			// 
			// mother
			// 
			this->mother->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->mother->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mother->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mother->ForeColor = System::Drawing::Color::Gainsboro;
			this->mother->Location = System::Drawing::Point(383, 272);
			this->mother->Name = L"mother";
			this->mother->Size = System::Drawing::Size(143, 14);
			this->mother->TabIndex = 55;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::LightGray;
			this->label12->Location = System::Drawing::Point(15, 306);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 15);
			this->label12->TabIndex = 58;
			this->label12->Text = L"Father Prof.";
			// 
			// father_pro
			// 
			this->father_pro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->father_pro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->father_pro->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->father_pro->ForeColor = System::Drawing::Color::Gainsboro;
			this->father_pro->Location = System::Drawing::Point(110, 306);
			this->father_pro->Name = L"father_pro";
			this->father_pro->Size = System::Drawing::Size(143, 14);
			this->father_pro->TabIndex = 57;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::LightGray;
			this->label19->Location = System::Drawing::Point(271, 307);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(81, 15);
			this->label19->TabIndex = 60;
			this->label19->Text = L"Mother Prof.";
			// 
			// mother_pro
			// 
			this->mother_pro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->mother_pro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mother_pro->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mother_pro->ForeColor = System::Drawing::Color::Gainsboro;
			this->mother_pro->Location = System::Drawing::Point(383, 307);
			this->mother_pro->Name = L"mother_pro";
			this->mother_pro->Size = System::Drawing::Size(143, 14);
			this->mother_pro->TabIndex = 59;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::LightGray;
			this->label13->Location = System::Drawing::Point(15, 342);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 15);
			this->label13->TabIndex = 62;
			this->label13->Text = L"Parent Con. #";
			// 
			// parent_contact
			// 
			this->parent_contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->parent_contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->parent_contact->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parent_contact->ForeColor = System::Drawing::Color::Gainsboro;
			this->parent_contact->Location = System::Drawing::Point(110, 342);
			this->parent_contact->Name = L"parent_contact";
			this->parent_contact->Size = System::Drawing::Size(143, 14);
			this->parent_contact->TabIndex = 61;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightGray;
			this->label14->Location = System::Drawing::Point(271, 342);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 15);
			this->label14->TabIndex = 64;
			this->label14->Text = L"Birth Date";
			// 
			// birth
			// 
			this->birth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->birth->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->birth->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birth->ForeColor = System::Drawing::Color::Gainsboro;
			this->birth->Location = System::Drawing::Point(383, 342);
			this->birth->Name = L"birth";
			this->birth->Size = System::Drawing::Size(143, 14);
			this->birth->TabIndex = 63;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::LightGray;
			this->label15->Location = System::Drawing::Point(271, 377);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 15);
			this->label15->TabIndex = 66;
			this->label15->Text = L"Fees";
			// 
			// fee
			// 
			this->fee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fee->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fee->ForeColor = System::Drawing::Color::Gainsboro;
			this->fee->Location = System::Drawing::Point(383, 378);
			this->fee->Name = L"fee";
			this->fee->Size = System::Drawing::Size(143, 14);
			this->fee->TabIndex = 65;
			// 
			// blood
			// 
			this->blood->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->blood->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->blood->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->blood->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blood->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->blood->FormattingEnabled = true;
			this->blood->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-", L"O+",
					L"O-"
			});
			this->blood->Location = System::Drawing::Point(110, 374);
			this->blood->Name = L"blood";
			this->blood->Size = System::Drawing::Size(143, 23);
			this->blood->TabIndex = 68;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::LightGray;
			this->label16->Location = System::Drawing::Point(15, 378);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 15);
			this->label16->TabIndex = 67;
			this->label16->Text = L"Blood Group";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::LightGray;
			this->label17->Location = System::Drawing::Point(15, 428);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 15);
			this->label17->TabIndex = 70;
			this->label17->Text = L"Address";
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->address->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::Color::Gainsboro;
			this->address->Location = System::Drawing::Point(110, 426);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(416, 14);
			this->address->TabIndex = 69;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->Location = System::Drawing::Point(629, 468);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(106, 33);
			this->submit->TabIndex = 71;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Add_student::submit_Click_1);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Coral;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->Location = System::Drawing::Point(745, 468);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(106, 33);
			this->cancel->TabIndex = 72;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Add_student::cancel_Click_1);
			// 
			// Add_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(863, 513);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->address);
			this->Controls->Add(this->blood);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->fee);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->birth);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->parent_contact);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->mother_pro);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->father_pro);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->mother);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->father);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->reg_date);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->roll);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->fname);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Add_student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_student";
			this->Load += gcnew System::EventHandler(this, &Add_student::Add_student_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
	}
	private: System::Void submit_Click_1(System::Object^  sender, System::EventArgs^  e) {

				 Student obj;
				 /////////////// taking data into object /////////
				 //////////////  with data integrity     ////////
				 string fname1 = msclr::interop::marshal_as<string>(fname->Text);
				 data_integrity_space(fname1);
				 if (data_integrity_numeric(fname1) == false && data_integrity_symbols(fname1) == false )
					 obj.set_fname(fname1);
				 else
					 MessageBox::Show("First Name Should NOT contain numeric or special symbols");
				 //////////////////////////////////////////
				 string lname1 = msclr::interop::marshal_as<string>(lname->Text);
				 data_integrity_space(lname1);
				 if (data_integrity_numeric(lname1) == false && data_integrity_symbols(lname1) == false )
					 obj.set_lname(lname1);
				 else
					 MessageBox::Show("Last Name Should NOT contain numeric or special symbols");
				 ////////////////////////////////////////
				 string roll1 = msclr::interop::marshal_as<string>(roll->Text);
				 data_integrity_space(roll1);
				 obj.set_roll(roll1);
					 /////////////////////////////////////
	
				 string email1 = msclr::interop::marshal_as<string>(email->Text);
				 data_integrity_space(email1);
				 if (data_integrity_alpha(email1)==true && data_integrity_at_rate(email1)==true )
					 obj.set_email(email1);
				 else if (!(email1 == ""))
					 MessageBox::Show("Email MUST contain alphabets and @");
				 ////////////////////////////////////////

				 string reg_date1 = msclr::interop::marshal_as<string>(reg_date->Text);
				 data_integrity_space(reg_date1);
				 if (data_integrity_alpha(reg_date1) == false && data_integrity_at_rate(reg_date1)==false)
					 obj.set_reg_date(reg_date1);
				 else
					 MessageBox::Show("Registration date SHOULD NOt contain alphabets or @");
				//////////////////////////////////////////
				 string clas1 = msclr::interop::marshal_as<string>(clas->Text);
				 data_integrity_space(clas1);
					obj.set_clas(clas1);
				 ////////////////////////////////////////
				 string gender1 = msclr::interop::marshal_as<string>(gender->Text);
				 data_integrity_space(gender1);
					obj.set_gender(gender1);
				 //////////////////////////////////////
				 string contact1 = msclr::interop::marshal_as<string>(contact->Text);
				 data_integrity_space(contact1);
				 if (data_integrity_alpha(contact1) == false && data_integrity_symbols(contact1) == false)
					 obj.set_contact(contact1);
				 else
					 MessageBox::Show("Contact Number SHOULD NOt contain Alphabets or Symbols");
				 //////////////////////////////////////
				 string father1 = msclr::interop::marshal_as<string>(father->Text);
				 data_integrity_space(father1);
				 if (data_integrity_numeric(father1) == false && data_integrity_symbols(father1) == false)
					 obj.set_father(father1);
				 else
					 MessageBox::Show("Father Name SHOULD NOt contain Symbols or Numeric");
				 /////////////////////////////////////
				 string mother1 = msclr::interop::marshal_as<string>(mother->Text);
				 data_integrity_space(mother1);
				 if (data_integrity_numeric(mother1) == false && data_integrity_symbols(mother1) == false)
					 obj.set_mother(mother1);
				 else
					 MessageBox::Show("Mother Name SHOULD NOt contain Symbols or Numeric");
				 ////////////////////////////////////
				 string f_pro1 = msclr::interop::marshal_as<string>(father_pro->Text);
				 data_integrity_space(f_pro1);
				 if (data_integrity_numeric(f_pro1) == false && data_integrity_symbols(f_pro1) == false)
					 obj.set_father_pro(f_pro1);
				 else
					 MessageBox::Show("Father Profession SHOULD NOt contain Symbols or Numeric");
				 ///////////////////////////////////
				 string m_pro1 = msclr::interop::marshal_as<string>(mother_pro->Text);
				 data_integrity_space(m_pro1);
				 if (data_integrity_numeric(m_pro1) == false && data_integrity_symbols(m_pro1) == false)
					 obj.set_mother_pro(m_pro1);
				 else
					 MessageBox::Show("Mother Profession SHOULD NOt contain Symbols or Numeric");
				 //////////////////////////////////
				 string p_contact1 = msclr::interop::marshal_as<string>(parent_contact->Text);
				 data_integrity_space(p_contact1);
				 if (data_integrity_alpha(p_contact1) == false && data_integrity_symbols(p_contact1) == false)
					 obj.set_parent_contact(p_contact1);
				 else
					 MessageBox::Show("Parents Contact Number SHOULD NOt contain Alphabets or Symbols");
				 //////////////////////////////////
				 string birth1 = msclr::interop::marshal_as<string>(birth->Text);
				 data_integrity_space(birth1);
				 if (data_integrity_alpha(birth1) == false && data_integrity_at_rate(birth1) == false)
					 obj.set_birth(birth1);
				 else
					 MessageBox::Show("Birth date SHOULD NOt contain alphabets or @");
				 //////////////////////////////////
				 string blood1 = msclr::interop::marshal_as<string>(blood->Text);
				 data_integrity_space(blood1);
				 obj.set_blood(blood1);
				 /////////////////////////////////
				 string fee1 = msclr::interop::marshal_as<string>(fee->Text);
				 data_integrity_space(fee1);
				 if (data_integrity_alpha(fee1) == false && data_integrity_symbols(fee1) == false)
					 obj.set_fee(fee1);
				 else
					 MessageBox::Show("Fee SHOULD NOt contain alphabets or symbols");
				/////////////////////////////////
				 string address1 = msclr::interop::marshal_as<string>(address->Text);
				 data_integrity_space(address1);
				 obj.set_address(address1);
				 /////// Adding student ///////
				 if (obj.get_fname() == "" || obj.get_lname() == "" || obj.get_roll() == "" || obj.get_email() == ""
					 || obj.get_reg_date() == "" || obj.get_clas() == "" || obj.get_gender() == "" || obj.get_contact() == ""
					 || obj.get_father() == "" || obj.get_mother() == "" || obj.get_father_pro() == "" || obj.get_mother_pro() == ""
					 || obj.get_parent_contact() == "" || obj.get_birth() == "" || obj.get_blood() == "" || obj.get_fee() == "" || obj.get_address() == "")
				 {
					 MessageBox::Show("All Field MUST be Correct and Filled!");
				 }
				 else
				 {
					 Administrator admin;
				//	 SqlCommand^cmd = con->CreateCommand();
					 admin.add_student(obj);
			//		 cmd->CommandType = CommandType::Text;
					// string sql = "BACKUP DATABASE test TO Disk";
			//		 string a= "INSERT INTO test VALUES('" + obj.get_roll() + "','" + obj.get_fname() + "', '" + obj.get_lname() + "', '" + obj.get_email() + "','" + obj.get_reg_date() + "','" + obj.get_contact() + "','" + obj.get_gender() + "','" + obj.get_clas() + "','" + obj.get_father() + "','" + obj.get_mother() + "','" + obj.get_father_pro() + "','" + obj.get_mother_pro() + "','" + obj.get_parent_contact() + "','" + obj.get_birth() + "','" + obj.get_blood() + "','" + obj.get_fee() + "','" + obj.get_address() + "' );";
				//	 cmd->CommandText
				//	 cmd->CommandText = gcnew String(a.c_str());
				//	 cmd->ExecuteNonQuery();
					 MessageBox::Show("Student Information Saved!");
					 generate_parent_login(obj.get_roll());
					 MessageBox::Show("Parent login Generated!");
					 this->Hide();
					 back->Show();
				 }
	}
	private: System::Void cancel_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
private: System::Void Add_student_Load(System::Object^  sender, System::EventArgs^  e) {
			 load_data();
			 roll->Text = "17F-8000";
			 String^ temp_roll = msclr::interop::marshal_as<String^>(assign_roll());
			 roll->Text = temp_roll;
}
};
}
