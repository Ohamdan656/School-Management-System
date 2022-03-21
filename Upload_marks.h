#pragma once
#include"Add_student.h"
#include<msclr/marshal_cppstd.h>
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Upload_marks
	/// </summary>
	public ref class Upload_marks : public System::Windows::Forms::Form
	{
		
	public:
		string **array;
		int rows=0;
		Form^ back;
	private: System::Windows::Forms::Button^  done;
	public:
		int counter = 0;
		Upload_marks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Upload_marks(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Upload_marks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  clas;
	private: System::Windows::Forms::Button^  submit;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  course;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  type;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  number;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  date;
	private: System::Windows::Forms::TextBox^  total_marks;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  show;
	private: System::Windows::Forms::DataGridView^  students;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rol_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  obtained;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fee;












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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->clas = (gcnew System::Windows::Forms::ComboBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->course = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::TextBox());
			this->total_marks = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->show = (gcnew System::Windows::Forms::Button());
			this->students = (gcnew System::Windows::Forms::DataGridView());
			this->Rol_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->obtained = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->done = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students))->BeginInit();
			this->SuspendLayout();
			// 
			// clas
			// 
			this->clas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->clas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->clas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clas->FormattingEnabled = true;
			this->clas->Location = System::Drawing::Point(19, 101);
			this->clas->Name = L"clas";
			this->clas->Size = System::Drawing::Size(144, 21);
			this->clas->TabIndex = 109;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Black;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::Coral;
			this->submit->Location = System::Drawing::Point(621, 423);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(144, 35);
			this->submit->TabIndex = 110;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Upload_marks::load_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 38);
			this->label2->TabIndex = 111;
			this->label2->Text = L"Upload Marks";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 27);
			this->label1->TabIndex = 112;
			this->label1->Text = L"Select Class";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(204, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 27);
			this->label3->TabIndex = 114;
			this->label3->Text = L"Select Course";
			// 
			// course
			// 
			this->course->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->course->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->course->FormattingEnabled = true;
			this->course->Location = System::Drawing::Point(194, 101);
			this->course->Name = L"course";
			this->course->Size = System::Drawing::Size(144, 21);
			this->course->TabIndex = 113;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(386, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 27);
			this->label4->TabIndex = 116;
			this->label4->Text = L"Select Type";
			// 
			// type
			// 
			this->type->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->type->FormattingEnabled = true;
			this->type->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Assignment", L"Class_Assesment", L"Quizz", L"Final" });
			this->type->Location = System::Drawing::Point(376, 101);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(144, 21);
			this->type->TabIndex = 115;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 27);
			this->label5->TabIndex = 118;
			this->label5->Text = L"Number";
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->number->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->number->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->number->FormattingEnabled = true;
			this->number->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->number->Location = System::Drawing::Point(50, 171);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(56, 21);
			this->number->TabIndex = 117;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(237, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 27);
			this->label6->TabIndex = 120;
			this->label6->Text = L"Date";
			// 
			// date
			// 
			this->date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->date->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->ForeColor = System::Drawing::Color::Black;
			this->date->Location = System::Drawing::Point(194, 174);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(143, 14);
			this->date->TabIndex = 121;
			// 
			// total_marks
			// 
			this->total_marks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->total_marks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->total_marks->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_marks->ForeColor = System::Drawing::Color::Black;
			this->total_marks->Location = System::Drawing::Point(376, 174);
			this->total_marks->Name = L"total_marks";
			this->total_marks->Size = System::Drawing::Size(143, 14);
			this->total_marks->TabIndex = 123;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(386, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 27);
			this->label7->TabIndex = 122;
			this->label7->Text = L"Total Marks";
			// 
			// show
			// 
			this->show->BackColor = System::Drawing::Color::Black;
			this->show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show->ForeColor = System::Drawing::Color::Coral;
			this->show->Location = System::Drawing::Point(582, 153);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(117, 35);
			this->show->TabIndex = 124;
			this->show->Text = L"Show List";
			this->show->UseVisualStyleBackColor = false;
			this->show->Click += gcnew System::EventHandler(this, &Upload_marks::show_Click);
			// 
			// students
			// 
			this->students->AllowUserToAddRows = false;
			this->students->AllowUserToDeleteRows = false;
			this->students->BackgroundColor = System::Drawing::Color::Coral;
			this->students->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->students->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->students->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->students->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Rol_No, this->obtained,
					this->fee
			});
			this->students->Location = System::Drawing::Point(19, 222);
			this->students->Name = L"students";
			this->students->Size = System::Drawing::Size(501, 236);
			this->students->TabIndex = 125;
			// 
			// Rol_No
			// 
			this->Rol_No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Gainsboro;
			this->Rol_No->DefaultCellStyle = dataGridViewCellStyle4;
			this->Rol_No->HeaderText = L"Roll No";
			this->Rol_No->Name = L"Rol_No";
			this->Rol_No->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Rol_No->Width = 50;
			// 
			// obtained
			// 
			this->obtained->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Gainsboro;
			this->obtained->DefaultCellStyle = dataGridViewCellStyle5;
			this->obtained->HeaderText = L"Obtained Marks";
			this->obtained->Name = L"obtained";
			this->obtained->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->obtained->Width = 98;
			// 
			// fee
			// 
			this->fee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Gainsboro;
			this->fee->DefaultCellStyle = dataGridViewCellStyle6;
			this->fee->HeaderText = L"Total Marks";
			this->fee->Name = L"fee";
			this->fee->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->fee->Width = 81;
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::Coral;
			this->done->Location = System::Drawing::Point(771, 423);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(144, 35);
			this->done->TabIndex = 126;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &Upload_marks::done_Click);
			// 
			// Upload_marks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->ClientSize = System::Drawing::Size(927, 470);
			this->Controls->Add(this->done);
			this->Controls->Add(this->students);
			this->Controls->Add(this->show);
			this->Controls->Add(this->total_marks);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->date);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->type);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->course);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->clas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Upload_marks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Upload_marks";
			this->Load += gcnew System::EventHandler(this, &Upload_marks::Upload_marks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void load_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 String^ type1 = type->Text;
				 string type2 = msclr::interop::marshal_as<string>(type1);
				 String^ number1 = number->Text;
				 string number2 = msclr::interop::marshal_as<string>(number1);
				 ofstream write;
				 write.open(type2 + number2,ios::app);
				 for (int i = 0; i < counter; i++)
				 {
					 string rol = msclr::interop::marshal_as<string>(students->Rows[i]->Cells[0]->Value->ToString());
					 string obt = msclr::interop::marshal_as<string>(students->Rows[i]->Cells[1]->Value->ToString());
					 string ttl = msclr::interop::marshal_as<string>(students->Rows[i]->Cells[2]->Value->ToString());
					 write << endl << rol << " ";
					 write << obt << " ";
					 write << ttl;
				 }
				 MessageBox::Show("Marks Uploaded!");
	}
