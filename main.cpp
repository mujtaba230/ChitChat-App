#include"Chat.h"
#include"DateTime.h"
#include"Helper.h"
#include"Message.h"
#include"Sticker.h"
#include"TextMessage.h"
using namespace std;
class Message;
class DateTime;
class Sticker;
class TextMessage;
class Chat;


int main()
{

	//	1 for White		2 for Blue		3 for Green			4 for Purple

	Helper::ChangeInterface(4);
	time_t curr = time(NULL);
	DateTime::Now.SetCurrentDateTime();

	//--------------------------------------------------------------------------------------------------------------

	cout << "\t\t---------------------------------------------------------\t\t" << endl;
	cout << "\t\t|							|" << endl;
	cout << "\t\t|     ...WELCOME TO CHIT CHAT APPLICATION...\t\t|" << endl;
	cout << "\t\t---------------------------------------------------------\t\t" << endl;
	cout << endl;
	cout << "\t________________________________MY CHAT 1________________________________" << endl;
	cout << endl;
	cout << endl;

	Chat myChat(50);	//We can have total 50 messages at max.

	myChat.AddMessage(new TextMessage("Hello"));
	myChat.AddMessage(new TextMessage("How Are you!"));
	myChat.AddMessage(new TextMessage("Im Great!"));
	myChat.AddMessage(new Sticker("Smile.gif"));
	myChat.AddMessage(new TextMessage("My Final Exams Are Comming..."));
	myChat.AddMessage(new Sticker("Sad.gif"));
	myChat.AddMessage(new TextMessage("Oh Thats Bad."));
	myChat.AddMessage(new TextMessage("Best of Luck for your Exams"));
	myChat.AddMessage(new TextMessage("But There is A Good News As Well"));
	myChat.AddMessage(new TextMessage("What is it???"));
	myChat.AddMessage(new Sticker("Surprise.gif"));
	myChat.AddMessage(new TextMessage("We Successfully Completed Our OOP project"));
	myChat.AddMessage(new TextMessage("Oh Wow! Thats AWESOME"));
	myChat.AddMessage(new Sticker("Laugh.gif"));
	myChat.AddMessage(new TextMessage("Congratulations!!!! chad"));
	myChat.AddMessage(new Sticker("ThumbsUp.gif"));
	myChat.AddMessage(new TextMessage("Thanks !"));
	myChat.AddMessage(new TextMessage("See Ya !"));

	myChat.PrintAllMessages();

	ofstream file1;

	file1.open("SavedChat.txt");
	myChat.SaveChat(file1);

	cout << "\t________________________________CHAT ENDED________________________________" << endl;

	return 0;

}