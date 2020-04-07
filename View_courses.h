#pragma once
#include"Add_course.h"
using namespace std;
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View_courses
	/// </summary>
	public ref class View_courses : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_courses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_courses(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: void refresh()
	{
				 computer->Items->Clear();
				 mechanical->Items->Clear();
				 commerce->Items->Clear();
				 methematics->Items->Clear();

				 Administrator admin;
				 int const rows = admin.view_courses();
				 string **data = new string*[rows];
				 for (int i = 0; i < rows; i++)
				 {
					 data[i] = new string[4];
				 }
				 ifstream read;
				 read.open("Courses.txt");
				 if (!read)
					 cout << "\nCourses File NOT Opened!";
				 else
				 {
					 String^ name, ^parent;
					 for (int i = 0; i < rows; i++)
					 {
						 for (int j = 0; j < 4; j++)
						 {
							 read >> data[i][j];
						 }
						 ////////////////
						 name = msclr::interop::marshal_as<String^>(data[i][0]);
						 parent = msclr::interop::marshal_as<String^>(data[i][3]);
						 if (parent == "Computer")
						 {
							 computer->Items->Add(name);
						 }
						 else if (parent == "Mechanical")
						 {
							 mechanical->Items->Add(name);
						 }
						 else if (parent == "Commerce")
						 {
							 commerce->Items->Add(name);
						 }
						 else if (parent == "Mathematics")
						 {
							 methematics->Items->Add(name);
						 }

					 }

				 }
				 read.close();
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_courses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::ComboBox^  computer;
	private: System::Windows::Forms::ComboBox^  mechanical;
	private: System::Windows::Forms::ComboBox^  commerce;
	private: System::Windows::Forms::ComboBox^  methematics;
	private: System::Windows::Forms::Button^  add_new;
	private: System::Windows::Forms::Button^  done;
	private: System::Windows::Forms::Button^  fresh;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(View_courses::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->computer = (gcnew System::Windows::Forms::ComboBox());
			this->mechanical = (gcnew System::Windows::Forms::ComboBox());
			this->commerce = (gcnew System::Windows::Forms::ComboBox());
			this->methematics = (gcnew System::Windows::Forms::ComboBox());
			this->add_new = (gcnew System::Windows::Forms::Button());
			this->done = (gcnew System::Windows::Forms::Button());
			this->fresh = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(29, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(173, 212);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"All Courses";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(225, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(173, 212);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(419, 53);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(173, 212);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(611, 53);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(173, 212);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(65, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Computer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(243, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(459, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 26);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Commerce";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(625, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(263, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 26);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Mechanical";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(642, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Methematics";
			// 
			// computer
			// 
			this->computer->FormattingEnabled = true;
			this->computer->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"" });
			this->computer->Location = System::Drawing::Point(41, 231);
			this->computer->Name = L"computer";
			this->computer->Size = System::Drawing::Size(150, 21);
			this->computer->TabIndex = 12;
			// 
			// mechanical
			// 
			this->mechanical->FormattingEnabled = true;
			this->mechanical->Location = System::Drawing::Point(237, 231);
			this->mechanical->Name = L"mechanical";
			this->mechanical->Size = System::Drawing::Size(149, 21);
			this->mechanical->TabIndex = 13;
			// 
			// commerce
			// 
			this->commerce->FormattingEnabled = true;
			this->commerce->Location = System::Drawing::Point(430, 231);
			this->commerce->Name = L"commerce";
			this->commerce->Size = System::Drawing::Size(152, 21);
			this->commerce->TabIndex = 14;
			// 
			// methematics
			// 
			this->methematics->FormattingEnabled = true;
			this->methematics->Location = System::Drawing::Point(619, 231);
			this->methematics->Name = L"methematics";
			this->methematics->Size = System::Drawing::Size(153, 21);
			this->methematics->TabIndex = 15;
			// 
			// add_new
			// 
			this->add_new->BackColor = System::Drawing::Color::Black;
			this->add_new->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_new->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_new->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->add_new->Location = System::Drawing::Point(29, 303);
			this->add_new->Name = L"add_new";
			this->add_new->Size = System::Drawing::Size(107, 35);
			this->add_new->TabIndex = 16;
			this->add_new->Text = L"Add New+";
			this->add_new->UseVisualStyleBackColor = false;
			this->add_new->Click += gcnew System::EventHandler(this, &View_courses::add_new_Click);
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->done->Location = System::Drawing::Point(677, 303);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(107, 35);
			this->done->TabIndex = 17;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_courses::done_Click);
			// 
			// fresh
			// 
			this->fresh->BackColor = System::Drawing::Color::Black;
			this->fresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fresh->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->fresh->Location = System::Drawing::Point(677, 5);
			this->fresh->Name = L"fresh";
			this->fresh->Size = System::Drawing::Size(107, 35);
			this->fresh->TabIndex = 18;
			this->fresh->Text = L"Refresh";
			this->fresh->UseVisualStyleBackColor = false;
			this->fresh->Click += gcnew System::EventHandler(this, &View_courses::fresh_Click);
			// 
			// View_courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(811, 351);
			this->Controls->Add(this->fresh);
			this->Controls->Add(this->done);
			this->Controls->Add(this->add_new);
			this->Controls->Add(this->methematics);
			this->Controls->Add(this->commerce);
			this->Controls->Add(this->mechanical);
			this->Controls->Add(this->computer);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_courses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_courses";
			this->Load += gcnew System::EventHandler(this, &View_courses::View_courses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void View_courses_Load(System::Object^  sender, System::EventArgs^  e) {

				 refresh();
	}
	private: System::Void add_new_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Add_course ^obj = gcnew Add_course(this);
				 obj->ShowDialog();
	}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void fresh_Click(System::Object^  sender, System::EventArgs^  e) {
			 refresh();
}
};
}
