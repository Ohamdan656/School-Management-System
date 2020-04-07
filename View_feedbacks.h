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
	/// Summary for View_feedbacks
	/// </summary>
	public ref class View_feedbacks : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		View_feedbacks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View_feedbacks(Form^ obj)
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
		~View_feedbacks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  done;
	private: System::Windows::Forms::TextBox^  feedback;
	protected:

	protected:











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
			this->done = (gcnew System::Windows::Forms::Button());
			this->feedback = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Black;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->done->Location = System::Drawing::Point(601, 322);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(117, 35);
			this->done->TabIndex = 141;
			this->done->Text = L"Done";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &View_feedbacks::show_Click);
			// 
			// feedback
			// 
			this->feedback->BackColor = System::Drawing::Color::CornflowerBlue;
			this->feedback->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->feedback->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->feedback->ForeColor = System::Drawing::Color::Black;
			this->feedback->Location = System::Drawing::Point(38, 74);
			this->feedback->Multiline = true;
			this->feedback->Name = L"feedback";
			this->feedback->ReadOnly = true;
			this->feedback->Size = System::Drawing::Size(545, 283);
			this->feedback->TabIndex = 140;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 38);
			this->label2->TabIndex = 129;
			this->label2->Text = L"Feedbacks";
			// 
			// View_feedbacks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(730, 369);
			this->Controls->Add(this->done);
			this->Controls->Add(this->feedback);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"View_feedbacks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_feedbacks";
			this->Load += gcnew System::EventHandler(this, &View_feedbacks::View_feedbacks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void show_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 back->Show();
	}
private: System::Void View_feedbacks_Load(System::Object^  sender, System::EventArgs^  e) {
			 ifstream read;
			 read.open("Feedbacks.txt");
			 string rol, feed;
			 while (!read.eof())
			 {
				 read >> rol;
				 String^ rol1 = msclr::interop::marshal_as<String^>(rol);
				 getline(read, feed);
				 String^ feed1 = msclr::interop::marshal_as<String^>(feed);
				 feedback->Text = feedback->Text + rol1 + "-->>" + "   " + feed1+"  \t  ";
			 }

}
};
}
