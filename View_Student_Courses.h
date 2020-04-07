#pragma once
#include<iostream>
#include<msclr/marshal_cppstd.h>
#include<string>
#include<fstream>
#include"View_Student_Courses.h"
#include"Admin_panel.h"
using namespace std;
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View_Student_Courses
	/// </summary>
	public ref class View_Student_Courses : public System::Windows::Forms::Form
	{
		Form^ back;
		String^ cl;
	public:
		View_Student_Courses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_Student_Courses(Form^obj,String^a)
		{
			cl = a;
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_Student_Courses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  view_courses;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  courses;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_teacher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;


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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->view_courses = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->courses = (gcnew System::Windows::Forms::DataGridView());
			this->name_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->BeginInit();
			this->SuspendLayout();
			// 
			// view_courses
			// 
			this->view_courses->BackColor = System::Drawing::Color::Black;
			this->view_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_courses->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_courses->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->view_courses->Location = System::Drawing::Point(907, 336);
			this->view_courses->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->view_courses->Name = L"view_courses";
			this->view_courses->Size = System::Drawing::Size(178, 68);
			this->view_courses->TabIndex = 92;
			this->view_courses->Text = L"Done";
			this->view_courses->UseVisualStyleBackColor = false;
			this->view_courses->Click += gcnew System::EventHandler(this, &View_Student_Courses::view_courses_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(31, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 70);
			this->label1->TabIndex = 91;
			this->label1->Text = L"Courses";
			// 
			// courses
			// 
			this->courses->AllowUserToAddRows = false;
			this->courses->AllowUserToDeleteRows = false;
			this->courses->BackgroundColor = System::Drawing::Color::MediumSpringGreen;
			this->courses->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courses->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->courses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->courses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->name_teacher,
					this->gender, this->Column2
			});
			this->courses->Location = System::Drawing::Point(31, 109);
			this->courses->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->courses->Name = L"courses";
			this->courses->ReadOnly = true;
			this->courses->Size = System::Drawing::Size(722, 231);
			this->courses->TabIndex = 90;
			// 
			// name_teacher
			// 
			this->name_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Gainsboro;
			this->name_teacher->DefaultCellStyle = dataGridViewCellStyle5;
			this->name_teacher->HeaderText = L"Main Course";
			this->name_teacher->Name = L"name_teacher";
			this->name_teacher->ReadOnly = true;
			this->name_teacher->Width = 134;
			// 
			// gender
			// 
			this->gender->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Gainsboro;
			this->gender->DefaultCellStyle = dataGridViewCellStyle6;
			this->gender->HeaderText = L"Name";
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->gender->Width = 87;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Code";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// View_Student_Courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ClientSize = System::Drawing::Size(1124, 431);
			this->Controls->Add(this->view_courses);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->courses);
			this->Name = L"View_Student_Courses";
			this->Text = L"View_Student_Courses";
			this->Load += gcnew System::EventHandler(this, &View_Student_Courses::View_Student_Courses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void view_courses_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
private: System::Void View_Student_Courses_Load(System::Object^  sender, System::EventArgs^  e) {
			 ifstream read;
			 string coursename,parent,code,cla;
			 String^ test;
			 read.open("Courses.txt");
			 if (!read)
				 cout << "\nCourses file NOT Opened!";
			 else
			 {
				 while (!read.eof())
				 {
					 read >> coursename>>code>>cla>>parent;
					 test = gcnew String(cla.c_str());
					 if (test == cl)
					 {
						 courses->Rows->Add(gcnew String(parent.c_str()), gcnew String(coursename.c_str()), gcnew String(code.c_str()));
					 }
				 }
			 }
}
		 void MarshalString(String ^ s, string& os) {
			 using namespace Runtime::InteropServices;
			 const char* chars =
				 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			 os = chars;
			 Marshal::FreeHGlobal(IntPtr((void*)chars));
		 }
};
}
