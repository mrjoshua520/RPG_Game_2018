#pragma once
#include "stdafx.h"
#include "Game_Headers.h"

class Save_Load
{
private:
	
public:
	Save_Load();
	~Save_Load();

	bool isSave();
	void New_Game();
	int Load_Game();
	int Save_Game(int);
};

