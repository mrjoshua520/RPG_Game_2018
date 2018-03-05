#include "stdafx.h"
#include "CharacterCreation_1.h"


CharacterCreation_1::CharacterCreation_1()
{
}

CharacterCreation_1::~CharacterCreation_1()
{
}

void CharacterCreation_1::Creation()
{
	//Happens at character creation. Creates a character

	string Input;
	string userInChar;
	bool BadInput = true;

	system("cls");
	cout << "Before the game begins you must first create your character." << endl;
	cout << "What is your characters name?" << endl;
	cout << "Name: ";
	getline(cin, Input);

	stats.charName = Input;

	//Class While Loop
	while (BadInput)
	{
		system("cls");
		cout << "What is your class?" << endl;
		cout << "Enter 1 to be a Warlock" << endl;
		cout << "Enter 2 to be a Sorcerer" << endl;
		cout << "Enter 3 to be an Cleric" << endl;
		cout << "Enter 4 to be a Great Weapon Fighter" << endl;
		cout << "Enter 5 to be a Guardian" << endl;
		cout << "Enter 6 to be a Dual Weapon Fighter" << endl;
		cout << "Enter 7 to be a Assassin" << endl;
		cout << "Enter 8 to be a Thief" << endl;
		cout << "Enter 9 to be a Ranger" << endl;
		cout << "Input: ";
		getline(cin, Input);
		if (Input == "1")
		{
			cout << endl << "Warlocks have at one time made pacts with demons or devils in the past." << endl;
			cout << "It could have even been that their parents or grandparents made the pact and they are still locked inside it." << endl;
			cout << "The demon that the pact has been made with gives strength to the warlock in exchange for the mortal's sevices should the need arrise." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 8" << endl;
			cout << "Damage : 0" << endl;
			cout << "Defense : 5" << endl;
			cout << "Magic Defense : 10" << endl;
			cout << "Speed : 7" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Warlock";
				stats.pDamage = 0;
				stats.pDefense = 5;
				stats.mDamage = 8;
				stats.mDefense = 10;
				stats.speed = 7;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "2")
		{
			cout << endl << "Sorcerer's spend their lives harnessing the world's magic." << endl;
			cout << "They are then able to unlease their power in elemental bursts whether for defense or offense." << endl;
			cout << "Sorcerer's are experts in magic and thus normally are found as royal mages and in places of great power." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 10" << endl;
			cout << "Damage : 0" << endl;
			cout << "Defense : 5" << endl;
			cout << "Magic Defense : 8" << endl;
			cout << "Speed : 7" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Sorcerer";
				stats.pDamage = 0;
				stats.pDefense = 5;
				stats.mDamage = 10;
				stats.mDefense = 8;
				stats.speed = 7;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "3")
		{
			cout << endl << "Cleric's are members of their church who have been blessed directly by the god they worship to protect," << endl;
			cout << "or destroy in the event of an evil cleric, the world. They are devout followers of that god and are normally" << endl;
			cout << "found in temples as high priests or cities as healers. " << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 7" << endl;
			cout << "Damage : 7" << endl;
			cout << "Defense : 5" << endl;
			cout << "Magic Defense : 6" << endl;
			cout << "Speed : 5" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Cleric";
				stats.pDamage = 7;
				stats.pDefense = 5;
				stats.mDamage = 7;
				stats.mDefense = 6;
				stats.speed = 5;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "4")
		{
			cout << endl << "Great weapon fighter's are users of two handed weapons." << endl;
			cout << "These powerful fighters normally make the front line of an army that is going on the attack." << endl;
			cout << "Many great weapon fighters spend their days adventuring or making a name for themselves in the army." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 0" << endl;
			cout << "Damage : 10" << endl;
			cout << "Defense : 7" << endl;
			cout << "Magic Defense : 5" << endl;
			cout << "Speed : 8" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Great Weapons Fighter";
				stats.pDamage = 10;
				stats.pDefense = 7;
				stats.mDamage = 0;
				stats.mDefense = 5;
				stats.speed = 8;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "5")
		{
			cout << endl << "Guardian's are the pinicals of defense. They are used mainly in defense wars as the front line to stop the enemy in their tracks." << endl;
			cout << "Weilding a weapon in one hand and a shield in the other, guardian's are almost impossible to take down by physical means." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 0" << endl;
			cout << "Damage : 8" << endl;
			cout << "Defense : 10" << endl;
			cout << "Magic Defense : 7" << endl;
			cout << "Speed : 5" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Guardian Fighter";
				stats.pDamage = 8;
				stats.pDefense = 10;
				stats.mDamage = 0;
				stats.mDefense = 7;
				stats.speed = 5;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "6")
		{
			cout << endl << "Dual weapon fighter's weild a weapon in each hand." << endl;
			cout << "Sacrificing defense for offensive power they are able to output double the damage of other fighters." << endl;
			cout << "These fighters are also quick, they bridge the gap between front line fighters and the quick hit and run fighters." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 0" << endl;
			cout << "Damage : 8" << endl;
			cout << "Defense : 7" << endl;
			cout << "Magic Defense : 5" << endl;
			cout << "Speed : 10" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Dual Weapon Fighter";
				stats.pDamage = 8;
				stats.pDefense = 7;
				stats.mDamage = 0;
				stats.mDefense = 5;
				stats.speed = 10;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "7")
		{
			cout << endl << "Assassin's are masters at staying unseen and eliminating their targets." << endl;
			cout << "Combining speed with power they are able to take alomst any foe the catch unawear out before they know what hit them." << endl;
			cout << "Normally reguarded negativly some assassins break that mold and do help society." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 1" << endl;
			cout << "Damage : 9" << endl;
			cout << "Defense : 5" << endl;
			cout << "Magic Defense : 7" << endl;
			cout << "Speed : 8" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Assassin";
				stats.pDamage = 9;
				stats.pDefense = 5;
				stats.mDamage = 1;
				stats.mDefense = 7;
				stats.speed = 8;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "8")
		{
			cout << endl << "Thieves are masters at taking what isn't theirs. Being able to go in unseen" << endl;
			cout << "and leave with another's belongings isn't normally looked on to well in normal society," << endl;
			cout << "however some thieves do right by their ways and give the thngs they steal to the less fortunate." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 3" << endl;
			cout << "Damage : 7" << endl;
			cout << "Defense : 5" << endl;
			cout << "Magic Defense : 5" << endl;
			cout << "Speed : 10" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Thief";
				stats.pDamage = 7;
				stats.pDefense = 5;
				stats.mDamage = 3;
				stats.mDefense = 5;
				stats.speed = 10;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "9")
		{
			cout << endl << "Archer's form the back of any good fighting force. Using ranged weapons" << endl;
			cout << "they are able to take out enemies well before they reach the front line forces." << endl;
			cout << "Some archers travel alone and use their abilities to keep their distance from any enemy who dares challenge them." << endl << endl;
			cout << "Base Stats" << endl;
			cout << "Magic damage : 0" << endl;
			cout << "Damage : 9" << endl;
			cout << "Defense : 6" << endl;
			cout << "Magic Defense : 6" << endl;
			cout << "Speed : 9" << endl;
			cout << "Health : 100" << endl;
			cout << "Mana : 100" << endl << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.Class = "Archer";
				stats.pDamage = 9;
				stats.pDefense = 6;
				stats.mDamage = 0;
				stats.mDefense = 6;
				stats.speed = 9;
				stats.totalHealth = 100;
				stats.totalMana = 100;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else
		{
			system("cls");
			cout << Input << " is not an option. Please try again." << endl;
			system("pause");
		}
	}

	BadInput = true;

	//Race While Loop
	while (BadInput)
	{
		system("cls");
		cout << "What is your race?" << endl;
		cout << "Enter 1 for Human" << endl;
		cout << "Enter 2 for Fey" << endl;
		cout << "Enter 3 for Elf" << endl;
		cout << "Enter 4 for Dwarf" << endl;
		cout << "Enter 5 for Orc" << endl;
		cout << "Enter 6 for Halfling" << endl;
		cout << "Enter 7 for Drow" << endl;
		getline(cin, Input);

		if (Input == "1")
		{
			cout << endl << "Humans come from pretty much all over. Anywhere life can be supported one would most likely find a human settlement." << endl;
			cout << "Standing from five to six feet tall on average humans are among one of the taller races." << endl;
			cout << "They normally weigh 125 to 250 pounds on average. Just like their adaptability human's hair, eye and skin color vary greatly." << endl;
			cout << "Human's are widely considered the worlds most adaptable race. Humans reach adulthood at around 18 and live on average less than 100 years." << endl << endl;
			cout << "Humans gain a bonus +1 to all stats" << endl;
			cout << endl << "Choose Human?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Human";
				stats.pDamage += 1;
				stats.pDefense += 1;
				stats.mDamage += 1;
				stats.mDefense += 1;
				stats.speed += 1;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "2")
		{
			cout << endl << "Related very closely to faires and pixies, this subset of them stands at 4.5 to 5.5 ft tall." << endl;
			cout << "This race is known to have many different features linking them to their pixie and faire counterparts." << endl;
			cout << "Fey are normally found in the warmer parts of the world however are very capable at adapting to theirt enviroment." << endl;
			cout << "Fey weigh, on average, 100 to 200 pounds. Their skin normally taking on a lighter tone, as well as their hair and eyes." << endl;
			cout << "Fey reach adulthood at around 75 and can live well over 600 years." << endl << endl;
			cout << "Fey gain a bonus +3 to magic damage and +2 to magic defense." << endl;
			cout << endl << "Choose Fey?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Fey";
				stats.pDamage += 0;
				stats.pDefense += 0;
				stats.mDamage += 3;
				stats.mDefense += 2;
				stats.speed += 0;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "3")
		{
			cout << endl << "Elves normally find home in the worlds jungles and forests where their cities and settlements normally reside, however they are found throughout the world and are accepted by many other races." << endl;
			cout << "Standing about 4.5 to 5.5 feet tall and weighing on average 95 to 135 pounds, they are greceful yet frial." << endl;
			cout << "Their skin tones tend to be lighter as well as their hair and eyes. They reach adulthood at around 110 and live to more than 700." << endl << endl;
			cout << "Elves gain a bonus +3 speed and +2 defense." << endl;
			cout << endl << "Choose Elf?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Elf";
				stats.pDamage += 0;
				stats.pDefense += 2;
				stats.mDamage += 0;
				stats.mDefense += 0;
				stats.speed += 3;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "4")
		{
			cout << "Dwarves call the worlds mountains home, believing that they eons ago arose from the earth itself." << endl;
			cout << "Dwarves stand only 4 to 4.5 feet tall on average however are almost as heavy as humans weighing 125 to 250 pounds." << endl;
			cout << "Dwarves despite their smaller stature are hearty and strong, well known for their ability as miners, workers and warriors." << endl;
			cout << "Their skin normally takes on a slightly darker tone with their hair and eyes reflecting that. They reach adulthood at around 40 and live to more than 400." << endl << endl;
			cout << "Dwarves gain a bonus +3 defense and +2 damage." << endl;
			cout << endl << "Choose Dwarf?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Dwarf";
				stats.pDamage += 2;
				stats.pDefense += 3;
				stats.mDamage += 0;
				stats.mDefense += 0;
				stats.speed += 0;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "5")
		{
			cout << "Orcs, tipically known to be wanderers, stand at 6 to 7 feet tall and weigh between 180 and 250 pounds." << endl;
			cout << "Many races consider them to be savaegs however there have been known to be well renowned orc scolars and writers." << endl;
			cout << "Stronger than most other races of the world, they normally lack a natural intellegence other races posses." << endl;
			cout << "Their skin normally ranges from pale green to grey.Their eyes can be of any color and their hair the same." << endl;
			cout << "They reach adulthood at around 14 and live a few years longer than 75." << endl << endl;
			cout << "Orcs gain a bonus +3 damage and +2 defense." << endl;
			cout << endl << "Choose Orc" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Orc";
				stats.pDamage += 3;
				stats.pDefense += 2;
				stats.mDamage += 0;
				stats.mDefense += 0;
				stats.speed += 0;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "6")
		{
			cout << "Halflings find home in most places other races do, being found in most cities and cultures." << endl;
			cout << "Halflings normally stand about 3 feet tall and weigh 30 to 35 pounds on average.Despide their small size halflings are quite clever and cunning." << endl;
			cout << "They reach adulthood at around 20 and normally live to about 200 years. Halfling's skin color can vary greatly as well as their eye and hair color." << endl << endl;
			cout << "Halflings get a bonus +3 speed and +2 damage." << endl;
			cout << endl << "Choose Halfling?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Halfling";
				stats.pDamage += 2;
				stats.pDefense += 0;
				stats.mDamage += 0;
				stats.mDefense += 0;
				stats.speed += 3;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "7")
		{
			cout << "Drow normally find home in the worlds caves and underground areas where their cities and settlements normally reside," << endl;
			cout << "they can be found in aboveground cities however other races are normally very careful about where they allow drows to go." << endl;
			cout << "Standing about 4.5 to 5.5 feet tall and weighing on average 95 to 135 pounds, they are very similar to their elven breathern as they were both once they same race." << endl;
			cout << "Their skin tones tends to be darker normally being pure black, with their hair and eyes still typically being lighter." << endl;
			cout << "They reach adulthood at around 110 and live to more than 700." << endl << endl;
			cout << "Drow get a bouns +3 speed and +2 magic defense." << endl;
			cout << endl << "Choose Drow?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			getline(cin, userInChar);
			if (userInChar == "y" || userInChar == "Y")
			{
				stats.race = "Drow";
				stats.pDamage += 0;
				stats.pDefense += 0;
				stats.mDamage += 0;
				stats.mDefense += 2;
				stats.speed += 3;
				BadInput = false;
			}
			else
			{
				BadInput = true;
			}
		}
		else
		{
			system("cls");
			cout << Input << " is not an option. Please try again." << endl;
			system("pause");
		}
	}

	stats.healing = stats.mDamage;

	BadInput = true;

	//Gender while loop
	while (BadInput)
	{
		system("cls");
		cout << "What gender are you?" << endl << endl;
		cout << "Enter 1 for Male." << endl << "Enter 2 for Female.";
		cout << endl << "Input: ";
		getline(cin, Input);

		if (Input == "1")
		{
			stats.gender = "Male";
			BadInput = false;
		}
		else if (Input == "2")
		{
			stats.gender = "Female";
			BadInput = false;
		}
		else
		{
			system("cls");
			cout << Input << " is not an option. Please try again." << endl;
			system("pause");
		}
	}

	BadInput = true;

	//God While loop
	while (BadInput)
	{
		system("cls");
		cout << "Who is your Patron Deity?" << endl;
		cout << "Enter 1 to choose Draksanth Pendragon" << endl;
		cout << "Enter 2 to choose Piper Carolus" << endl;
		cout << "Enter 3 to choose Drocnia Chymras" << endl;
		cout << "Enter 4 to choose Thostan Lightbringer" << endl;
		cout << "Enter 5 to choose Drudger Shmoeneil" << endl;
		cout << "Enter 6 to choose Animus Floodpyre" << endl;
		cout << "Enter 7 to choose Kirk Carolus" << endl;
		cout << "Enter 8 to choose Orik Ingeitum" << endl;
		cout << "Enter 9 to choose Nappa Thralltusk" << endl;
		cout << "Enter 10 to choose Alaria Swiftwind" << endl;
		cout << "Enter 11 to choose Revin Darkblade" << endl;
		cout << "Enter 12 to choose Aymar Balrona" << endl;
		cout << "Enter 13 to choose Uara Altune" << endl;
		cout << "Input: ";
		cin >> Input;

		if (Input == "1")
		{
			cout << endl << "Draksanth is the god of demons, the universe, creation, destruction and the other gods. The first being to ever exist in the universe draksanth" << endl;
			cout << "began to fill it with energy and all the means for the workings of the word. Soon he started to create other gods to rule over their own domains." << endl;
			cout << "Knowing that 12 gods was the maximum that could exist without consequence he decided to make a 13th anyway, with that being the goddess Uara." << endl;
			cout << "Draksanth is by far the most powerful of all gods and thus has been given the title of The God of Gods." << endl << endl;
			cout << "Draksanth gives a bonus +1 to all stats and +50 extra health" << endl;
			cout << endl << "Choose Draksanth?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Draksanth";
				stats.pDamage += 1;
				stats.pDefense += 1;
				stats.mDamage += 1;
				stats.mDefense += 1;
				stats.speed += 1;
				stats.totalHealth += 50;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "2")
		{
			cout << endl << "Piper is the goddess of angels, sound, and food." << endl;
			cout << "One of the first two gods ever made she is the counterpart to draksanth as she commands the angels to keep the demons in check." << endl;
			cout << "Her symbol is a lute resting atop a silver platter. Piper is married to the god Kirk." << endl << endl;
			cout << "Choosing piper allows all consumables's effects to be doubles for the player." << endl;
			cout << endl << "Choose Piper?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Piper";
				stats.consumeMod = 2;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "3")
		{
			cout << endl << "Drocnia the draconic god ruling over the cosmos, fire and all dragons. He was one of the first gods ever to be born." << endl;
			cout << "He was created when it was found that the feuds between the angels and demons became too much for the world and thus he created dragons along" << endl;
			cout << "with seperate realms for both the demons and angels. His symbol is a dragon emblem surrounded by stars and fire." << endl << endl;
			cout << "Drocnia gives a bonus to magic damage equal to 75% of your base magic damage." << endl;
			cout << endl << "Choose Drocnia?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Drocnia";
				stats.mDamage = stats.mDamage * 1.75;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "4")
		{
			cout << "Thostan is the god of healing, fey and light. This god was the first of the second set of gods to rule over magic." << endl;
			cout << "This god decided to give life to the planets made by Malfurion and put fey onto Xenia." << endl;
			cout << "His symbol is a light yellow orb surrounded by golden energy." << endl << endl;
			cout << "Thostan grants you a healing score equal to your base magic damage plus base damage." << endl;
			cout << endl << "Choose Thostan?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Thostan";
				stats.healing += stats.pDamage;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "5")
		{
			cout << "Drudger was the second god created to rule over magic. He is the god of sex, chaos, elves and evil magic." << endl;
			cout << "Drudger decided to give life to the planets created by malfurion and put elves onto Xenia." << endl;
			cout << "His symbol is a dark orb surrounded by purple energy." << endl << endl;
			cout << "Drudger give a bonus to abilities numerical data by 50%" << endl;
			cout << endl << "Choose Drudger" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Drudger";
				stats.abilityMod = 1.5;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "6")
		{
			cout << "Animus was the third god created to control magic. He is the god of psionics, elemental magic and energy." << endl;
			cout << "He is the god that created the planets and caused them to rotate around one central star created by Drocnia." << endl;
			cout << "He put humans on Xenia. His symbol is a green orb surrounded by red and blue swirls." << endl << endl;
			cout << "Animus gives a bonus 50% to physical damage and a 5% chance to burn the target on a physical hit." << endl;
			cout << endl << "Choose Animus?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Animus";
				stats.pDamage = (stats.pDamage * 1.5);
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "7")
		{
			cout << "Kirk is the first of three new gods made to each control aspects of the new world. Kirk is the god of time, vengence, and conquest." << endl;
			cout << "The birth of this god allowed the life of Xenia to begin taking revenge on each other and the advent of telling time." << endl;
			cout << "Kirks symbol is a black spiked guantlet clutching a heart." << endl << endl;
			cout << "Kirk gives a bonus to physical damage equal to your base defense" << endl;
			cout << endl << "Choose Kirk?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Kirk";
				stats.pDamage += stats.pDefense;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "8")
		{
			cout << "Orik was the second of the three new gods created to control aspects of the new world. He is the god of defense, dwarves and the planets." << endl;
			cout << "When he was created he crafted the dwarven people out of the stone in the mountains and taught the humanoids of the world about forging and stone working." << endl;
			cout << "His symbol is a diamond being orbited by the planets." << endl << endl;
			cout << "Orik gives a bonus to defense equal to your base damage." << endl;
			cout << endl << "Choose Orik?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Orik";
				stats.pDefense += stats.pDamage;
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "9")
		{
			cout << "Nappa is the third of three gods created to control elements of the world on Xenia. He is the god of strength, warriors, nobels and orcs." << endl;
			cout << "He created the orcs originally to become the most nobel people on all of Xenia, however due to a slight corruption at the hands" << endl;
			cout << "of an Arch-demon the orcs turned out to be argueably the least nobel. Nappa, distraught over this, taught the people of Xenia" << endl;
			cout << "about being nobel and the value of strength. His symbol is a monacle with an axe and sword crossed behind it." << endl << endl;
			cout << "Nappa gives a bonus 75% of your base damage to your phyisical damage." << endl;
			cout << endl << "Choose Nappa?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Nappa";
				stats.pDamage = (stats.pDamage * 1.75);
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "10")
		{
			cout << "Alaria is the first of the final three gods created to rule over aspects on Xenia. She is the goddess of archery, darkness, nature and drow." << endl;
			cout << "Made primarily to balance out light. Alaria was born and the world went into a year long darkness." << endl;
			cout << "Durning this time some of the elves were corrupted and turned into the drow people. She is called the mother of the drow." << endl;
			cout << "Her holy symbol is that of a shell with a single blue swirl inside it" << endl << endl;
			cout << "Alaria grants a bonus to damage equal to 75% of your base speed." << endl;
			cout << endl << "Choose Alaria?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Alaria";
				stats.pDamage += (stats.speed * 1.75);
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "11")
		{
			cout << "Revin is the second of the final three gods created to rule over aspects on Xenia. He is the god of assassins, night, shadows and halflings." << endl;
			cout << "Revin was born to balance the darkness made by Alaria. Working together with Thostan a day-night cycle was created and thus gave Xenia day and night." << endl;
			cout << "Revin's symbol is a dark circle with 2 daggers crossing infront of a crescent moon." << endl << endl;
			cout << "Revin gives a bonus 50% to your attack when you go before the enemy on the first round of combat." << endl;
			cout << endl << "Choose Revin?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Revin";
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "12")
		{
			cout << "Aymar is the third of the final three gods created to rule over aspects on Xenia. He is the god of thieves, silence and invention." << endl;
			cout << "Aymar came and gave the people of Xenia the idea for invention. Combined with Orik's teachings of metal working the humans began to make" << endl;
			cout << "mechanical contraptions with this new found knowledge." << endl;
			cout << "Aymar's symbol is that of a brass gauntlet sparcking with electrical energy." << endl << endl;
			cout << "Aymar gives a bonus to defense equal to 75% of your base speed." << endl;
			cout << endl << "Choose Aymar?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Aymar";
				stats.pDefense += (stats.speed * 1.75);
			}
			else
			{
				BadInput = true;
			}
		}
		else if (Input == "13")
		{
			cout << "Uara is the Goddess that never should have been. She was created by Draksanth himself after the people of Xenia" << endl;
			cout << "had no way of holding onto any of the information and knowledge that they have learned so far." << endl;
			cout << "Going against the other gods Draksanth created Uara to be the goddess of knowledge, learning, wisdom, and the divine mist." << endl;
			cout << "In doing so caused the universe to shift with the advent of a thirteenth god. A rift opened on Xenia and out came a beast with the power" << endl;
			cout << "that could even rival the 3 primal gods, Draksanth, Piper, and Drocnia. After a great battle the monster was sealed in Xenia" << endl;
			cout << "with the combined power of Draksanth and the new goddess Uara. Blocked by a barrier of divine mist hopfully to never return." << endl;
			cout << "Uara's symbol is that of a book covered by mist." << endl << endl;
			cout << "Uara gives a 20% bonus to all stats and +50 bonus mana" << endl;
			cout << endl << "Choose Uara?" << endl;
			cout << "Enter Y for Yes." << endl;
			cout << "Enter any other character for no" << endl;
			cout << "Input: ";
			cin >> userInChar;
			if (userInChar == "y" || userInChar == "Y")
			{
				BadInput = false;
				stats.patronGod = "Uara";
				stats.pDamage += (stats.pDamage * 1.2);
				stats.pDefense += (stats.pDefense * 1.2);
				stats.mDamage += (stats.pDamage * 1.2);
				stats.pDefense += (stats.mDefense * 1.2);
				stats.speed += (stats.speed * 1.2);
				stats.totalMana += 50;
			}
			else
			{
				BadInput = true;
			}
		}
		else
		{
			system("cls");
			cout << Input << " is not a valid input. Please try again." << endl;
			system("pause");

		}
	}

	stats.currentHealth = stats.totalHealth;
	stats.currentMana = stats.totalMana;
	stats.exp = 0;
	stats.level = 1;
	stats.statusEffect = "None";

	BadInput = true;

	//Equipment Generation
	while (BadInput)
	{
		if (stats.Class == "Warlock")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Studded Leather";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Pact Blade";
			equip.offHand = "Empty";
			BadInput = false;
		}
		else if (stats.Class == "Sorcerer")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Robes";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Orb";
			equip.offHand = "Empty";
			BadInput = false;
		}
		else if (stats.Class == "Cleric")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Chain Shirt";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Mace";
			equip.offHand = "Empty";
			BadInput = false;
		}
		else if (stats.Class == "Great Weapon Fighter")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Breast Plate";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Greatsword";
			equip.offHand = "Filled";
			BadInput = false;
		}
		else if (stats.Class == "Guardian")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Full Plate";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Longsword";
			equip.offHand = "Starting Shield";
			BadInput = false;

		}
		else if (stats.Class == "Dual Weapon Fighter")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Leather";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Shortsword";
			equip.offHand = "Starting Dagger";
			BadInput = false;
		}
		else if (stats.Class == "Assassin")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Leather";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Dagger";
			equip.offHand = "Starting Dagger";
			BadInput = false;
		}
		else if (stats.Class == "Thief")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Leather";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Dagger";
			equip.offHand = "Starting Dagger";
			BadInput = false;
		}
		else if (stats.Class == "Ranger")
		{
			equip.headSlot = "Empty";
			equip.torsoSlot = "Leather";
			equip.handSlot_Right = "Empty";
			equip.handSlot_Left = "Empty";
			equip.feetSlot = "Empty";
			equip.ringSlot_One = "Empty";
			equip.ringSlot_Two = "Empty";
			equip.mainHand = "Starting Bow";
			equip.offHand = "Filled";
			BadInput = false;
		}
		else
		{
			BadInput = true;
		}
	}

	item.gold = 15;
	item.rope = "Don't Have";
	item.crowbar = "Don't Have";
	item.lantern = "Have";
	item.grapHook = "Don't Have";
	item.flintSteel = "Don't Have";
	item.hammer = "Don't Have";
	item.horse = "Don't Have";
	item.manaPotion = 0;
	item.healthPotion = 1;
	item.antitoxin = 0;
	item.rations = 10;
	item.lockpick = 5;

	Save_Char();
}