private: System::Void Upload_marks_Load(System::Object^  sender, System::EventArgs^  e) {
			 string fname, lname;
			 ifstream read;
			 read.open("t_login.txt");
			 read >> fname>>lname;
			 read.close();
			 string full_name = fname + " " + lname;
			 read.open(full_name);
			 string temp;
			 while (!read.eof())
			 {
				 read >> temp >> temp;
				 read >> temp;
				 String^ temp1 = msclr::interop::marshal_as<String^>(temp);
				 course->Items->Add(temp1);
				 read >> temp;
				 read >> temp;
				 temp1 = msclr::interop::marshal_as<String^>(temp);
				 clas->Items->Add(temp1);
			 }
			 read.close();

}
private: System::Void show_Click(System::Object^  sender, System::EventArgs^  e) {
			 string fname, lname;
			 ifstream read;
			 read.open("t_login.txt");
			 read >> fname >> lname;
			 read.close();
			 string full_name = fname + " " + lname;

			 string clas1 = msclr::interop::marshal_as<string>(clas->Text);
			 read.open(clas1);
			 string rol, fname3, lname3, name;
			 while (!read.eof())
			 {
				 read >> rol;
				 read >> fname3 >> lname3;
				 name = fname3 + " " + lname3;
				 if (name == full_name)
				 {
					 String^ rol1 = msclr::interop::marshal_as<String^>(rol);
					 String^ total = total_marks->Text;
					 students->Rows->Add(rol1, "0", total);
					 counter++;
				 }
			 }
}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
