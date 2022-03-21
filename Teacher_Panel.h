#pragma once
#include"Assinged_courses.h"
#include"Upload_marks.h"
namespace SMS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Teacher_Panel
	/// </summary>
	public ref class Teacher_Panel : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		Teacher_Panel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Teacher_Panel(Form^ obj)
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
		~Teacher_Panel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::Button^  Back;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  upload_marks;


	private: System::Windows::Forms::Button^  view_courses;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher_Panel::typeid));
			this->Back = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->upload_marks = (gcnew System::Windows::Forms::Button());
			this->view_courses = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->Back->TabIndex = 94;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Teacher_Panel::Back_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(5, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(555, 33);
			this->label4->TabIndex = 91;
			this->label4->Text = L"_____________________________________________";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// upload_marks
			// 
			this->upload_marks->BackColor = System::Drawing::Color::Coral;
			this->upload_marks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upload_marks->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->upload_marks->Location = System::Drawing::Point(550, 247);
			this->upload_marks->Name = L"upload_marks";
			this->upload_marks->Size = System::Drawing::Size(367, 52);
			this->upload_marks->TabIndex = 90;
			this->upload_marks->Text = L"Upload Marks";
			this->upload_marks->UseVisualStyleBackColor = false;
			this->upload_marks->Click += gcnew System::EventHandler(this, &Teacher_Panel::upload_marks_Click);
			// 
			// view_courses
			// 
			this->view_courses->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->view_courses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_courses->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_courses->Location = System::Drawing::Point(138, 247);
			this->view_courses->Name = L"view_courses";
			this->view_courses->Size = System::Drawing::Size(367, 52);
			this->view_courses->TabIndex = 88;
			this->view_courses->Text = L"View My Courses";
			this->view_courses->UseVisualStyleBackColor = false;
			this->view_courses->Click += gcnew System::EventHandler(this, &Teacher_Panel::view_courses_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(28, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 45);
			this->label1->TabIndex = 87;
			this->label1->Text = L"Teacher Panel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(766, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 54);
			this->label2->TabIndex = 95;
			this->label2->Text = L"Teacher\'s Panel";
			// 
			// Teacher_Panel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1054, 460);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->upload_marks);
			this->Controls->Add(this->view_courses);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teacher_Panel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teacher_Panel";
			this->Load += gcnew System::EventHandler(this, &Teacher_Panel::Teacher_Panel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Teacher_Panel_Load(System::Object^  sender, System::EventArgs^  e) {
				 string c_login;
				 ifstream read;
				 read.open("t_login.txt");
				 if (!read)
					 cout << "\nLogin file NOT Opened!";
				 else
				 {
					 string fname, lname;
					 read >> fname;
					 read >> lname;
					 c_login = fname + " " + lname;
					 String^ teacher = msclr::interop::marshal_as<String^>(c_login);
					 label1->Text = teacher;
				 }
				 read.close();
	}
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void view_courses_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Assinged_courses^ obj = gcnew Assinged_courses(this);
			 obj->ShowDialog();
}
private: System::Void upload_marks_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Upload_marks^ obj = gcnew Upload_marks(this);
			 obj->ShowDialog();
}
};
}
