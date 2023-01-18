#pragma once
#include"DateTime.h"
using namespace std;


class Message
{
	DateTime RecievedDateTime;

public:
	Message();

	virtual void Print();

	virtual ~Message();

	virtual char* GetMessage() = 0;

};

// Function definitions

Message::Message()
{
	RecievedDateTime = DateTime::Now;
}

void Message::Print()
{
	cout << ".....";
	RecievedDateTime.PrintTime();
}

Message:: ~Message() {}
