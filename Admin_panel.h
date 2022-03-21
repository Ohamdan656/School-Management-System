#pragma once
#include<msclr/marshal_cppstd.h>
#include"Add_teacher.h"
#include"Add_student.h"
#include"Add_course.h"
#include"View_teachers.h"
#include"View_students.h"
#include"View_courses.h"
#include"Fee_status.h"
#include"Edit_student.h"
#include"Edit_teacher.h"
#include"Pay_fee.h"
#include"Assign_course.h"
#include"View_marks.h"
#include"View_feedbacks.h"

namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Admin_panel : public System::Windows::Forms::Form
	{
	public:
		Form ^back;
		Admin_panel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Admin_panel(Form ^b)
		{
			back = b;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin_panel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  add_student;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  add_teacher;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  add_course;
	private: System::Windows::Forms::Button^  Back;

	private: System::Windows::Forms::Button^  view_courses;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  view_teacher;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  view_student;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  edit_teacher;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  edit_student;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Button^  fee_status;
	private: System::Windows::Forms::Button^  update_fee;
	private: System::Windows::Forms::Button^  assign_course;
	private: System::Windows::Forms::Button^  view_marks;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_panel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_student = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->add_teacher = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_course = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->view_courses = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->view_teacher = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->view_student = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->edit_teacher = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->edit_student = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->fee_status = (gcnew System::Windows::Forms::Button());
			this->update_fee = (gcnew System::Windows::Forms::Button());
			this->assign_course = (gcnew System::Windows::Forms::Button());
			this->view_marks = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(861, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Panel";
			this->label1->Click += gcnew System::EventHandler(this, &Admin_panel::label1_Click);
			// 
			// add_student
			// 
			this->add_student->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->add_student->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_student->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_student->Location = System::Drawing::Point(26, 246);
			this->add_student->Name = L"add_student";
			this->add_student->Size = System::Drawing::Size(200, 48);
			this->add_student->TabIndex = 6;
			this->add_student->Text = L"Student";
			this->add_student->UseVisualStyleBackColor = false;
			this->add_student->Click += gcnew System::EventHandler(this, &Admin_panel::add_student_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(97, 182);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L" Add";
			// 
			// add_teacher
			// 
			this->add_teacher->BackColor = System::Drawing::Color::Coral;
			this->add_teacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_teacher->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_teacher->Location = System::Drawing::Point(26, 312);
			this->add_teacher->Name = L"add_teacher";
			this->add_teacher->Size = System::Drawing::Size(200, 48);
			this->add_teacher->TabIndex = 9;
			this->add_teacher->Text = L"Teacher";
			this->add_teacher->UseVisualStyleBackColor = false;
			this->add_teacher->Click += gcnew System::EventHandler(this, &Admin_panel::add_teacher_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(504, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(555, 33);
			this->label4->TabIndex = 10;
			this->label4->Text = L"_____________________________________________";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(22, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"|__________________________|";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// add_course
			// 
			this->add_course->BackColor = System::Drawing::Color::CornflowerBlue;
			this->add_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_course->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_course->ForeColor = System::Drawing::Color::Black;
			this->add_course->Location = System::Drawing::Point(26, 377);
			this->add_course->Name = L"add_course";
			this->add_course->Size = System::Drawing::Size(200, 48);
			this->add_course->TabIndex = 12;
			this->add_course->Text = L"Course";
			this->add_course->UseVisualStyleBackColor = false;
			this->add_course->Click += gcnew System::EventHandler(this, &Admin_panel::add_course_Click);
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(12, 12);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(79, 33);
			this->Back->TabIndex = 72;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Admin_panel::Back_Click);
			// 
			// view_courses
			// 
			this->view_courses->BackColor = System::Drawing::Color::CornflowerBlue;
			this->view_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_courses->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_courses->ForeColor = System::Drawing::Color::Black;
			this->view_courses->Location = System::Drawing::Point(296, 377);
			this->view_courses->Name = L"view_courses";
			this->view_courses->Size = System::Drawing::Size(200, 48);
			this->view_courses->TabIndex = 77;
			this->view_courses->Text = L"Course";
			this->view_courses->UseVisualStyleBackColor = false;
			this->view_courses->Click += gcnew System::EventHandler(this, &Admin_panel::view_courses_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(292, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 20);
			this->label5->TabIndex = 76;
			this->label5->Text = L"|__________________________|";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// view_teacher
			// 
			this->view_teacher->BackColor = System::Drawing::Color::Coral;
			this->view_teacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_teacher->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_teacher->Location = System::Drawing::Point(296, 312);
			this->view_teacher->Name = L"view_teacher";
			this->view_teacher->Size = System::Drawing::Size(200, 48);
			this->view_teacher->TabIndex = 75;
			this->view_teacher->Text = L"Teacher";
			this->view_teacher->UseVisualStyleBackColor = false;
			this->view_teacher->Click += gcnew System::EventHandler(this, &Admin_panel::view_teacher_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(367, 182);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 33);
			this->label6->TabIndex = 74;
			this->label6->Text = L"view";
			// 
			// view_student
			// 
			this->view_student->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->view_student->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_student->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_student->Location = System::Drawing::Point(296, 246);
			this->view_student->Name = L"view_student";
			this->view_student->Size = System::Drawing::Size(200, 48);
			this->view_student->TabIndex = 73;
			this->view_student->Text = L"Student";
			this->view_student->UseVisualStyleBackColor = false;
			this->view_student->Click += gcnew System::EventHandler(this, &Admin_panel::view_student_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gray;
			this->label7->Location = System::Drawing::Point(559, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 20);
			this->label7->TabIndex = 81;
			this->label7->Text = L"|__________________________|";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// edit_teacher
			// 
			this->edit_teacher->BackColor = System::Drawing::Color::Coral;
			this->edit_teacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_teacher->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_teacher->Location = System::Drawing::Point(563, 312);
			this->edit_teacher->Name = L"edit_teacher";
			this->edit_teacher->Size = System::Drawing::Size(200, 48);
			this->edit_teacher->TabIndex = 80;
			this->edit_teacher->Text = L"Teacher";
			this->edit_teacher->UseVisualStyleBackColor = false;
			this->edit_teacher->Click += gcnew System::EventHandler(this, &Admin_panel::edit_teacher_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(634, 182);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 33);
			this->label8->TabIndex = 79;
			this->label8->Text = L"Edit";
			// 
			// edit_student
			// 
			this->edit_student->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->edit_student->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_student->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_student->Location = System::Drawing::Point(563, 246);
			this->edit_student->Name = L"edit_student";
			this->edit_student->Size = System::Drawing::Size(200, 48);
			this->edit_student->TabIndex = 78;
			this->edit_student->Text = L"Student";
			this->edit_student->UseVisualStyleBackColor = false;
			this->edit_student->Click += gcnew System::EventHandler(this, &Admin_panel::edit_student_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(800, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 45);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// fee_status
			// 
			this->fee_status->BackColor = System::Drawing::Color::LightGray;
			this->fee_status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fee_status->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fee_status->Location = System::Drawing::Point(842, 246);
			this->fee_status->Name = L"fee_status";
			this->fee_status->Size = System::Drawing::Size(200, 48);
			this->fee_status->TabIndex = 82;
			this->fee_status->Text = L"Fee Status";
			this->fee_status->UseVisualStyleBackColor = false;
			this->fee_status->Click += gcnew System::EventHandler(this, &Admin_panel::fee_status_Click);
			// 
			// update_fee
			// 
			this->update_fee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->update_fee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update_fee->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_fee->ForeColor = System::Drawing::Color::Black;
			this->update_fee->Location = System::Drawing::Point(842, 312);
			this->update_fee->Name = L"update_fee";
			this->update_fee->Size = System::Drawing::Size(200, 48);
			this->update_fee->TabIndex = 83;
			this->update_fee->Text = L"Update Fee";
			this->update_fee->UseVisualStyleBackColor = false;
			this->update_fee->Click += gcnew System::EventHandler(this, &Admin_panel::update_fee_Click);
			// 
			// assign_course
			// 
			this->assign_course->BackColor = System::Drawing::Color::CornflowerBlue;
			this->assign_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->assign_course->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assign_course->Location = System::Drawing::Point(842, 377);
			this->assign_course->Name = L"assign_course";
			this->assign_course->Size = System::Drawing::Size(200, 48);
			this->assign_course->TabIndex = 84;
			this->assign_course->Text = L"Assign Course";
			this->assign_course->UseVisualStyleBackColor = false;
			this->assign_course->Click += gcnew System::EventHandler(this, &Admin_panel::assign_course_Click);
			// 
			// view_marks
			// 
			this->view_marks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_marks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_marks->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_marks->Location = System::Drawing::Point(296, 439);
			this->view_marks->Name = L"view_marks";
			this->view_marks->Size = System::Drawing::Size(200, 48);
			this->view_marks->TabIndex = 85;
			this->view_marks->Text = L"Final Marks";
			this->view_marks->UseVisualStyleBackColor = false;
			this->view_marks->Click += gcnew System::EventHandler(this, &Admin_panel::view_marks_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Gray;
			this->label9->Location = System::Drawing::Point(828, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(227, 20);
			this->label9->TabIndex = 87;
			this->label9->Text = L"|__________________________|";
			this->label9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(876, 182);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(158, 33);
			this->label10->TabIndex = 86;
			this->label10->Text = L"Miscellaneous";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(842, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 48);
			this->button1->TabIndex = 88;
			this->button1->Text = L"View Feedbacks";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin_panel::button1_Click);
			// 
			// Admin_panel
			// 
			this->AccessibleName = L"Admin_panel";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1070, 499);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->view_marks);
			this->Controls->Add(this->assign_course);
			this->Controls->Add(this->update_fee);
			this->Controls->Add(this->fee_status);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->edit_teacher);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->edit_student);
			this->Controls->Add(this->view_courses);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->view_teacher);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->view_student);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->add_course);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->add_teacher);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->add_student);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin_panel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_panel Panel";
			this->Load += gcnew System::EventHandler(this, &Admin_panel::Admin_panel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_student_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Add_student ^obj = gcnew Add_student(this);
				 obj->ShowDialog();
	}
	private: System::Void add_teacher_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Add_teacher ^obj = gcnew Add_teacher(this);
				 obj->ShowDialog();
	}
	private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
	private: System::Void add_course_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Add_course ^obj = gcnew Add_course(this);
				 obj->Show();
	}			 
private: System::Void view_teacher_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_teachers ^obj = gcnew View_teachers(this);
			 obj->ShowDialog();
}
private: System::Void view_student_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_students ^obj = gcnew View_students(this);
			 obj->Show();
}
private: System::Void view_courses_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_courses ^obj = gcnew View_courses(this);
			 obj->Show();

}
private: System::Void Admin_panel_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void edit_student_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Edit_student ^obj = gcnew Edit_student(this);
			 obj->Show();
}
private: System::Void edit_teacher_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Edit_teacher ^obj = gcnew Edit_teacher(this);
			 obj->Show();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void fee_status_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Studentfees ^obj = gcnew Studentfees(this);
			 obj->ShowDialog();
}
private: System::Void update_fee_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Pay_fee ^obj = gcnew Pay_fee(this);
			 obj->ShowDialog();
}
private: System::Void assign_course_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Assign_course^ obj = gcnew Assign_course(this);
			 obj->ShowDialog();
}
private: System::Void view_marks_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_marks^ obj = gcnew View_marks(this);
			 obj->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_feedbacks^ obj = gcnew View_feedbacks(this);
			 obj->ShowDialog();
}
};
}
