#pragma once
#include"View_marks.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View_marks_parent
	/// </summary>
	public ref class View_marks_parent : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_marks_parent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_marks_parent(Form^ obj)
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
		~View_marks_parent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  done;
	protected:




	private: System::Windows::Forms::Button^  show;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  number;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  type;



	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::DataGridView^  marks;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rol_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  obtained;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fee;


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
			this->done = (gcnew System::Windows::Forms::Button());
			this->show = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->marks = (gcnew System::Windows::Forms::DataGridView());
			this->Rol_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->obtained = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marks))->BeginInit();
			this->SuspendLayout();
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->done->Location = System::Drawing::Point(778, 286);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(144, 35);
			this->done->TabIndex = 143;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_marks_parent::done_Click);
			// 
			// show
			// 
			this->show->BackColor = System::Drawing::Color::Black;
			this->show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->show->Location = System::Drawing::Point(12, 164);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(279, 35);
			this->show->TabIndex = 141;
			this->show->Text = L"Show Marks";
			this->show->UseVisualStyleBackColor = false;
			this->show->Click += gcnew System::EventHandler(this, &View_marks_parent::show_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(230, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 27);
			this->label5->TabIndex = 136;
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
			this->number->Location = System::Drawing::Point(235, 109);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(56, 21);
			this->number->TabIndex = 135;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 27);
			this->label4->TabIndex = 134;
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
			this->type->Location = System::Drawing::Point(12, 109);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(144, 21);
			this->type->TabIndex = 133;
			this->type->SelectedIndexChanged += gcnew System::EventHandler(this, &View_marks_parent::type_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 38);
			this->label2->TabIndex = 129;
			this->label2->Text = L"View Marks";
			// 
			// marks
			// 
			this->marks->AllowUserToAddRows = false;
			this->marks->AllowUserToDeleteRows = false;
			this->marks->BackgroundColor = System::Drawing::Color::MediumSpringGreen;
			this->marks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->marks->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->marks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->marks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Rol_No, this->obtained,
					this->fee
			});
			this->marks->Location = System::Drawing::Point(12, 205);
			this->marks->Name = L"marks";
			this->marks->ReadOnly = true;
			this->marks->Size = System::Drawing::Size(501, 109);
			this->marks->TabIndex = 144;
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
			this->Rol_No->ReadOnly = true;
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
			this->obtained->ReadOnly = true;
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
			this->fee->ReadOnly = true;
			this->fee->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->fee->Width = 81;
			// 
			// View_marks_parent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ClientSize = System::Drawing::Size(934, 333);
			this->Controls->Add(this->marks);
			this->Controls->Add(this->done);
			this->Controls->Add(this->show);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->type);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_marks_parent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_marks_parent";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void type_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void show_Click(System::Object^  sender, System::EventArgs^  e) {
				 marks->Rows->Clear();
				 ifstream read;
				 read.open("p_login.txt");
				 string current_student;
				 read >> current_student;
				 read.close();

				 string type1 = msclr::interop::marshal_as<string>(type->Text);
				 string num1 = msclr::interop::marshal_as<string>(number->Text);
				 string file_name = type1 + num1;
				 read.open(file_name);
				 if (!read)
					 MessageBox::Show("No Marks uploaded yet for this type!");
				 else
				 {
					 string rol1, obt, ttl;
					 while (!read.eof())
					 {
						 read >> rol1;
						 if (rol1 == current_student)
						 {
							 read >> obt;
							 read >> ttl;
							 String^ rol11 = msclr::interop::marshal_as<String^>(rol1);
							 String^ obt1 = msclr::interop::marshal_as<String^>(obt);
							 String^ ttl1 = msclr::interop::marshal_as<String^>(ttl);
							 marks->Rows->Add(rol11, obt1, ttl1);
						 }
						 else
							 read >> rol1 >> rol1;

					 }
				 }
	};
	private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
	};
    }
