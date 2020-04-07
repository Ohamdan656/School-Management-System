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
	/// Summary for View_teachers
	/// </summary>
	public ref class View_teachers : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_teachers(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_teachers(Form^ obj)
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
		~View_teachers()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  add_new_teacher;








	private: System::Windows::Forms::Button^  done;
	private: System::Windows::Forms::DataGridView^  teachers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_teacher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  degree_teacher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mobile_teacher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  email_teacher;







	protected:


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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(View_teachers::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_new_teacher = (gcnew System::Windows::Forms::Button());
			this->done = (gcnew System::Windows::Forms::Button());
			this->teachers = (gcnew System::Windows::Forms::DataGridView());
			this->name_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->degree_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mobile_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email_teacher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teachers))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(589, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"All Teachers";
			// 
			// add_new_teacher
			// 
			this->add_new_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->add_new_teacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_new_teacher->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_new_teacher->ForeColor = System::Drawing::SystemColors::ControlText;
			this->add_new_teacher->Location = System::Drawing::Point(654, 230);
			this->add_new_teacher->Name = L"add_new_teacher";
			this->add_new_teacher->Size = System::Drawing::Size(159, 40);
			this->add_new_teacher->TabIndex = 2;
			this->add_new_teacher->Text = L"Add New+ Teacher";
			this->add_new_teacher->UseVisualStyleBackColor = false;
			this->add_new_teacher->Click += gcnew System::EventHandler(this, &View_teachers::add_new_teacher_Click);
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Silver;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::SystemColors::ControlText;
			this->done->Location = System::Drawing::Point(654, 276);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(159, 40);
			this->done->TabIndex = 4;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_teachers::done_Click);
			// 
			// teachers
			// 
			this->teachers->AllowUserToAddRows = false;
			this->teachers->AllowUserToDeleteRows = false;
			this->teachers->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->teachers->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->teachers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->teachers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->name_teacher,
					this->gender, this->degree_teacher, this->mobile_teacher, this->email_teacher
			});
			this->teachers->Location = System::Drawing::Point(12, 166);
			this->teachers->Name = L"teachers";
			this->teachers->ReadOnly = true;
			this->teachers->Size = System::Drawing::Size(481, 150);
			this->teachers->TabIndex = 5;
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
			this->name_teacher->HeaderText = L"Name";
			this->name_teacher->Name = L"name_teacher";
			this->name_teacher->ReadOnly = true;
			this->name_teacher->Width = 60;
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
			this->gender->HeaderText = L"Gender";
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->gender->Width = 67;
			// 
			// degree_teacher
			// 
			this->degree_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Gainsboro;
			this->degree_teacher->DefaultCellStyle = dataGridViewCellStyle3;
			this->degree_teacher->HeaderText = L"Degree";
			this->degree_teacher->Name = L"degree_teacher";
			this->degree_teacher->ReadOnly = true;
			this->degree_teacher->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->degree_teacher->Width = 67;
			// 
			// mobile_teacher
			// 
			this->mobile_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Gainsboro;
			this->mobile_teacher->DefaultCellStyle = dataGridViewCellStyle4;
			this->mobile_teacher->HeaderText = L"Mobile #";
			this->mobile_teacher->Name = L"mobile_teacher";
			this->mobile_teacher->ReadOnly = true;
			this->mobile_teacher->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->mobile_teacher->Width = 73;
			// 
			// email_teacher
			// 
			this->email_teacher->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Gainsboro;
			this->email_teacher->DefaultCellStyle = dataGridViewCellStyle5;
			this->email_teacher->HeaderText = L"Email";
			this->email_teacher->Name = L"email_teacher";
			this->email_teacher->ReadOnly = true;
			this->email_teacher->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->email_teacher->Width = 57;
			// 
			// View_teachers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(830, 329);
			this->Controls->Add(this->teachers);
			this->Controls->Add(this->done);
			this->Controls->Add(this->add_new_teacher);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_teachers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_teachers";
			this->Load += gcnew System::EventHandler(this, &View_teachers::View_teachers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teachers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		///////////
	private: System::Void View_teachers_Load(System::Object^  sender, System::EventArgs^  e) {
				 Administrator admin;
				 int rows=admin.view_teachers();
				 ifstream read;
				 read.open("Teachers.txt");
				 if (!read)
					 cout << "\nTeachers file NOT Opened!";
				 else
				 {
					 string temp;

					 for (int i = 0; i < rows; i++)
					 {
						 Teacher obj;
						 read >> temp;
						 obj.set_cnic(temp);
						 read >> temp;
						 obj.set_fname(temp);
						 read >> temp;
						 obj.set_lname(temp);
						 read >> temp;
						 obj.set_email(temp);
						 read >> temp;
						 obj.set_gender(temp);
						 read >> temp;
						 obj.set_contact(temp);
						 read >> temp;
						 obj.set_birth(temp);
						 read >> temp;
						 obj.set_join_date(temp);
						 read >> temp;
						 obj.set_pass(temp);
						 read >> temp;
						 obj.set_qual(temp);
						 read >> temp;
						 obj.set_salary(temp);
						 read >> temp;
						 obj.set_address(temp);
						 ///// Converting string into String //////
						 String^ fname = msclr::interop::marshal_as<String^>(obj.get_fname());
						 String^ lname = msclr::interop::marshal_as<String^>(obj.get_lname());
						 String^ gender = msclr::interop::marshal_as<String^>(obj.get_gender());
						 String^ qual = msclr::interop::marshal_as<String^>(obj.get_qual());
						 String^ contact = msclr::interop::marshal_as<String^>(obj.get_contact());
						 String^ email = msclr::interop::marshal_as<String^>(obj.get_email());
						 /////////// Adding Row //////
						 teachers->Rows->Add(lname+"."+fname,gender, qual, contact, email);
						 //students_grid->Rows->Add("what");
					 }
				 }
	}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void add_new_teacher_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Add_teacher ^obj = gcnew Add_teacher(this);
			 obj->Show();
}
};
}
