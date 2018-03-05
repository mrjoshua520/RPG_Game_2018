#include "stdafx.h"
#include "Kreton_2.h"

enum COLORTWO
{
	black, blue,
	green, cyan,
	red, magenta,
	brown, normal,
	darkgrey, lightblue,
	lightgreen, lightcyan,
	lightred, lightmagenta,
	yellow, white
};


//Not entirely sure what this does but is necessary for coloring text.

ostream& operator<<(ostream &stm, const COLORTWO &c)
{
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(out_handle, c);
	return(stm);
}

Kreton_2::Kreton_2()
{
}


Kreton_2::~Kreton_2()
{
}

void Kreton_2::Kreton()
{
	Intro();
}

void Kreton_2::Intro()
{
	system("cls");
	Sleep(150);
	cout << "You wake upon the bank of the mighty Emerald Stream at about noon. Vague memories of what happened last fill your mind; A flash of light, a deep voice, and one single word ""chosen""." << endl;
	Sleep(150);
	cout << "Even though you have never been to this area before you have heard of it, the Emerald Stream flows down from the Emerald Lake past the city of Kreton." << endl << "A small village despite being the site of a big navel trading post of the region." << endl;
	Sleep(150);
	cout << "Getting to your feet you do notice that all of your gear is still on your person completely undamaged." << endl << "The city gate lies about ten minutes from your current location and a guard can barely be made out standing at his post." << endl;
	Sleep(150);
	cout << "He might have some answers about what happened here." << endl;
	Sleep(150);
	cout << endl << endl;
	system("pause");
	Guard_Dialogue();
}

void Kreton_2::Guard_Dialogue()
{
	string Input;
	bool BadInput = true;

	system("cls");
	Sleep(150);
	cout << "You walk the ten minutes up to the gate taking in the cool air and general nice scenery on the bank of the stream. When you arrive at the gate the guard notices you and nods towards you." << endl;
	Sleep(150);
	cout << yellow << "Good day citizen" << white << endl;
	Sleep(150);
	cout << endl;

	while (BadInput)
	{
		cout << lightred << "Enter 1 to approach the guard." << endl;
		cout << "Enter 2 to enter the city." << endl;
		cout << "Selection: ";
		cin >> Input;
		cout << white;

		if (Input == "1")
		{
			system("cls");
			Sleep(150);
			cout << "You approach the guard as he turns to you." << yellow << endl;
			Sleep(150);
			cout << "How could I be of service to you?" << white << endl << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = false;
		}
		else if (Input == "2")
		{
			system("cls");
			Sleep(150);
			cout << "You nod to the guard as you walk past into the city." << endl << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = false;
			Main_Street();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again." << endl;
			system("pause");
		}
	}

	BadInput = true;

	while (BadInput)
	{
		system("cls");
		cout << lightred << "Enter 1 to ask about the city." << endl;
		cout << "Enter 2 to ask what happened to you." << endl;
		cout << "Enter 3 to ask about any trouble." << endl;
		cout << "Enter 4 to walk into the city." << endl;
		cout << "Selection: ";
		cin >> Input;
		cout << white;

		if (Input == "1")
		{
			system("cls");
			cout << yellow << """It's quite the nice town if I were to say so myself. As you probably already know it's quite a large trading port being next to both the Emerald Stream and the Ozmit Sea.""" << endl; 
			Sleep(150);
			cout << """Other than that it's pretty much just a standard town. Not much happens here.""" << white << endl << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = true;
		}
		else if (Input == "2")
		{
			system("cls");
			Sleep(150);
			cout << yellow << """Don't know, most I saw was you wake up on the bank of the river over there. If I had to guess I'd say you were pretty drunk last night though.""" << white << endl << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = true;
		}
		else if (Input == "3")
		{
			system("cls");
			Sleep(150);
			cout << yellow << """Ah well, a man inside the city has been saying his daughter was taken by a band of goblins yesterday. We would check it out but we have a lot on our plate at the moment.""" << endl;
			Sleep(150);
			cout << """Checking the out might be worthwhile for you.""" << endl << white << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = true;
		}
		else if (Input == "4")
		{
			system("cls");
			Sleep(150);
			cout << "You thank the guard and walk into the city." << endl << endl << endl;
			Sleep(150);
			system("pause");
			BadInput = false;
			Main_Street();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again." << endl;
			system("pause");
		}
	}
}

void Kreton_2::Main_Street()
{
	string Input;
	bool BadInput = true;
	static bool First = true;

	system("cls");
	Sleep(150);
	if (First)
	{
		cout << "Upon entering the city you see multiple people going about their lives along with a couple shops that appear to be open." << endl;
		First = false;
	}
	else if (!First)
	{
		cout << "You return to the main central square. What would you like to do?" << endl;
	}
	Sleep(150);
	cout << endl << lightred << "Enter 1 to talk to someone on the street." << endl;
	cout << "Enter 2 to go to a shop." << endl;
	cout << "Selection: ";
	cin >> Input;
	cout << white;

	while (BadInput)
	{
		if (Input == "1")
		{
			Talk_People();
		}
		else if (Input == "2")
		{
			Go_Shop();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again." << endl;
			system("pause");
		}
	}
}

