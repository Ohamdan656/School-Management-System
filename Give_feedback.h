#pragma once
#include"View_fee_parent.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Give_feedback
	/// </summary>
	public ref class Give_feedback : public System::Windows::Forms::Form
	{
	public:
		Form^ back;
		Give_feedback(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Give_feedback(Form^ obj)
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
		~Give_feedback()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::TextBox^  feedback;
	private: System::Windows::Forms::Button^  cancel;





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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->feedback = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 27);
			this->label6->TabIndex = 137;
			this->label6->Text = L"Your Feedback ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 38);
			this->label2->TabIndex = 129;
			this->label2->Text = L"Respected Parents , Give Feedback Here";
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Black;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->submit->Location = System::Drawing::Point(593, 305);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(117, 35);
			this->submit->TabIndex = 141;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Give_feedback::submit_Click);
			// 
			// feedback
			// 
			this->feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->feedback->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->feedback->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->feedback->ForeColor = System::Drawing::Color::Black;
			this->feedback->Location = System::Drawing::Point(208, 95);
			this->feedback->Multiline = true;
			this->feedback->Name = L"feedback";
			this->feedback->Size = System::Drawing::Size(443, 202);
			this->feedback->TabIndex = 138;
			this->feedback->Text = L"Write Here...";
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Black;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->cancel->Location = System::Drawing::Point(719, 305);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(117, 35);
			this->cancel->TabIndex = 142;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Give_feedback::cancel_Click);
			// 
			// Give_feedback
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(848, 352);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->feedback);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Give_feedback";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Give_feedback";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
				 ifstream read;
				 read.open("p_login.txt");
				 string roll;
				 read >> roll;
				 read.close();

				 string feed = msclr::interop::marshal_as<string>(feedback->Text);
				 ofstream write;
				 write.open("Feedbacks.txt",ios::app);
				 write << endl << roll << " ";
				 write << feed;
				 MessageBox::Show("Your Feedback is saved successfully.");
				 this->Hide();
				 back->Show();
	}
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 back->Show();
}
};
}
