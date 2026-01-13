#pragma once
namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TopUpMobile
	/// </summary>
	public ref class TopUpMobile : public System::Windows::Forms::Form
	{
		List<Card^>^ cards;
		AccountRepository^ accRepo = gcnew AccountRepository();
		HistoryRepository^ hisRepo = gcnew HistoryRepository();
		String^ phoneNumber;
	public:
		TopUpMobile(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		property List<Card^>^ Cards
		{
			List<Card^>^ get() {
				return cards;
			}
			void set(List<Card^>^ cards) {
				this->cards = cards;
			}
		}
		property String^ PhoneNumber {
			String^ get() {
				return phoneNumber;
			}
			void set(String^val) {
				phoneNumber = val;
			}
		}



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TopUpMobile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(147, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TopUpMobile::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(147, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 31);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &TopUpMobile::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TopUpMobile::comboBox1_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(147, 59);
			this->comboBox1->MaxLength = 16;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 33);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TopUpMobile::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TopUpMobile::comboBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(64, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Картка:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Номер телефону:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Сума поповнення:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Поповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TopUpMobile::button1_Click);
			// 
			// TopUpMobile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 330);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"TopUpMobile";
			this->Text = L"TopUpMobile";
			this->Load += gcnew System::EventHandler(this, &TopUpMobile::TopUpMobile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private : void DeleteBadSymbols(TextBox^ textBox)
		{
			try {
				int length = textBox->Text->Length;

				for (int i = 0; i < length; ++i)
				{
					char symbol = textBox->Text[i];
					if ((symbol < '0' || symbol> '9') && symbol != '.')
					{
						textBox->Text = textBox->Text->Remove(i, 1);
					}
				}
			}
			catch (...) {}
		}
		private: System::Void TopUpMobile_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			textBox1->Text = PhoneNumber;
			if (Cards != nullptr)
			{
				for (int i = 0; i < Cards->Count; ++i)
				{
					comboBox1->Items->Add(Cards[i]->CardNumber);
				}
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ from = (String^)comboBox1->SelectedItem;
			String^ phone = textBox1->Text;
			String^ sum = textBox2->Text;

			if (from != nullptr)
			{
				if (phone != "")
				{
					if (sum != "0")
					{
						try {
							double val = Convert::ToDouble(sum);

							Card^ card;
							for (int i = 0; i < Cards->Count; ++i)
							{
								if (Cards[i]->CardNumber == from) {
									card = Cards[i];
								}
							}
							if (val <= card->Balance) {

								card->Balance -= val;
								MessageBox::Show("Мобільний поповнено!", "Увага!", MessageBoxButtons::OK);


								History^ newHistory = gcnew History();
								newHistory->CardNumver = from;
								newHistory->Date = DateTime::Today;
								newHistory->Operation = "Поповнення мобільного ";
								newHistory->Sum = val;
								hisRepo->Create(newHistory);


								this->Close();
							}
							else {
								MessageBox::Show("Під час транзакції виникла помилка! Перевірте корректність даних", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
						}
						catch(...)
						{
							MessageBox::Show("Під час транзакції виникла помилка! Перевірте корректність даних", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					
					}
					else MessageBox::Show("Вкажіть суму", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else MessageBox::Show("Вкажіть номер телефону", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else MessageBox::Show("Вкажіть карту", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		DeleteBadSymbols(textBox1);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		DeleteBadSymbols(textBox2);
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
		e->Handled = false;
	else
		e->Handled = true;
}
};
}
