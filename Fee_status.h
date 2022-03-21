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
	/// Summary for Studentfees
	/// </summary>
	public ref class Studentfees : public System::Windows::Forms::Form
	{
	public:
		string **array;
		int rows=0;
	private: System::Windows::Forms::DataGridView^  students_fee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rol_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fee;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Label^  label2;
	public:





			 Form^ back;
		Studentfees(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Studentfees(Form^ obj)
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
		~Studentfees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;










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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->students_fee = (gcnew System::Windows::Forms::DataGridView());
			this->Rol_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_fee))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Students List";
			// 
			// students_fee
			// 
			this->students_fee->AllowUserToAddRows = false;
			this->students_fee->AllowUserToDeleteRows = false;
			this->students_fee->BackgroundColor = System::Drawing::Color::LightGray;
			this->students_fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->students_fee->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->students_fee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->students_fee->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Rol_No,
					this->name, this->clas, this->fee
			});
			this->students_fee->Location = System::Drawing::Point(12, 102);
			this->students_fee->Name = L"students_fee";
			this->students_fee->ReadOnly = true;
			this->students_fee->Size = System::Drawing::Size(555, 168);
			this->students_fee->TabIndex = 3;
			// 
			// Rol_No
			// 
			this->Rol_No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::Gainsboro;
			this->Rol_No->DefaultCellStyle = dataGridViewCellStyle9;
			this->Rol_No->HeaderText = L"Name";
			this->Rol_No->Name = L"Rol_No";
			this->Rol_No->ReadOnly = true;
			this->Rol_No->Width = 60;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Gainsboro;
			this->name->DefaultCellStyle = dataGridViewCellStyle10;
			this->name->HeaderText = L"Roll #";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->name->Width = 60;
			// 
			// clas
			// 
			this->clas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::Gainsboro;
			this->clas->DefaultCellStyle = dataGridViewCellStyle11;
			this->clas->HeaderText = L"Class";
			this->clas->Name = L"clas";
			this->clas->ReadOnly = true;
			this->clas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->clas->Width = 57;
			// 
			// fee
			// 
			this->fee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::Gainsboro;
			this->fee->DefaultCellStyle = dataGridViewCellStyle12;
			this->fee->HeaderText = L"Fees";
			this->fee->Name = L"fee";
			this->fee->ReadOnly = true;
			this->fee->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->fee->Width = 55;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Black;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::LightGray;
			this->submit->Location = System::Drawing::Point(573, 238);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(119, 32);
			this->submit->TabIndex = 73;
			this->submit->Text = L"Done";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Studentfees::submit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(55, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 32);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Fee Status";
			// 
			// Studentfees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(704, 282);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->students_fee);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Studentfees";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Studentfees";
			this->Load += gcnew System::EventHandler(this, &Studentfees::Studentfees_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->students_fee))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void Studentfees_Load(System::Object^  sender, System::EventArgs^  e) {
				 load_data();
				 
				 for (int i = 0; i < rows; i++)
				 {
					 //// converting into Strings^ //////
					 String^ temp_roll = msclr::interop::marshal_as<String^>(array[i][0]);
					 String^ temp_fname = msclr::interop::marshal_as<String^>(array[i][1]);
					 String^ temp_lname = msclr::interop::marshal_as<String^>(array[i][2]);
					 String^ temp_clas = msclr::interop::marshal_as<String^>(array[i][5]);
					 if (array[i][15] == array[i][17])
					 {
						 students_fee->Rows->Add(temp_fname + " " + temp_lname, temp_roll, temp_clas, "Paid");
					 }
					 else if (array[i][15] > array[i][17])
					 {
						 students_fee->Rows->Add(temp_fname + " " + temp_lname, temp_roll, temp_clas, "Not Paid");
					 }
					 else if (array[i][15] < array[i][17])
					 {
						 students_fee->Rows->Add(temp_fname + " " + temp_lname, temp_roll, temp_clas, "Advanced Paid");
					 }
				 }
	}
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
