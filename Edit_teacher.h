#pragma once
#include"Add_teacher.h"

namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Edit_teacher
	/// </summary>
	public ref class Edit_teacher : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		string **data;
		int rows,index=0;
	private: System::Windows::Forms::Button^  select;
	private: System::Windows::Forms::TextBox^  t_address;


	private: System::Windows::Forms::ComboBox^  t_qual;
	private: System::Windows::Forms::Button^  edit;
	public:

		Edit_teacher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Edit_teacher(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool data_integrity_space(string& st)
		{
			bool space = false;
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
		int data_integrity_length(string st)
		{
			int size = st.length();
			return size;
		}
		void load_data()
		{
			Administrator admin;
			ifstream read;
			rows = admin.view_teachers();
			data = new  string*[rows];
			for (int i = 0; i < rows; i++)
			{
				data[i] = new string[12];
			}
			///// loading data /////
			read.open("Teachers.txt");
			if (!read)
				cout << "\nTeachers file NOT Opened ERROR!";
			else
			{
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < 12; j++)
					{
						read >> data[i][j];
					}
				}
			}
		}
		void save_through_data()
		{
			ofstream write;
			write.open("Teachers.txt");
			if (!write)
				cout << "\nTeacher file NOT Opened ERROR!";
			else
			{
				for (int i = 0; i < rows; i++)
				{
					write << endl;
					for (int j = 0; j < 12; j++)
					{
						write << " " << data[i][j];
					}
					
				}
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit_teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  teachers;
	private: System::Windows::Forms::TextBox^  t_contact;

	private: System::Windows::Forms::TextBox^  t_salary;




	protected:

	protected:





	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit_teacher::typeid));
			this->teachers = (gcnew System::Windows::Forms::ComboBox());
			this->t_contact = (gcnew System::Windows::Forms::TextBox());
			this->t_salary = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->select = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->t_address = (gcnew System::Windows::Forms::TextBox());
			this->t_qual = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// teachers
			// 
			this->teachers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->teachers->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->teachers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->teachers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teachers->ForeColor = System::Drawing::Color::White;
			this->teachers->FormattingEnabled = true;
			this->teachers->Location = System::Drawing::Point(26, 144);
			this->teachers->Name = L"teachers";
			this->teachers->Size = System::Drawing::Size(165, 23);
			this->teachers->TabIndex = 0;
			// 
			// t_contact
			// 
			this->t_contact->BackColor = System::Drawing::Color::Gray;
			this->t_contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->t_contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_contact->ForeColor = System::Drawing::Color::White;
			this->t_contact->Location = System::Drawing::Point(706, 116);
			this->t_contact->Name = L"t_contact";
			this->t_contact->Size = System::Drawing::Size(141, 16);
			this->t_contact->TabIndex = 1;
			// 
			// t_salary
			// 
			this->t_salary->BackColor = System::Drawing::Color::Gray;
			this->t_salary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->t_salary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_salary->ForeColor = System::Drawing::Color::White;
			this->t_salary->Location = System::Drawing::Point(407, 115);
			this->t_salary->Name = L"t_salary";
			this->t_salary->Size = System::Drawing::Size(141, 16);
			this->t_salary->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(158, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Edit Teacher Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(39, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Select Teacher";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(312, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(603, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 26);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Contact #";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(285, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Qualification";
			this->label6->Click += gcnew System::EventHandler(this, &Edit_teacher::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(335, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 26);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Salary";
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::DimGray;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cancel->Location = System::Drawing::Point(740, 301);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(107, 35);
			this->cancel->TabIndex = 17;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Edit_teacher::cancel_Click_1);
			// 
			// select
			// 
			this->select->BackColor = System::Drawing::Color::DimGray;
			this->select->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->select->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->select->Location = System::Drawing::Point(26, 192);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(165, 35);
			this->select->TabIndex = 18;
			this->select->Text = L"Load Teacher";
			this->select->UseVisualStyleBackColor = false;
			this->select->Click += gcnew System::EventHandler(this, &Edit_teacher::select_Click);
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::DimGray;
			this->edit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->edit->Location = System::Drawing::Point(612, 301);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(107, 35);
			this->edit->TabIndex = 19;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &Edit_teacher::edit_Click);
			// 
			// t_address
			// 
			this->t_address->BackColor = System::Drawing::Color::Gray;
			this->t_address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->t_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_address->ForeColor = System::Drawing::Color::White;
			this->t_address->Location = System::Drawing::Point(407, 175);
			this->t_address->Name = L"t_address";
			this->t_address->Size = System::Drawing::Size(440, 16);
			this->t_address->TabIndex = 21;
			// 
			// t_qual
			// 
			this->t_qual->BackColor = System::Drawing::Color::Gray;
			this->t_qual->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_qual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->t_qual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_qual->ForeColor = System::Drawing::Color::White;
			this->t_qual->FormattingEnabled = true;
			this->t_qual->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Computer", L"Mechanical", L"Commerce", L"Mathematics" });
			this->t_qual->Location = System::Drawing::Point(407, 228);
			this->t_qual->Name = L"t_qual";
			this->t_qual->Size = System::Drawing::Size(141, 24);
			this->t_qual->TabIndex = 22;
			// 
			// Edit_teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 348);
			this->Controls->Add(this->t_qual);
			this->Controls->Add(this->t_address);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->select);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->t_salary);
			this->Controls->Add(this->t_contact);
			this->Controls->Add(this->teachers);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Edit_teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit_Teacher";
			this->Load += gcnew System::EventHandler(this, &Edit_teacher::Edit_teacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Edit_teacher_Load(System::Object^  sender, System::EventArgs^  e) {
				 load_data();
				 String^ temp;
				 for (int i = 0; i < rows; i++)
				 {
					 temp=msclr::interop::marshal_as<String^>(data[i][1] + " " + data[i][2]);
					 teachers->Items->Add(temp);
				 }

	}
	
private: System::Void cancel_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void select_Click(System::Object^  sender, System::EventArgs^  e) {
			 string selected = msclr::interop::marshal_as<string>(teachers->Text);
			 for (int i = 0; i < rows; i++)
			 {
				 if (selected == (data[i][1] + " " + data[i][2]))
				 {
					 index = i;
					 break;
				 }
			 }
			 /// loading data into boxes ////
			 String^ address1 = msclr::interop::marshal_as<String^>(data[index][11]);
			 t_address->Text = address1;
			 String^ contact1 = msclr::interop::marshal_as<String^>(data[index][5]);
			 t_contact->Text = contact1;
			 String^ qual1 = msclr::interop::marshal_as<String^>(data[index][9]);
			 t_qual->Text = qual1;
			 String^ salary1 = msclr::interop::marshal_as<String^>(data[index][10]);
			 t_salary->Text = salary1;
}
private: System::Void edit_Click(System::Object^  sender, System::EventArgs^  e) {
			 string address1 = msclr::interop::marshal_as<string>(t_address->Text);
			 data_integrity_space(address1);
			 ///////
			 string contact1 = msclr::interop::marshal_as<string>(t_contact->Text);
			 data_integrity_space(contact1);
			 if (data_integrity_alpha(contact1) == false && data_integrity_symbols(contact1) == false && (data_integrity_length(contact1) == 11 || data_integrity_length(contact1) == 12))
				 ;
			 else if (!(contact1 == ""))
			 {
				 MessageBox::Show("Contact Number should NOT contain alphabets or symbols & MUST be complete!");
				 contact1 = "";
			 }
			 /////
			 string qual1 = msclr::interop::marshal_as<string>(t_qual->Text);
			 ////
			 string salary1 = msclr::interop::marshal_as<string>(t_salary->Text);
			 if (data_integrity_alpha(salary1) == false && data_integrity_symbols(salary1) == false && data_integrity_space(salary1) == false)
				 ;
			 else
			 {
				 MessageBox::Show("Salary should NOT contain alphabets, symbol or spaces!");
				 salary1 = "";
			 }
			 if ((address1 == "" || contact1 == "" || qual1 == "" || salary1 == ""))
			 {
				 MessageBox::Show("All Fields MUST be Filled!");
			 }
			 else
			 {
				 // putting new data into **data ////
				 data[index][11] = address1;
				 data[index][5] = contact1;
				 data[index][9] = qual1;
				 data[index][10] = salary1;
				 save_through_data(); // save new data
				 MessageBox::Show("Data Edited Successfully!");
				 this->Hide();
				 back->Show();
			 }
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
