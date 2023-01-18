#pragma once
#include <iostream>
#include<fstream>
#include"Message.h"
#include"Helper.h"
using namespace std;


class Sticker : public Message
{
	char* fileName;

public:

	Sticker(const char* _fileName);
	void Print();
	char* GetMessage();
	~Sticker();
};

// Function definitions


Sticker::Sticker(const char* _fileName)
{
	int str_len = strlen(_fileName);
	fileName = new char[str_len + 1];

	for (int i = 0; i < str_len; i++)
	{
		fileName[i] = _fileName[i];
	}
	fileName[str_len] = '\0';
}
void Sticker::Print()
{
	Helper::PrintSticker(fileName);
	Message::Print();
}

char* Sticker::GetMessage()
{
	return fileName;
}

Sticker::~Sticker()
{
	if (fileName != 0)
	{
		delete[] fileName;
	}
}