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
	/// Summary for Pay_fee
	/// </summary>
	public ref class Pay_fee : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		string **array;
		int index = 0;
	private: System::Windows::Forms::Button^  load;
	public:

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  new_fee;
	private: System::Windows::Forms::Label^  label5;
	public:
		int rows = 0;
		Pay_fee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pay_fee(Form^ obj)
		{
			back = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool data_integrity_space(string& st)
		{
			bool flag = false;
			int size = st.length();
			cout << size;
			for (int s = 0; s < size; s++)
			{
				if (st[s] == ' ')
					flag = true;
			}
			return flag;
		}
		bool data_integrity_alpha(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (((int)st[s] >= 65 && (int)st[s] <= 90) || ((int)st[s] >= 97 && (int)st[s] <= 122))
					return true;
			}
			return false;
		}
		bool data_integrity_symbols(string& st)
		{
			int size = st.length();
			for (int s = 0; s < size; s++)
			{
				if (!(((int)st[s] >= 65 && (int)st[s] <= 90) || ((int)st[s] >= 97 && (int)st[s] <= 122) || (int)st[s] == 95 || ((int)st[s] >= 48 && (int)st[s] <= 57)))
					return true;
			}
			return false;
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
	private: void write_through_array()
	{
				 ofstream write;
				 write.open("Students.txt");
				 if (!write)
					 cout << "\nStudents file NOT Opened!";
				 else
				 {
					 for (int i = 0; i < rows; i++)
					 {
						 write << endl;
						 for (int j = 0; j < 18; j++)
						 {
							 write << " " << array[i][j];
						 }
					 }
				 }
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pay_fee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  total_fee;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Button^  submit;


	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  students;

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
			this->total_fee = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->students = (gcnew System::Windows::Forms::ComboBox());
			this->load = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->new_fee = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// total_fee
			// 
			this->total_fee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->total_fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->total_fee->Enabled = false;
			this->total_fee->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_fee->ForeColor = System::Drawing::Color::Black;
			this->total_fee->Location = System::Drawing::Point(510, 96);
			this->total_fee->Name = L"total_fee";
			this->total_fee->Size = System::Drawing::Size(143, 14);
			this->total_fee->TabIndex = 76;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 38);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Pay Fee";
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Black;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->cancel->Location = System::Drawing::Point(581, 193);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(119, 32);
			this->cancel->TabIndex = 73;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Pay_fee::cancel_Click);
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Black;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->submit->Location = System::Drawing::Point(456, 193);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(119, 32);
			this->submit->TabIndex = 72;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Pay_fee::submit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(390, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 22);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Total Fee";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 22);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Student Name";
			// 
			// students
			// 
			this->students->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->students->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->students->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->students->FormattingEnabled = true;
			this->students->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Computer", L"Mechanical", L"Commerce", L"Mathematics" });
			this->students->Location = System::Drawing::Point(144, 79);
			this->students->Name = L"students";
			this->students->Size = System::Drawing::Size(144, 21);
			this->students->TabIndex = 77;
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::Black;
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->load->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->load->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->load->Location = System::Drawing::Point(144, 106);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(144, 32);
			this->load->TabIndex = 78;
			this->load->Text = L"Load Fee";
			this->load->UseVisualStyleBackColor = false;
			this->load->Click += gcnew System::EventHandler(this, &Pay_fee::load_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(376, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 22);
			this->label4->TabIndex = 71;
			this->label4->Text = L"Add Fee (Rs)";
			// 
			// new_fee
			// 
			this->new_fee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->new_fee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->new_fee->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_fee->ForeColor = System::Drawing::Color::Black;
			this->new_fee->Location = System::Drawing::Point(510, 136);
			this->new_fee->Name = L"new_fee";
			this->new_fee->Size = System::Drawing::Size(143, 14);
			this->new_fee->TabIndex = 79;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkRed;
			this->label5->Location = System::Drawing::Point(507, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 13);
			this->label5->TabIndex = 80;
			this->label5->Text = L"This fee will be added to previous paid fee";
			// 
			// Pay_fee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(786, 240);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->new_fee);
			this->Controls->Add(this->load);
			this->Controls->Add(this->students);
			this->Controls->Add(this->total_fee);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Pay_fee";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pay_fee";
			this->Load += gcnew System::EventHandler(this, &Pay_fee::Pay_fee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pay_fee_Load(System::Object^  sender, System::EventArgs^  e) {
				 load_data(); // loads data into array
				 // putting names in combo box
				 students->Items->Clear();
				 for (int i = 0; i < rows; i++)
				 {
					 String^ name = msclr::interop::marshal_as<String^>(array[i][1] + " " + array[i][2]);
					 students->Items->Add(name);
				 }
	}
	private: System::Void load_Click(System::Object^  sender, System::EventArgs^  e) {
				 string name = msclr::interop::marshal_as<string>(students->Text);
				 for (index = 0; index < rows; index++)
				 {
					 if (array[index][1] + " " + array[index][2] == name)
					 {
						 String^ fees = msclr::interop::marshal_as<String^>(array[index][15]);
						 total_fee->Text = fees;
						 break;
					 }
				 }
	}
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^  e) {
			 string entered_fee = msclr::interop::marshal_as<string>(new_fee->Text);
			 if (data_integrity_alpha(entered_fee) == true || data_integrity_symbols(entered_fee) == true || data_integrity_space(entered_fee) == true)
			 {
				 MessageBox::Show("Fee SHOULD NOt contain alphabets or symbols");
			 }
			 else if (new_fee->Text!="")
			 {
				 int entered_fee1 = atoi(entered_fee.c_str());// conversion from string to int
				 int old_fee = atoi(array[index][17].c_str());/////////// // // /////////////
				 int final_fee = entered_fee1 + old_fee;///////////////// // // ////////////

				 array[index][17] = to_string(final_fee); // conversion from int to string
				 write_through_array();
				 MessageBox::Show("Fee Status Updated!");
				 this->Hide();
				 back->Show();
			 }
			 else
				 MessageBox::Show("Fee Box Should NOT be empty!");

			 
}
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
