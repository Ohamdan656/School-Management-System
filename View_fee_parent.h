#pragma once
#include"Pay_fee.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View_fee_parent
	/// </summary>
	public ref class View_fee_parent : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_fee_parent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_fee_parent(Form^ obj)
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
		~View_fee_parent()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^  rol;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  done;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  total_fee;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  paid;

	private: System::Windows::Forms::Label^  label6;


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
			this->rol = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->done = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->total_fee = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->paid = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rol
			// 
			this->rol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->rol->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rol->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rol->ForeColor = System::Drawing::Color::Black;
			this->rol->Location = System::Drawing::Point(215, 107);
			this->rol->Name = L"rol";
			this->rol->ReadOnly = true;
			this->rol->Size = System::Drawing::Size(143, 14);
			this->rol->TabIndex = 87;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 38);
			this->label2->TabIndex = 86;
			this->label2->Text = L"Fee Status";
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::Coral;
			this->done->Location = System::Drawing::Point(461, 256);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(119, 32);
			this->done->TabIndex = 85;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_fee_parent::done_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(121, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 22);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Roll #";
			// 
			// total_fee
			// 
			this->total_fee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->total_fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->total_fee->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_fee->ForeColor = System::Drawing::Color::Black;
			this->total_fee->Location = System::Drawing::Point(215, 144);
			this->total_fee->Name = L"total_fee";
			this->total_fee->ReadOnly = true;
			this->total_fee->Size = System::Drawing::Size(143, 14);
			this->total_fee->TabIndex = 93;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 22);
			this->label1->TabIndex = 92;
			this->label1->Text = L"Total Fee";
			// 
			// paid
			// 
			this->paid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->paid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->paid->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paid->ForeColor = System::Drawing::Color::Black;
			this->paid->Location = System::Drawing::Point(215, 185);
			this->paid->Name = L"paid";
			this->paid->ReadOnly = true;
			this->paid->Size = System::Drawing::Size(143, 14);
			this->paid->TabIndex = 95;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(121, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 22);
			this->label6->TabIndex = 94;
			this->label6->Text = L"Paid Fee";
			// 
			// View_fee_parent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->ClientSize = System::Drawing::Size(592, 300);
			this->Controls->Add(this->paid);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->total_fee);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rol);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->done);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_fee_parent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_fee_parent";
			this->Load += gcnew System::EventHandler(this, &View_fee_parent::View_fee_parent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void View_fee_parent_Load(System::Object^  sender, System::EventArgs^  e) {
				 ifstream read;
				 read.open("p_login.txt");
				 string current_student;
				 read >> current_student;
				 read.close();

				 read.open("Students.txt");
				 string roll;
				 while (!read.eof())
				 {
					 read >> roll;
					 if (current_student == roll)
					 {
						 string total, paid_fee;
						 read >> total >> total >> total >> total >> total >> total
							 >> total >> total >> total >> total >> total >> total
							 >> total >> total >> total;
						 read >> paid_fee >> paid_fee;
						 String^ total1 = msclr::interop::marshal_as<String^>(total);
						 String^ paid_fee1 = msclr::interop::marshal_as<String^>(paid_fee);
						 String^ roll1 = msclr::interop::marshal_as<String^>(roll);
						 rol->Text = roll1;
						 total_fee->Text = total1;
						 paid->Text = paid_fee1;
						 break;
					 }
					 else
					 {
						 read >> roll >> roll >> roll >> roll >> roll >> roll >> roll >> roll
							 >> roll >> roll >> roll >> roll >> roll >> roll >> roll
							 >> roll >> roll;
					 }
				 }

	}
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
