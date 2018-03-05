// RPGGame2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game_Headers.h"

using namespace std;

enum COLOR
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

ostream& operator<<(ostream &stm, const COLOR &c)
{
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(out_handle, c);
	return(stm);
}

void Exit();
void Level_Select(int);
void Title();
void Character_Creation();
void Kreton_One();

int main()
{
	srand(time(NULL));
	system("MODE 650");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	Title();

    return 0;
}

void Exit()
{
	//Exits the program. This happens in the event of an Error.
	system("cls");
	cout << "Thank you for using the program." << endl;
	system("pause");
	exit(0);
}

void Level_Select(int loadState)
{
	//This function is the "road" to all other levels of the game.
	if (loadState <= 0)
	{
		//should never happen unless tampering with the save file occurs
		system("cls");
		cout << "Error Loading Save file. Possibly Corrupt. Please Start a new game from the menu." << endl;
		system("pause");
		Exit();
	}
	else if (loadState == 1)
	{
		//to character creation
		Character_Creation();
	}
	else if (loadState == 2)
	{
		//to Kreton_One
		Kreton_One();
	}
}

void Title()
{
	//Displays the title screen and options to Load or start a new game.
	Save_Load data;
	bool BadInput = true;
	bool issave;
	int loadState;
	string Input;

	while (BadInput)
	{
		system("cls");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(115) << yellow << "Welcome to Primal Quest" << endl << endl << endl;
		cout << setw(90) << lightred << "Press 1 to begin a new game" << setw(50) << "Enter 2 to load the previously saved game" << endl << endl;
		cout << setw(103) << "Selection: ";
		getline(cin, Input);
		cout << white;

		if (Input == "1")
		{
			//Starts a new game. Sets Level to 1
			data.New_Game();
			BadInput = false;
		}
		else if (Input == "2")
		{
			issave = data.isSave();
			
			if (issave == false)
			{
				BadInput = false;
			}
			else
			{
				system("cls");
				cout << "The Save file is empty. Please begin a new game." << endl;
				system("pause");
			}
		}
		else
		{
			system("cls");
			cout << Input << " is not an option. Bad Input. Try Again." << endl;
			system("pause");
		}
	}

	loadState = data.Load_Game(); //Reads the number in the file. Saves to loadstate.
	Level_Select(loadState);

}

void Character_Creation()
{
	CharacterCreation_1 create;
	int loadState;

	create.Creation();

	Save_Load data;

	loadState = data.Save_Game(2);
	Level_Select(loadState);
}

void Kreton_One()
{
	Kreton_2 kret;

	kret.Kreton();
}