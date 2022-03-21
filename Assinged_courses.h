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
	/// Summary for Assinged_courses
	/// </summary>
	public ref class Assinged_courses : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		bool student = false;
		Assinged_courses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Assinged_courses(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Assinged_courses(Form^ obj,bool check,string clas)
		{
			back = obj;
			student = true;
			InitializeComponent();
		//	courses.Columns[0].HeaderText = "My Header";
			courses->Columns[3]->HeaderText = "Teacher";
			//
			//TODO: Add the constructor code here
			//
		}
		int count_students(string clas,string teacher)
		{
			int counter = 0;
			string rol,teacher1;
			ifstream read;
			read.open(clas);
			if (!read)
				cout << "\nClass file NOT Opened!";
			else
			{
				string fname, lname;
				while (!read.eof())
				{
					read >> rol;
					read >> fname;
					read >> lname;
					teacher1 = fname + " " + lname;
					if (teacher==teacher1)
					counter++;
				}
			}
			read.close();
			return counter;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Assinged_courses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  courses;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_teacher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  degree_teacher;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  view_courses;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->courses = (gcnew System::Windows::Forms::DataGridView());
			this->name_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->degree_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->view_courses = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->BeginInit();
			this->SuspendLayout();
			// 
			// courses
			// 
			this->courses->AllowUserToAddRows = false;
			this->courses->AllowUserToDeleteRows = false;
			this->courses->BackgroundColor = System::Drawing::Color::MediumSpringGreen;
			this->courses->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courses->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->courses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->courses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name_teacher,
					this->gender, this->clas, this->degree_teacher
			});
			this->courses->Location = System::Drawing::Point(12, 74);
			this->courses->Name = L"courses";
			this->courses->ReadOnly = true;
			this->courses->Size = System::Drawing::Size(481, 150);
			this->courses->TabIndex = 6;
			// 
			// name_teacher
			// 
			this->name_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Gainsboro;
			this->name_teacher->DefaultCellStyle = dataGridViewCellStyle1;
			this->name_teacher->HeaderText = L"Main Course";
			this->name_teacher->Name = L"name_teacher";
			this->name_teacher->ReadOnly = true;
			this->name_teacher->Width = 84;
			// 
			// gender
			// 
			this->gender->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Gainsboro;
			this->gender->DefaultCellStyle = dataGridViewCellStyle2;
			this->gender->HeaderText = L"Name & Code";
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->gender->Width = 67;
			// 
			// clas
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->clas->DefaultCellStyle = dataGridViewCellStyle3;
			this->clas->HeaderText = L"Class";
			this->clas->Name = L"clas";
			this->clas->ReadOnly = true;
			this->clas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// degree_teacher
			// 
			this->degree_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Gainsboro;
			this->degree_teacher->DefaultCellStyle = dataGridViewCellStyle4;
			this->degree_teacher->HeaderText = L"Registered Students";
			this->degree_teacher->Name = L"degree_teacher";
			this->degree_teacher->ReadOnly = true;
			this->degree_teacher->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->degree_teacher->Width = 117;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 45);
			this->label1->TabIndex = 88;
			this->label1->Text = L"Assigned Courses";
			// 
			// view_courses
			// 
			this->view_courses->BackColor = System::Drawing::Color::Black;
			this->view_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_courses->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_courses->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->view_courses->Location = System::Drawing::Point(683, 223);
			this->view_courses->Name = L"view_courses";
			this->view_courses->Size = System::Drawing::Size(119, 44);
			this->view_courses->TabIndex = 89;
			this->view_courses->Text = L"Done";
			this->view_courses->UseVisualStyleBackColor = false;
			this->view_courses->Click += gcnew System::EventHandler(this, &Assinged_courses::view_courses_Click_1);
			// 
			// Assinged_courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ClientSize = System::Drawing::Size(814, 279);
			this->Controls->Add(this->view_courses);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->courses);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Assinged_courses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Assinged_courses";
			this->Load += gcnew System::EventHandler(this, &Assinged_courses::Assinged_courses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Assinged_courses_Load(System::Object^  sender, System::EventArgs^  e) {
				 if (student == false){
					 ifstream read;
					 string c_login;
					 read.open("t_login.txt");
					 if (!read)
						 cout << "\nLogin file NOT Opened!";
					 else
					 {
						 string fname, lname;
						 read >> fname;
						 read >> lname;
						 c_login = fname + " " + lname;
					 }
					 read.close();
					 read.open(c_login);
					 if (!read)
						 cout << "\nAssigned Courses file NOT Opened!";
					 else
					 {
						 string main_course, course, clas;
						 int qt;
						 while (!read.eof())
						 {
							 read >> course >> course >> course;
							 read >> main_course;
							 read >> clas;
							 qt = count_students(clas, c_login);
							 String^ main_course1 = msclr::interop::marshal_as<String^>(main_course);
							 String^ course1 = msclr::interop::marshal_as<String^>(course);
							 String^ clas1 = msclr::interop::marshal_as<String^>(clas);
							 String^ qt1 = msclr::interop::marshal_as<String^>(to_string(qt));
							 courses->Rows->Add(main_course1, course1, clas1, qt1);
						 }
					 }
				 }
				 else
				 {

				 }
	}
private: System::Void view_courses_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
