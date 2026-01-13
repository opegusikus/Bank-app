#pragma once
#include"TransferForm.h"
#include"TopUpMobile.h"
#include"HistoryForm.h"
#include"Payments.h"
#include"CreditForm.h"
#include"DepositForm.h"
namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Account^ loginAccount;
		AccountRepository^ repo = gcnew AccountRepository();
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
		   Form^ parrentForm;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		property Account^ LoginAccount 
		{
			Account^ get() {
				return loginAccount;
			}
			void set(Account^acc) {
				loginAccount = acc;
			}
		}
		property Form^ ParrentForm
		{
			Form^ get() {
				return parrentForm;
			}
			void set(Form^val) {
				parrentForm = val;
				parrentForm->Hide();
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::GroupBox^ groupBox1;





	protected:






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(206, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(635, 480);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Chocolate;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 74);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Платежі";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Chocolate;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 74);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Історія";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Chocolate;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(12, 252);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 74);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Поповнення мобільного";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Chocolate;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(12, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 74);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Перекази";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Chocolate;
			this->button6->Location = System::Drawing::Point(12, 172);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(188, 74);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Кредит";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Chocolate;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(12, 413);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 68);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Депозит";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 504);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:void UploadCards() 
		{
			if (LoginAccount != nullptr)
			{
				LoginAccount = repo->Login(LoginAccount->Login, LoginAccount->Password);
				groupBox1->Controls->Clear();
				int y = 20;
				for (int i = 0; i < LoginAccount->Cards->Count; ++i)
				{
					GroupBox^ panel = LoginAccount->Cards[i]->CreateCardPanel(Point(50, y));
					y += 140;
					groupBox1->Controls->Add(panel);
				}
			}
		}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			UploadCards();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			
		}
		private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			TransferForm^ form = gcnew TransferForm();
			form->Cards = LoginAccount->Cards;
			form->ShowDialog();
			UploadCards();
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			TopUpMobile^ form = gcnew TopUpMobile();
			form->Cards = loginAccount->Cards;
			form->PhoneNumber = loginAccount->NumberPhone;
			form->ShowDialog();
			UploadCards();
		}
		private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) 
		{
			HistoryForm^ form = gcnew HistoryForm();
			form->Cards = loginAccount->Cards;
			form->ShowDialog();

		}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
		{
			Payments^ pay = gcnew Payments();
			pay->Cards = loginAccount->Cards;
			pay->ShowDialog();
			UploadCards();
			repo->Save();
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			CreditForm^ form = gcnew CreditForm();
			form->Cards = loginAccount->Cards;
			form->ShowDialog();
			UploadCards();
			repo->Save();

		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			DepositForm^ form = gcnew DepositForm();
			form->LoginAccount = loginAccount;
			form->ShowDialog();
			UploadCards();
			repo->Save();
		}
};
}
