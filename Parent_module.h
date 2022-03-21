#pragma once
#include"View_students.h"
#include"View_marks_parent.h"
#include"View_fee_parent.h"
#include"Give_feedback.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Parent_module
	/// </summary>
	public ref class Parent_module : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		Parent_module(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Parent_module(Form^ obj)
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
		~Parent_module()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  give_feedback;
	protected:

	protected:











	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  view_fee;


	private: System::Windows::Forms::Button^  view_marks;

	private: System::Windows::Forms::Button^  Back;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  parent_label;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Parent_module::typeid));
			this->give_feedback = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->view_fee = (gcnew System::Windows::Forms::Button());
			this->view_marks = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->parent_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// give_feedback
			// 
			this->give_feedback->BackColor = System::Drawing::Color::CornflowerBlue;
			this->give_feedback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->give_feedback->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->give_feedback->ForeColor = System::Drawing::Color::Black;
			this->give_feedback->Location = System::Drawing::Point(724, 258);
			this->give_feedback->Name = L"give_feedback";
			this->give_feedback->Size = System::Drawing::Size(259, 58);
			this->give_feedback->TabIndex = 101;
			this->give_feedback->Text = L"Give Feeedback";
			this->give_feedback->UseVisualStyleBackColor = false;
			this->give_feedback->Click += gcnew System::EventHandler(this, &Parent_module::give_feedback_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(116, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(867, 20);
			this->label5->TabIndex = 100;
			this->label5->Text = L"|________________________________________________________________________________"
				L"__________________________|";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// view_fee
			// 
			this->view_fee->BackColor = System::Drawing::Color::Coral;
			this->view_fee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_fee->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_fee->Location = System::Drawing::Point(419, 258);
			this->view_fee->Name = L"view_fee";
			this->view_fee->Size = System::Drawing::Size(259, 58);
			this->view_fee->TabIndex = 99;
			this->view_fee->Text = L"View Fees";
			this->view_fee->UseVisualStyleBackColor = false;
			this->view_fee->Click += gcnew System::EventHandler(this, &Parent_module::view_fee_Click);
			// 
			// view_marks
			// 
			this->view_marks->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->view_marks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_marks->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_marks->Location = System::Drawing::Point(119, 258);
			this->view_marks->Name = L"view_marks";
			this->view_marks->Size = System::Drawing::Size(259, 58);
			this->view_marks->TabIndex = 97;
			this->view_marks->Text = L"View Marks";
			this->view_marks->UseVisualStyleBackColor = false;
			this->view_marks->Click += gcnew System::EventHandler(this, &Parent_module::view_marks_Click);
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
			this->Back->TabIndex = 96;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Parent_module::Back_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(179, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(879, 33);
			this->label4->TabIndex = 93;
			this->label4->Text = L"________________________________________________________________________";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// parent_label
			// 
			this->parent_label->AutoSize = true;
			this->parent_label->BackColor = System::Drawing::Color::Transparent;
			this->parent_label->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parent_label->ForeColor = System::Drawing::Color::Silver;
			this->parent_label->Location = System::Drawing::Point(652, 54);
			this->parent_label->Name = L"parent_label";
			this->parent_label->Size = System::Drawing::Size(114, 45);
			this->parent_label->TabIndex = 89;
			this->parent_label->Text = L"Parent";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(187, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(433, 45);
			this->label2->TabIndex = 102;
			this->label2->Text = L"Have a Good Day MRS / MR .";
			// 
			// Parent_module
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1070, 499);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->give_feedback);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->view_fee);
			this->Controls->Add(this->view_marks);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->parent_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Parent_module";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Parent_module";
			this->Load += gcnew System::EventHandler(this, &Parent_module::Parent_module_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Parent_module_Load(System::Object^  sender, System::EventArgs^  e) {
				 ifstream read;
				 read.open("p_login.txt");
				 string rol;
				 read >> rol;
				 read.close();
				 read.open("Students.txt");
				 while (!read.eof())
				 {
					 string con_rol;
					 read >> con_rol;
					 if (con_rol == rol)
					 {
						 string parent;
						 read >> parent >> parent >> parent >> parent >> parent >> parent >> parent >> parent;
						 String^ parent1 = msclr::interop::marshal_as<String^>(parent);
						 parent_label->Text = parent1;
						 break;
					 }
					 else
					 {
						 read >> con_rol >> con_rol >> con_rol >> con_rol 
							 >> con_rol >> con_rol >> con_rol >> con_rol 
							 >> con_rol >> con_rol >> con_rol >> con_rol 
							 >> con_rol >> con_rol >> con_rol >> con_rol >> con_rol;
					 }
				 }
	}
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
private: System::Void view_marks_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_marks_parent^ obj = gcnew View_marks_parent(this);
			 obj->ShowDialog();
}
private: System::Void view_fee_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_fee_parent^ obj = gcnew View_fee_parent(this);
			 obj->ShowDialog();
}
private: System::Void give_feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Give_feedback^ obj = gcnew Give_feedback(this);
			 obj->ShowDialog();
}
};
}
