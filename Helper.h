#pragma once
#include <iostream>
using namespace std;


class Helper
{
public:

	static void ChangeInterface(char x)
	{
		if (x == 1)
		{
			system("color F0");		//white
		}
		else if (x == 2)
		{
			system("color 1F");		//blue
		}
		else if (x == 3)
		{
			system("color 2F");		//green
		}
		else if (x == 4)
		{
			system("color 5F");		//purple
		}
		else
		{
			system("color 31");
		}
	}

	static void PrintSticker(char* fileName)
	{
		if (strcmp(fileName, "ThumbsUp.gif"))
		{
			cout << "(Y)";
		}
		else if (strcmp(fileName, "Laugh.gif"))
		{
			cout << "XD";
		}

		else if (strcmp(fileName, "Smile.gif"))
		{
			cout << " :)";
		}

	}
};