void Kreton_2::Talk_People()
{
	string Input;
	bool BadInput = true;

	while (BadInput)
	{
		system("cls");
		Sleep(150);
		cout << "Who would you like to talk to?" << endl;
		cout << lightred << "Enter 1 to approach the Farmer." << endl;
		cout << "Enter 2 to approach the Merchant." << endl;
		cout << "Enter 3 to approach the Noble." << endl;
		cout << "Enter 4 to approach the Peasent." << endl;
		cout << "Enter 5 to approach the old lady." << endl;
		cout << "Selection: ";
		cin >> Input;

		if (Input == "1")
		{
			system("cls");
			Sleep(150);
			string Inputthree;
			bool BadInputthree = true;

			system("cls");
			Sleep(150);
			cout << "You see a nervous farmer pacing up and down the street. He speaks to you after you approach him." << endl;
			Sleep(150);
			cout << yellow << "F..FInally, you're an adventurer right? My daughter has been taken by some goblins and I can't get into the cave to rescue her. Could you Please go save her for me?" << endl;
			Sleep(150);

			while (BadInputthree)
			{
				cout << endl << endl << lightred << "Enter 1 to agree" << endl;
				cout << "Enter 2 to say you'll come back later." << endl;
				cout << "selection: ";
				cin >> Inputthree;
				cout << white;

				if (Inputthree == "1")
				{
					Sleep(150);
					cout << yellow << "Oh thank you kindly, I'll pay you when you return." << endl;
					cout << endl << endl << white;
					system("pause");
					Want_Shop();
				}
				else if (Inputthree == "2")
				{
					Sleep(150);
					cout << yellow << "Please come back soon, she might be in danger." << endl;
					cout << endl << endl << white;
					system("pause");
					Main_Street();
				}
				else
				{
					system("cls");
					cout << "Bad Input. Try Again." << endl;
					system("pause");
				}
			}
		}
		else if (Input == "2")
		{
			system("cls");
			Sleep(150);
			cout << "You approach a merchant walking down the street. He turns as you approach." << yellow << endl << "Nice meetin' you adventurer. Sadly I'm all out of goods to sell today. I hope to meet you on the road sometime soon." << endl << endl << endl << white;
			system("pause;");
			Main_Street();
		}
		else if (Input == "3")
		{
			system("cls");
			Sleep(150);
			cout << "You approach a town noble walking down the road. He see you approaching and turns before you get there." << yellow << endl << "I am very busy. Rabble such as yourself have no buisness talking to me. Be on your way!" << endl << endl << endl << white;
			system("pause;");
			Main_Street();
		}
		else if (Input == "4")
		{
			string Inputtwo;
			bool giveGold = false;
			bool BadInputtwo = true;
			CharacterCreation_1 player;

			player.Load_Char();

			system("cls");
			Sleep(150);
			cout << "You see a poor looking man standing on the side of the street. As you approach he begins talking to you." << endl;
			Sleep(150);
			cout << yellow << "Oh hello friend, If you could spare it I am having trouble with money and my kids are very hungry. Could you spare a gold piece for a man to feed his children?" << endl;
			Sleep(150);
			cout << lightred << "You have " << player.item.gold << "." << endl;

			while (BadInputtwo)
			{
				cout << endl << endl << lightred << "Enter 1 to give him some gold." << endl;
				cout << "Enter 2 to not give him a gold piece." << endl;
				cout << "selection: ";
				cin >> Inputtwo;
				cout << white;

				if (Inputtwo == "1" && player.item.gold > 0)
				{
					giveGold = true;
					BadInputtwo = false;
				}
				else if (Inputtwo == "2")
				{
					giveGold = false;
					BadInputtwo = false;
				}
				else
				{
					system("cls");
					cout << "Bad Input or you don't have enough gold. Try Again." << endl;
					system("pause");
				}
			}

			if (giveGold)
			{
				Sleep(150);
				cout << yellow << "Thank you so much, it will be well spent I assure you" << endl;
				player.item.gold -= 1;
			}
			else 
			{
				Sleep(150);
				cout << yellow << "I understand. Have a good day." << endl;
			}

			cout << endl << endl << white;
			system("pause");
			Main_Street();
		}
		else if (Input == "5")
		{
			system("cls");
			Sleep(150);
			cout << "You notice an old woman resting on a bench. As you apporach her you gather that she is sleeping there. Best not to bother her right now." << endl << endl << endl;
			system("pause;");
			Main_Street();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again." << endl;
			system("pause");
		}
	}
}

void Kreton_2::Go_Shop()
{
	bool BadInput = true;
	string Input;

	while (BadInput)
	{
		system("cls");
		Sleep(150);
		cout << "Who would you like to talk to?" << endl;
		cout << lightred << "Enter 1 to go to the General Store." << endl;
		cout << "Enter 2 to go to the Blacksmith." << endl;
		cout << "Enter 3 to go to the Jumping Trout Tavern." << endl;
		cout << "Enter 4 to go to the Alchemist." << endl;
		cout << "Selection: ";
		cin >> Input;

		if (Input == "1")
		{
			system("cls");
			Sleep(150);
		}
		else if (Input == "2")
		{
			system("cls");
			Sleep(150);
		}
		else if (Input == "3")
		{
			system("cls");
			Sleep(150);
		}
		else if (Input == "4")
		{
			system("cls");
			Sleep(150);
		}
		else if (Input == "5")
		{
			system("cls");
			Sleep(150);
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again." << endl;
			system("pause");
		}
	}
}

void Kreton_2::Want_Shop()
{

}