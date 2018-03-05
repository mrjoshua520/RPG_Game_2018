#pragma once
#include "stdafx.h"
#include "Game_Headers.h"

using namespace std;

struct Stats
{
	string charName;
	string race;
	string Class;
	string gender;
	string patronGod;
	int totalHealth;
	int currentHealth;
	int totalMana;
	int currentMana;
	int exp;
	int level;
	int pDamage;
	int mDamage;
	int pDefense;
	int mDefense;
	int speed;
	int healing;
	int consumeMod = 1;
	int abilityMod = 1;
	string statusEffect;
};

struct Equipment
{
	string headSlot;
	string torsoSlot;
	string handSlot_Right;
	string handSlot_Left;
	string feetSlot;
	string ringSlot_One;
	string ringSlot_Two;
	string mainHand;
	string offHand;
};

struct Items
{
	int gold;
	string rope = "Don't Have";
	string crowbar = "Don't Have";
	string lantern = "Don't Have";
	string grapHook = "Don't Have";
	string flintSteel = "Don't Have";
	string hammer = "Don't Have";
	string horse = "Don't Have";
	int manaPotion = 0;
	int healthPotion = 0;
	int antitoxin = 0;
	int rations = 0;
	int lockpick = 0;
};

class CharacterCreation_1
{
private:
	string fileEquip = "Equipment.txt";
	string fileItem = "Items.txt";
	string fileChar = "CharStats.txt";

public:
	CharacterCreation_1(); 
	~CharacterCreation_1();

	Stats stats;
	Equipment equip;
	Items item;

	void Creation();
	void Level_Up();
	void Save_Char();
	void Load_Char();
};

