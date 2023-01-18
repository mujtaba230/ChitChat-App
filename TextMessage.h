#pragma once
#include <iostream>
#include <ctime>
#include<fstream>
#include"Message.h"
using namespace std;


class TextMessage : public Message
{

	char* Text;

public:

	TextMessage(const char* text);
	void Print();
	char* GetMessage();
	~TextMessage();
};

// Function definitions

TextMessage::TextMessage(const char* text)
{
	int StringLength;
	StringLength = strlen(text);
	Text = new char[StringLength + 1];

	for (int i = 0; i < StringLength; i++)
	{
		Text[i] = text[i];
	}
	Text[StringLength] = '\0';
}

void TextMessage::Print()
{
	cout << Text;
	Message::Print();
}

char* TextMessage::GetMessage()
{
	return Text;
}

TextMessage::~TextMessage()
{
	if (Text != 0)
	{
		delete[] Text;
	}

}