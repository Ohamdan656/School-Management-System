#pragma once

namespace SMS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Student(Form^ obj)
		{
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
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Button^  Back;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  upload_marks;
	private: System::Windows::Forms::Button^  view_courses;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->upload_marks = (gcnew System::Windows::Forms::Button());
			this->view_courses = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(1082, 12);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(414, 81);
			this->label2->TabIndex = 101;
			this->label2->Text = L"Student\'s Panel";
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(13, 12);
			this->Back->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(118, 51);
			this->Back->TabIndex = 100;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Student::Back_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(9, 222);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(832, 49);
			this->label4->TabIndex = 99;
			this->label4->Text = L"_____________________________________________";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// upload_marks
			// 
			this->upload_marks->BackColor = System::Drawing::Color::Coral;
			this->upload_marks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upload_marks->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->upload_marks->Location = System::Drawing::Point(826, 374);
			this->upload_marks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->upload_marks->Name = L"upload_marks";
			this->upload_marks->Size = System::Drawing::Size(550, 80);
			this->upload_marks->TabIndex = 98;
			this->upload_marks->Text = L"View Marks";
			this->upload_marks->UseVisualStyleBackColor = false;
			// 
			// view_courses
			// 
			this->view_courses->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->view_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_courses->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_courses->Location = System::Drawing::Point(208, 374);
			this->view_courses->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->view_courses->Name = L"view_courses";
			this->view_courses->Size = System::Drawing::Size(550, 80);
			this->view_courses->TabIndex = 97;
			this->view_courses->Text = L"View My Courses";
			this->view_courses->UseVisualStyleBackColor = false;
			this->view_courses->Click += gcnew System::EventHandler(this, &Student::view_courses_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(43, 174);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 70);
			this->label1->TabIndex = 96;
			this->label1->Text = L"Student Panel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(504, 480);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(550, 80);
			this->button1->TabIndex = 102;
			this->button1->Text = L"View Assignments";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1501, 769);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->upload_marks);
			this->Controls->Add(this->view_courses);
			this->Controls->Add(this->label1);
			this->Name = L"Student";
			this->Text = L"Student";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}

private: System::Void view_courses_Click(System::Object^  sender, System::EventArgs^  e) {


}
};
}