void CharacterCreation_1::Level_Up()
{
	//levels up characters
}

void CharacterCreation_1::Save_Char()
{
	//saves variables to txt files

	ofstream outputChar;
	ofstream outputEquip;
	ofstream outputItems;

	outputChar.open(fileChar);
	outputEquip.open(fileEquip);
	outputItems.open(fileItem);

	outputChar << stats.charName << "," << stats.Class << "," << stats.race << "," << stats.gender << "," << stats.patronGod << "," << stats.totalHealth << "," << stats.totalMana << "," << stats.exp << "," << stats.level << "," << stats.pDamage << "," << stats.pDefense << "," << stats.mDamage << "," << stats.mDefense << "," << stats.speed << "," << stats.healing << "," << stats.consumeMod << "," << stats.abilityMod << "," << stats.statusEffect;
	outputEquip << equip.headSlot << "," << equip.torsoSlot << "," << equip.handSlot_Right << "," << equip.handSlot_Left << "," << equip.feetSlot << "," << equip.ringSlot_One << "," << equip.ringSlot_Two << "," << equip.mainHand << "," << equip.offHand;
	outputItems << item.gold << "," << item.rope << "," << item.crowbar << "," << item.lantern << "," << item.grapHook << "," << item.flintSteel << "," << item.hammer << "," << item.horse << "," << item.manaPotion << "," << item.healthPotion << "," << item.antitoxin << "," << item.rations << "," << item.lockpick;

	outputChar.close();
	outputEquip.close();
	outputItems.close();
}

