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
	/// Summary for View_marks
	/// </summary>
	public ref class View_marks : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_marks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_marks(Form^ obj)
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
		~View_marks()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  load;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  done;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  students_marks;







	private: System::Windows::Forms::ComboBox^  clases;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rol_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;














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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->load = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->done = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->students_marks = (gcnew System::Windows::Forms::DataGridView());
			this->clases = (gcnew System::Windows::Forms::ComboBox());
			this->Rol_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_marks))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(350, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(350, 32);
			this->label6->TabIndex = 106;
			this->label6->Text = L"Finals Marks of respective class";
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::Black;
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->load->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->load->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->load->Location = System::Drawing::Point(27, 144);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(144, 35);
			this->load->TabIndex = 104;
			this->load->Text = L"Load Marks";
			this->load->UseVisualStyleBackColor = false;
			this->load->Click += gcnew System::EventHandler(this, &View_marks::load_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 32);
			this->label2->TabIndex = 102;
			this->label2->Text = L"View Marks";
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->done->Location = System::Drawing::Point(27, 254);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(144, 32);
			this->done->TabIndex = 100;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_marks::done_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 22);
			this->label1->TabIndex = 98;
			this->label1->Text = L"Select Class";
			// 
			// students_marks
			// 
			this->students_marks->AllowUserToAddRows = false;
			this->students_marks->AllowUserToDeleteRows = false;
			this->students_marks->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->students_marks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->students_marks->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->students_marks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->students_marks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Rol_No,
					this->name, this->clas, this->email, this->fee, this->Date
			});
			this->students_marks->Location = System::Drawing::Point(262, 62);
			this->students_marks->Name = L"students_marks";
			this->students_marks->ReadOnly = true;
			this->students_marks->Size = System::Drawing::Size(505, 236);
			this->students_marks->TabIndex = 107;
			this->students_marks->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &View_marks::students_marks_CellContentClick);
			// 
			// clases
			// 
			this->clases->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->clases->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->clases->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clases->FormattingEnabled = true;
			this->clases->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Play_Group", L"KG", L"Nersery", L"Class_1", L"Class_2",
					L"Class_3", L"Class_4", L"Class_5", L"Class_6", L"Class_7", L"Class_8", L"Class_9", L"Class_10"
			});
			this->clases->Location = System::Drawing::Point(27, 110);
			this->clases->Name = L"clases";
			this->clases->Size = System::Drawing::Size(144, 21);
			this->clases->TabIndex = 108;
			// 
			// Rol_No
			// 
			this->Rol_No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Gainsboro;
			this->Rol_No->DefaultCellStyle = dataGridViewCellStyle13;
			this->Rol_No->HeaderText = L"Roll No";
			this->Rol_No->Name = L"Rol_No";
			this->Rol_No->ReadOnly = true;
			this->Rol_No->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Rol_No->Width = 67;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::Gainsboro;
			this->name->DefaultCellStyle = dataGridViewCellStyle14;
			this->name->HeaderText = L"Course Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->name->Width = 96;
			// 
			// clas
			// 
			this->clas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::Gainsboro;
			this->clas->DefaultCellStyle = dataGridViewCellStyle15;
			this->clas->HeaderText = L"Class";
			this->clas->Name = L"clas";
			this->clas->ReadOnly = true;
			this->clas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->clas->Width = 57;
			// 
			// email
			// 
			this->email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::Gainsboro;
			this->email->DefaultCellStyle = dataGridViewCellStyle16;
			this->email->HeaderText = L"Marks";
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->email->Width = 61;
			// 
			// fee
			// 
			this->fee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::Gainsboro;
			this->fee->DefaultCellStyle = dataGridViewCellStyle17;
			this->fee->HeaderText = L"Total Marks";
			this->fee->Name = L"fee";
			this->fee->ReadOnly = true;
			this->fee->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->fee->Width = 88;
			// 
			// Date
			// 
			this->Date->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Date->DefaultCellStyle = dataGridViewCellStyle18;
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Date->Width = 55;
			// 
			// View_marks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(765, 298);
			this->Controls->Add(this->clases);
			this->Controls->Add(this->students_marks);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->load);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->done);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_marks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_marks";
			this->Load += gcnew System::EventHandler(this, &View_marks::View_marks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_marks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void View_marks_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void load_Click(System::Object^  sender, System::EventArgs^  e) {
			 students_marks->Rows->Clear();
			 string of_clas = msclr::interop::marshal_as<string>(clases->Text);
			 ifstream read;
			 read.open("Final_Marks.txt");
			 if (!read)
				 cout << "\nFinal Marks File NOT Opened!";
			 else
			 {
				 string clas, rol, course, marks, total_marks, date;
				 while (!read.eof())
				 {
					 read >> clas;
					 if (clas == of_clas)
					 {
						 String^ clas1 = msclr::interop::marshal_as<String^>(clas);
						 read >> rol;
						 String^ rol1 = msclr::interop::marshal_as<String^>(rol);
						 read >> course;
						 String^ course1 = msclr::interop::marshal_as<String^>(course);
						 read >> marks;
						 String^ marks1 = msclr::interop::marshal_as<String^>(marks);
						 read >> total_marks;
						 String^ total_marks1 = msclr::interop::marshal_as<String^>(total_marks);
						 read >> date;
						 String^ date1 = msclr::interop::marshal_as<String^>(date);
						 students_marks->Rows->Add(rol1,course1,clas1,marks1,total_marks1,date1);
					 }
					 else
					 {
						 string garbage;
						 read >> garbage >> garbage >> garbage >> garbage >> garbage;
					 }
				 }
			 }
}
private: System::Void students_marks_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
