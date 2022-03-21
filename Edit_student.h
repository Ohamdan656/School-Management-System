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
	/// Summary for Edit_student
	/// </summary>
	public ref class Edit_student : public System::Windows::Forms::Form
	{
	public:
		string **array;
		int rows;
		String^ s_address, ^s_contact, ^s_fee, ^s_roll_no;
		int index;
	private: System::Windows::Forms::Button^  select;
	private: System::Windows::Forms::ComboBox^  students;
	private: System::Windows::Forms::TextBox^  fee;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::Label^  label1;


	public:
		Form^ back;
		Edit_student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Edit_student(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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

	private: void load_data()
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
	private: void write_through_array()
	{
				 ofstream write;
				 write.open("Students.txt");
				 if (!write)
					 cout << "\nStudents file NOT Opened!";
				 else
				 {
					 for (int i = 0; i < rows; i++)
					 {
						 write << endl;
						 for (int j = 0; j < 18; j++)
						 {
							 write << " " << array[i][j];
						 }
						
					 }
				 }
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit_student()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:

	protected:




	private: System::Windows::Forms::Label^  ss;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  edit;
	private: System::Windows::Forms::Button^  cancel;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit_student::typeid));
			this->ss = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->select = (gcnew System::Windows::Forms::Button());
			this->students = (gcnew System::Windows::Forms::ComboBox());
			this->fee = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ss
			// 
			this->ss->AutoSize = true;
			this->ss->BackColor = System::Drawing::Color::Transparent;
			this->ss->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ss->ForeColor = System::Drawing::Color::White;
			this->ss->Location = System::Drawing::Point(476, 9);
			this->ss->Name = L"ss";
			this->ss->Size = System::Drawing::Size(323, 39);
			this->ss->TabIndex = 4;
			this->ss->Text = L"Edit Student Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(24, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Select Student";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(242, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 26);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(528, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Contact #";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Location = System::Drawing::Point(271, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 26);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fees";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::LightSeaGreen;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::Black;
			this->edit->Location = System::Drawing::Point(539, 255);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(127, 29);
			this->edit->TabIndex = 10;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &Edit_student::edit_Click);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Silver;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::Black;
			this->cancel->Location = System::Drawing::Point(672, 255);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(127, 29);
			this->cancel->TabIndex = 11;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Edit_student::cancel_Click);
			// 
			// select
			// 
			this->select->BackColor = System::Drawing::Color::LightSeaGreen;
			this->select->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->select->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select->ForeColor = System::Drawing::Color::Black;
			this->select->Location = System::Drawing::Point(29, 161);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(164, 28);
			this->select->TabIndex = 12;
			this->select->Text = L"Load Student";
			this->select->UseVisualStyleBackColor = false;
			this->select->Click += gcnew System::EventHandler(this, &Edit_student::select_Click);
			// 
			// students
			// 
			this->students->BackColor = System::Drawing::Color::LightSeaGreen;
			this->students->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->students->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->students->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->students->ForeColor = System::Drawing::Color::Black;
			this->students->FormattingEnabled = true;
			this->students->Location = System::Drawing::Point(29, 123);
			this->students->Name = L"students";
			this->students->Size = System::Drawing::Size(164, 23);
			this->students->TabIndex = 13;
			// 
			// fee
			// 
			this->fee->BackColor = System::Drawing::Color::LightSeaGreen;
			this->fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fee->ForeColor = System::Drawing::Color::White;
			this->fee->Location = System::Drawing::Point(338, 124);
			this->fee->Name = L"fee";
			this->fee->Size = System::Drawing::Size(157, 15);
			this->fee->TabIndex = 14;
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::Color::LightSeaGreen;
			this->contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->ForeColor = System::Drawing::Color::White;
			this->contact->Location = System::Drawing::Point(642, 124);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(157, 15);
			this->contact->TabIndex = 15;
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::LightSeaGreen;
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::Color::White;
			this->address->Location = System::Drawing::Point(338, 186);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(461, 22);
			this->address->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Location = System::Drawing::Point(228, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(579, 33);
			this->label1->TabIndex = 17;
			this->label1->Text = L"_______________________________________________";
			// 
			// Edit_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(819, 304);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->address);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->fee);
			this->Controls->Add(this->students);
			this->Controls->Add(this->select);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ss);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Edit_student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit_student";
			this->Load += gcnew System::EventHandler(this, &Edit_student::Edit_student_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Edit_student_Load(System::Object^  sender, System::EventArgs^  e) {
				 load_data(); // loads data into array
				 // putting roll numbers in combo box
				 students->Items->Clear();
				 for (int i = 0; i < rows; i++)
				 {
					 s_roll_no = msclr::interop::marshal_as<String^>(array[i][0]);
					 students->Items->Add(s_roll_no);
				 }

	}
	private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
private: System::Void edit_Click(System::Object^  sender, System::EventArgs^  e) {

			 string st_address = msclr::interop::marshal_as<string>(address->Text);
			 data_integrity_space(st_address);
			 //////////
			 string st_contact = msclr::interop::marshal_as<string>(contact->Text);
			 data_integrity_space(st_contact);
			 if (data_integrity_alpha(st_contact) == false && data_integrity_symbols(st_contact) == false)
				 ;
			 else
			 { 
				 MessageBox::Show("Parents Contact Number SHOULD NOt contain Alphabets or Symbols");
				 st_contact = "";
			 }
			///////////
			 string st_fee = msclr::interop::marshal_as<string>(fee->Text);
			 data_integrity_space(st_fee);
			 if (data_integrity_alpha(st_fee) == false && data_integrity_symbols(st_fee) == false)
				 ;
			 else
			 {
				 MessageBox::Show("Fee SHOULD NOt contain alphabets or symbols");
				 st_fee = "";
			 }
			 if (st_address == "" || st_contact == "" || st_fee == "")
				 MessageBox::Show("All Fields MUST Filled and Correct!");
			 else
			 {
				 /// editing data in array ////////
				 array[index][16] = st_address;
				 array[index][12] = st_contact;
				 array[index][15] = st_fee;
				 /////////////////////////////////
				 write_through_array(); // writes all data into file
				 MessageBox::Show("Information successfully edited!");
				 this->Hide();
				 back->Show();
			 }
}
private: System::Void select_Click(System::Object^  sender, System::EventArgs^  e) {
			 /// loading specific student data into textboxes ///////
			 ifstream read;
			 string search = msclr::interop::marshal_as<string>(students->Text);
			 index = 0;
			 read.open("Students.txt");
			 if (!read)
				 cout << "\nStudent File NOT Opened!";
			 else
			 {
				 for (; index < rows; index++)
				 {
					 if (search == array[index][0])
						 break;
				 }
			 }
			 s_address = msclr::interop::marshal_as<String^>(array[index][16]);
			 address->Text = s_address;
			 s_contact = msclr::interop::marshal_as<String^>(array[index][12]);
			 contact->Text = s_contact;
			 s_fee = msclr::interop::marshal_as<String^>(array[index][15]);
			 fee->Text = s_fee;
}
private: System::Void students_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
