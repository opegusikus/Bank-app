#pragma once
#include"MyForm.h"
namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private:
		AccountRepository^ repo = gcnew AccountRepository();
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	protected:


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginTextBox->Location = System::Drawing::Point(105, 83);
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Size = System::Drawing::Size(151, 32);
			this->LoginTextBox->TabIndex = 0;
			this->LoginTextBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::LoginTextBox_TextChanged);
			this->LoginTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::LoginTextBox_KeyPress);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->Location = System::Drawing::Point(105, 130);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(151, 32);
			this->PasswordTextBox->TabIndex = 1;
			this->PasswordTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::LoginTextBox_KeyPress);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Логін:";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Пароль:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(83, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->LoginTextBox);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginForm::LoginForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Account^acc= this->repo->Login(LoginTextBox->Text,PasswordTextBox->Text);
			if (acc == nullptr) {
				MessageBox::Show("Невірний логін, або пароль");
			}
			else {
				MyForm^ myForm = gcnew MyForm();
				myForm->ParrentForm = this;
				myForm->LoginAccount = acc;
				myForm->Show();
			}
		}
		private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			
		}
		private: System::Void LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
		{

		}
	private: System::Void LoginTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z') || (e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
			e->Handled = false;
		else
			e->Handled = true;
	}
private: System::Void LoginTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
