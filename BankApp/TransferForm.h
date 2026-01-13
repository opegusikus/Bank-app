#pragma once
#include"MyForm.h"
namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TransferForm
	/// </summary>
	public ref class TransferForm : public System::Windows::Forms::Form
	{
		List<Card^>^ cards;
		AccountRepository^ accRepo = gcnew AccountRepository();
		HistoryRepository^ hisRepo = gcnew HistoryRepository();
		//MyForm^ parrentForm=gcnew MyForm();
	public:
		/*property MyForm^ ParrentForm
		{
			MyForm^ get() {
				return parrentForm;
			}
			void set(MyForm^ val) {
				parrentForm = val;
				parrentForm->Hide();
			}
		}*/


		property List<Card^>^ Cards 
		{
			List<Card^>^ get() {
				return cards;
			}
			void set(List<Card^>^ cards) {
				this->cards = cards;
			}
		}
		TransferForm(void)
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
		~TransferForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(62, 46);
			this->comboBox1->MaxLength = 16;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(217, 31);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TransferForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TransferForm::comboBox1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(62, 125);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 29);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TransferForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(62, 191);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 30);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &TransferForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Оберіть карту";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(58, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введіть номер карти отримувача";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(58, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Сума";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(91, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TransferForm::button1_Click);
			// 
			// TransferForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(351, 292);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TransferForm";
			this->Text = L"TransferForm";
			this->Load += gcnew System::EventHandler(this, &TransferForm::TransferForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
	void DeleteBadSymbols(TextBox^textBox) 
	{
		try {
			int length = textBox->Text->Length;

			for (int i = 0; i < length; ++i)
			{
				char symbol = textBox->Text[i];
				if ((symbol < '0' || symbol> '9')&&symbol!='.')
				{
					textBox->Text = textBox->Text->Remove(i, 1);
				}
			}
		}
		catch (...) {}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ from = (String^)comboBox1->SelectedItem;
		String^ to = textBox1->Text;
		String^ sum = textBox2->Text;

		if (from != nullptr) 
		{
			if (to != "0")
			{
				if (sum != "0")
				{
					try {
						double val = Convert::ToDouble(sum);
						bool res = this->accRepo->TransferMoney(from, to, val);
						if (!res)
						{
							MessageBox::Show("Під час транзакції виникла помилка! Перевірте корректність даних", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{
							MessageBox::Show("Транзакцію виконано успішно!", "Увага!", MessageBoxButtons::OK);
							DateTime date = DateTime::Today;

							History^ newHistory = gcnew History();
							newHistory->CardNumver = from;
							newHistory->Date = date;
							newHistory->Operation = "Переведення коштів на карту " + to;
							newHistory->Sum = val;

							History^ newHist = gcnew History();
							newHist->CardNumver = to;
							newHist->Date = date;
							newHist->Operation = "Поповнення картки ";
							newHist->Sum = val;

							hisRepo->Create(newHistory);
							hisRepo->Create(newHist);
							this->Close();

						}
					}
					catch (...) 
					{
						MessageBox::Show("Під час транзакції виникла помилка! Перевірте корректність даних", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else MessageBox::Show("Вкажіть суму", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else MessageBox::Show("Вкажіть карту отримувача","Увага!",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else MessageBox::Show("Вкажіть карту", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void TransferForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		if(Cards!=nullptr)
		{
			for (int i = 0; i < Cards->Count; ++i) 
			{
				comboBox1->Items->Add(Cards[i]->CardNumber);
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		DeleteBadSymbols(textBox1);
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	DeleteBadSymbols(textBox2);
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
		e->Handled = false;
	else
		e->Handled = true;
}
};
}
