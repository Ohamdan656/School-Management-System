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
	/// Summary for Assign_course
	/// </summary>
	public ref class Assign_course : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		string **data,**courses,**array;
		int rows = 0,qt=0,s_rows=0;
	private: System::Windows::Forms::ComboBox^  clas;
	private: System::Windows::Forms::Label^  label4;
	public:		 Assign_course(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Assign_course(Form^ obj)
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
		void load_courses()
		{
			Administrator admin;
			ifstream read;
			qt = admin.view_courses();
			courses = new  string*[rows];
			for (int i = 0; i < qt; i++)
			{
				courses[i] = new string[4];
			}
			///// loading data /////
			read.open("Courses.txt");
			if (!read)
				cout << "\nCourses file NOT Opened ERROR!";
			else
			{
				for (int i = 0; i < qt; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						read >> courses[i][j];
					}
				}
			}
		}
		void load_Students_data()
		{
			Administrator admin;
			ifstream read;
			read.open("Students.txt");
			if (!read)
				cout << "\nStudent File NOT Opened!";
			else
			{
				s_rows = admin.view_students();
				// initializing array
				array = new string*[s_rows];
				for (int i = 0; i < s_rows; i++)
				{
					array[i] = new string[18];
				}
				////// putting data into array ////
				for (int i = 0; i < s_rows; i++)
				{
					for (int j = 0; j < 18; j++)
					{
						read >> array[i][j];
					}
				}
				////////////////////////////////
			}
		}
		void include_clas(string clas,string teacher)
		{
			ofstream write;
			write.open(clas,ios::app);
			for (int i = 0; i < s_rows; i++)
			{
				if (array[i][5] == clas)
				{
					write << endl << array[i][0] << " ";
					write << teacher;
				}
			}
			write.close();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Assign_course()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  load_course;

	private: System::Windows::Forms::ComboBox^  main_courses;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Button^  submit;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  sub_courses;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  teacher;


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
			this->load_course = (gcnew System::Windows::Forms::Button());
			this->main_courses = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sub_courses = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->teacher = (gcnew System::Windows::Forms::ComboBox());
			this->clas = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// load_course
			// 
			this->load_course->BackColor = System::Drawing::Color::Black;
			this->load_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->load_course->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->load_course->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->load_course->Location = System::Drawing::Point(23, 151);
			this->load_course->Name = L"load_course";
			this->load_course->Size = System::Drawing::Size(144, 56);
			this->load_course->TabIndex = 89;
			this->load_course->Text = L"Load Sub Courses";
			this->load_course->UseVisualStyleBackColor = false;
			this->load_course->Click += gcnew System::EventHandler(this, &Assign_course::load_course_Click);
			// 
			// main_courses
			// 
			this->main_courses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->main_courses->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->main_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->main_courses->FormattingEnabled = true;
			this->main_courses->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Computer", L"Mechanical", L"Commerce", L"Mathematics" });
			this->main_courses->Location = System::Drawing::Point(23, 117);
			this->main_courses->Name = L"main_courses";
			this->main_courses->Size = System::Drawing::Size(144, 21);
			this->main_courses->TabIndex = 88;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 32);
			this->label2->TabIndex = 86;
			this->label2->Text = L"Assign Course";
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Black;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->cancel->Location = System::Drawing::Point(593, 221);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(119, 32);
			this->cancel->TabIndex = 85;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Assign_course::cancel_Click);
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Black;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->submit->Location = System::Drawing::Point(468, 221);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(119, 32);
			this->submit->TabIndex = 84;
			this->submit->Text = L"Assign";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Assign_course::submit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(237, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 22);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Sub Course";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 22);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Select Main Course";
			// 
			// sub_courses
			// 
			this->sub_courses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->sub_courses->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sub_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sub_courses->FormattingEnabled = true;
			this->sub_courses->Location = System::Drawing::Point(215, 117);
			this->sub_courses->Name = L"sub_courses";
			this->sub_courses->Size = System::Drawing::Size(144, 21);
			this->sub_courses->TabIndex = 92;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(416, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 32);
			this->label6->TabIndex = 93;
			this->label6->Text = L"Assign To";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(628, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 22);
			this->label7->TabIndex = 94;
			this->label7->Text = L"Teacher";
			// 
			// teacher
			// 
			this->teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->teacher->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->teacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->teacher->FormattingEnabled = true;
			this->teacher->Location = System::Drawing::Point(593, 117);
			this->teacher->Name = L"teacher";
			this->teacher->Size = System::Drawing::Size(144, 21);
			this->teacher->TabIndex = 95;
			// 
			// clas
			// 
			this->clas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->clas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->clas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clas->FormattingEnabled = true;
			this->clas->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Play_Group", L"KG", L"Nersery", L"Class_1", L"Class_2",
					L"Class_3", L"Class_4", L"Class_5", L"Class_6", L"Class_7", L"Class_8", L"Class_9", L"Class_10"
			});
			this->clas->Location = System::Drawing::Point(215, 176);
			this->clas->Name = L"clas";
			this->clas->Size = System::Drawing::Size(144, 21);
			this->clas->TabIndex = 97;
			this->clas->SelectedIndexChanged += gcnew System::EventHandler(this, &Assign_course::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(247, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 22);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Of Class";
			// 
			// Assign_course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(804, 297);
			this->Controls->Add(this->clas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->teacher);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->sub_courses);
			this->Controls->Add(this->load_course);
			this->Controls->Add(this->main_courses);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Assign_course";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Assign_course";
			this->Load += gcnew System::EventHandler(this, &Assign_course::Assign_course_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Assign_course_Load(System::Object^  sender, System::EventArgs^  e) {
				 load_data();
				 load_Students_data();
				 load_courses();
				 String^ temp;
				 for (int i = 0; i < rows; i++)
				 {
					 temp = msclr::interop::marshal_as<String^>(data[i][1] + " " + data[i][2]);
					 teacher->Items->Add(temp);
				 }
	}
private: System::Void load_course_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 sub_courses->Items->Clear();
			 string temp = msclr::interop::marshal_as<string>(main_courses->Text);
			 for (int i = 0; i < qt; i++)
			 {
				 if (temp == courses[i][3])
				 {
					 String^ temp2=msclr::interop::marshal_as<String^>(courses[i][0]+ " "+"( Code :"+courses[i][1]+" )");
					 sub_courses->Items->Add(temp2);
				 }
			 }
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Administrator admin;
			 Course obj;

			 string sub = msclr::interop::marshal_as<string>(sub_courses->Text);
			 if (sub != "")
			 {
				 data_integrity_space(sub);
				 obj.set_c_name(sub);
			 }
			 string clas1 = msclr::interop::marshal_as<string>(clas->Text);
			 if (clas1 != "")
				 obj.set_c_class(clas1);
			 string main = msclr::interop::marshal_as<string>(main_courses->Text);
			 if (main != "")
				 obj.set_parent_course(main);
			 string t= msclr::interop::marshal_as<string>(teacher->Text);
			 if (t == "" || sub=="" || main=="" || clas1=="")
				 MessageBox::Show("All Fields must be filled!");
			 else
			 {
				 include_clas(clas1, t);// create a file of clas name and putt all roll numbers of that clas students
				 obj.set_teacher(t);
				 admin.assign_course_to_teacher(obj);
				 MessageBox::Show("Course Assigned to Respective Teacher.");
				 this->Hide();
				 back->Show();
			 }
}
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
