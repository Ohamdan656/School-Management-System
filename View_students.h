#pragma once
#include"Add_student.h"

namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class View_students : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_students(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_students(Form ^obj)
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
		~View_students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  add_new_student;
	protected:

	private: System::Windows::Forms::DataGridView^  students_grid;











	private: System::Windows::Forms::Button^  done;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rol_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  email;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(View_students::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_new_student = (gcnew System::Windows::Forms::Button());
			this->students_grid = (gcnew System::Windows::Forms::DataGridView());
			this->Rol_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->done = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"All Students List";
			// 
			// add_new_student
			// 
			this->add_new_student->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->add_new_student->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_new_student->ForeColor = System::Drawing::Color::Black;
			this->add_new_student->Location = System::Drawing::Point(611, 215);
			this->add_new_student->Name = L"add_new_student";
			this->add_new_student->Size = System::Drawing::Size(164, 35);
			this->add_new_student->TabIndex = 1;
			this->add_new_student->Text = L"Add New+ Student";
			this->add_new_student->UseVisualStyleBackColor = false;
			this->add_new_student->Click += gcnew System::EventHandler(this, &View_students::add_new_student_Click);
			// 
			// students_grid
			// 
			this->students_grid->AllowUserToAddRows = false;
			this->students_grid->AllowUserToDeleteRows = false;
			this->students_grid->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->students_grid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->students_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->students_grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Rol_No,
					this->name, this->clas, this->email, this->fee
			});
			this->students_grid->Location = System::Drawing::Point(17, 92);
			this->students_grid->Name = L"students_grid";
			this->students_grid->ReadOnly = true;
			this->students_grid->Size = System::Drawing::Size(494, 199);
			this->students_grid->TabIndex = 2;
			// 
			// Rol_No
			// 
			this->Rol_No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Gainsboro;
			this->Rol_No->DefaultCellStyle = dataGridViewCellStyle1;
			this->Rol_No->HeaderText = L"Roll No";
			this->Rol_No->Name = L"Rol_No";
			this->Rol_No->ReadOnly = true;
			this->Rol_No->Width = 67;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Gainsboro;
			this->name->DefaultCellStyle = dataGridViewCellStyle2;
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->name->Width = 60;
			// 
			// clas
			// 
			this->clas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Gainsboro;
			this->clas->DefaultCellStyle = dataGridViewCellStyle3;
			this->clas->HeaderText = L"Class";
			this->clas->Name = L"clas";
			this->clas->ReadOnly = true;
			this->clas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->clas->Width = 57;
			// 
			// email
			// 
			this->email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Gainsboro;
			this->email->DefaultCellStyle = dataGridViewCellStyle4;
			this->email->HeaderText = L"Email";
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->email->Width = 57;
			// 
			// fee
			// 
			this->fee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Gainsboro;
			this->fee->DefaultCellStyle = dataGridViewCellStyle5;
			this->fee->HeaderText = L"Fees";
			this->fee->Name = L"fee";
			this->fee->ReadOnly = true;
			this->fee->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->fee->Width = 55;
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->done->Location = System::Drawing::Point(611, 256);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(164, 35);
			this->done->TabIndex = 3;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_students::done_Click);
			// 
			// View_students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(787, 303);
			this->Controls->Add(this->done);
			this->Controls->Add(this->students_grid);
			this->Controls->Add(this->add_new_student);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_students";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &View_students::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				Administrator admin;
				int rows=admin.view_students();
				ifstream read;
				read.open("Students.txt");
				if (!read)
					cout << "\nStudents file NOT Opened!";
				else
				{
					string temp;

					for (int i = 0; i < rows; i++)
					{
						Student obj;
						read >> temp;
						obj.set_roll(temp);
						read >> temp;
						obj.set_fname(temp);
						read >> temp;
						obj.set_lname(temp);
						read >> temp;
						obj.set_email(temp);
						read >> temp;
						obj.set_reg_date(temp);
						read >> temp;
						obj.set_clas(temp);
						read >> temp;
						obj.set_gender(temp);
						read >> temp;
						obj.set_contact(temp);
						read >> temp;
						obj.set_father(temp);
						read >> temp;
						obj.set_mother(temp);
						read >> temp;
						obj.set_father_pro(temp);
						read >> temp;
						obj.set_mother_pro(temp);
						read >> temp;
						obj.set_parent_contact(temp);
						read >> temp;
						obj.set_birth(temp);
						read >> temp;
						obj.set_blood(temp);
						read >> temp;
						obj.set_fee(temp);
						read >> temp;
						obj.set_address(temp);
						read >> temp;// for fee
						///// Converting string into String //////
						String^ fname = msclr::interop::marshal_as<String^>(obj.get_fname());
						String^ lname = msclr::interop::marshal_as<String^>(obj.get_lname());
						String^ roll = msclr::interop::marshal_as<String^>(obj.get_roll());
						String^ email = msclr::interop::marshal_as<String^>(obj.get_email());
						String^ clas = msclr::interop::marshal_as<String^>(obj.get_clas());
						String^ fee = msclr::interop::marshal_as<String^>(obj.get_fee());
						/////////// Adding Row //////
						students_grid->Rows->Add(roll,fname+"-"+lname,clas,email,fee);
					}
				}
	}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void add_new_student_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Add_student ^obj = gcnew Add_student(this);
			 obj->ShowDialog();
}
};
}
