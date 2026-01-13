#pragma once

namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ HistoryForm
	/// </summary>
	public ref class HistoryForm : public System::Windows::Forms::Form
	{
		HistoryRepository^ repo=gcnew HistoryRepository();
		List<Card^>^ cards;
	public:
		property List<Card^>^ Cards
		{
			List<Card^>^ get() {
				return cards;
			}
			void set(List<Card^>^ cards) {
				this->cards = cards;
			}
		}
		HistoryForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~HistoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(28, 87);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(516, 244);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &HistoryForm::listBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(233, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(181, 32);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &HistoryForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HistoryForm::comboBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(164, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L" арта";
			// 
			// HistoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 363);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"HistoryForm";
			this->Text = L"HistoryForm";
			this->Load += gcnew System::EventHandler(this, &HistoryForm::HistoryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		listBox1->Items->Clear();
		String^ card = (String^)comboBox1->SelectedItem;
		List<History^>^ hist = repo->GetHistoriesByCardNumber(card);
		for (int i = 0; i < hist->Count; ++i) 
		{
			listBox1->Items->Add(hist[i]->Date->ToString()+" "+hist[i]->Operation+" "+hist[i]->Sum+" грн");
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void HistoryForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Cards != nullptr)
		{
			for (int i = 0; i < Cards->Count; ++i)
			{
				comboBox1->Items->Add(Cards[i]->CardNumber);
			}
		}
	}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
		e->Handled = false;
	else
		e->Handled = true;
}
};
}
