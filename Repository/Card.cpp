#include "pch.h"
#include "Card.h"
Card::Card(String^ cardNumber, int cvv, int securCode) 
{
	this->cardNumber = cardNumber;
	this->cvv = cvv;
	this->securCode = securCode;
}
Card::Card() {

}
GroupBox^ Card::CreateCardPanel(Point p) 
{
	GroupBox^ panel = gcnew GroupBox();
	panel->Location = p;
	panel->Width = 430;
	panel->Height = 150;
	panel->BackColor = Color::White;
	panel->ForeColor = Color::Black;
	panel->Font = gcnew Font("Calibri", 15);

	PictureBox^picture = gcnew PictureBox();
	picture->Image = gcnew Bitmap("icons\\card.bmp");
	picture->Location = Point(10, 20);
	picture->Size = picture->Image->Size;
	
	Label^ cardInfo = gcnew Label();
	cardInfo->Location = Point(140, 40);
	cardInfo->Text = CardNumber + "\n" + Balance.ToString() + " грн";
	cardInfo->Width = 150;
	cardInfo->Height = 100;

	panel->Controls->Add(picture);
	panel->Controls->Add(cardInfo);
	return panel;
}