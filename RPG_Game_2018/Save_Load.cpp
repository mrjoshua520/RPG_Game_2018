#include "stdafx.h"
#include "Save_Load.h"


Save_Load::Save_Load()
{
}


Save_Load::~Save_Load()
{
}

bool Save_Load::isSave() 
{
	//Checks to see if the Save File is empty

	ifstream inputSave;

	inputSave.open("SaveState.txt");

	if (inputSave.peek() != std::ifstream::traits_type::eof())
	{
		inputSave.close();
		return false;
	}
	else
	{
		inputSave.close();
		return true;
	}
}

void Save_Load::New_Game()
{
	//Sets Save for a new game

	ofstream outputSave;
	ofstream outputChar;

	outputSave.open("SaveState.txt");
	outputChar.open("CharStats.txt");

	outputSave << "1,";
	outputChar << "";

	outputSave.close();
	outputChar.close();
}

int Save_Load::Load_Game()
{
	//Loads a pre-existing game

	ifstream inputSave;
	int comma;
	string line;
	string level;

	inputSave.open("SaveState.txt");

	getline(inputSave, line);

	comma = line.find(',');
	level = line.substr(0, comma);

	inputSave.close();

	return stoi(level);
}

int Save_Load::Save_Game(int saveNum)
{
	//Saves game at set save points

	ofstream outputSave;
	int level;

	outputSave.open("SaveState.txt");

	outputSave << saveNum << ",";

	outputSave.close();

	level = Load_Game();

	return level;
}