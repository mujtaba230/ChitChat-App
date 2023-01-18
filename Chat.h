#pragma once
#include <iostream>
#include <ctime>
#include<fstream>
#include"Message.h"

using namespace std;


class Chat : Message
{
	Message** Messages;
	int NoOfMessages;
	int maxLimit;

public:

	Chat(int n);
	void AddMessage(Message* msg);
	char* GetMessage();
	void PrintAllMessages();
	void SaveChat(ofstream& file);
	~Chat();

};

// Function definitions
Chat::Chat(int n)
{
	maxLimit = n;
	Messages = new Message * [n];
	NoOfMessages = 0;
}

void Chat::AddMessage(Message* msg)
{
	Messages[NoOfMessages++] = msg;
}

char* Chat::GetMessage()
{
	return  0;
}

void Chat::PrintAllMessages()
{
	DateTime::Now.PrintDate();

	for (int i = 0; i < NoOfMessages; i++)
		Messages[i]->Print();
}

void Chat::SaveChat(ofstream& file)
{
	for (int i = 0; i < NoOfMessages; i++)
	{

		file << Messages[i]->GetMessage() << "\t" << DateTime::Now.GetHour() << ":" << DateTime::Now.GetMinutes();
		file << endl;

	}
	cout << "Chat Saved Successfully!" << endl;
}

Chat::~Chat()
{
	for (int i = 0; i < NoOfMessages; i++)
		delete Messages[i];
	delete[] Messages;
}