void CharacterCreation_1::Load_Char()
{
	//Loads txt files into the variables

	ifstream inputChar;
	ifstream inputEquip;
	ifstream inputItems;
	string name;
	int comma;
	string nametwo;
	int comma2;
	string namethree;
	int comma3;

	for (int count = 0; getline(inputChar, name); count++)
	{
		comma = name.find(',');
		stats.charName = name.substr(0, comma);
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.Class = name.substr(0, comma);
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.race = name.substr(0, comma);
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.gender = name.substr(0, comma);
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.patronGod = name.substr(0, comma);
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.totalHealth = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.totalMana = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.exp = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.level = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.pDamage = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.pDefense = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.mDamage = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.mDefense = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.speed = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.healing = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.consumeMod = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.abilityMod = stoi(name.substr(0, comma));
		name = name.substr(comma + 1);

		comma = name.find(',');
		stats.statusEffect = name.substr(0, comma);
		name = name.substr(comma + 1);
	}

	for (int count = 0; getline(inputChar, nametwo); count++)
	{
		comma2 = nametwo.find(',');
		equip.headSlot = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.torsoSlot = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.handSlot_Right = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.handSlot_Left = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.ringSlot_One = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.ringSlot_Two = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.mainHand = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);

		comma2 = nametwo.find(',');
		equip.offHand = nametwo.substr(0, comma);
		nametwo = nametwo.substr(comma + 1);
	}

	for (int count = 0; getline(inputChar, namethree); count++)
	{
		comma3 = namethree.find(',');
		item.gold = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.rope = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.crowbar = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.lantern = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.grapHook = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.flintSteel = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.hammer = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.horse = namethree.substr(0, comma);
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.manaPotion = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.healthPotion = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.antitoxin = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.rations = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);

		comma3 = namethree.find(',');
		item.lockpick = stoi(namethree.substr(0, comma));
		namethree = namethree.substr(comma + 1);
	}
}
