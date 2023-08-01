/*
Caden Archer
Name: Pick a letter, any letter
Discrption:Using a function it has the user input a letter of their choice and change the postioning to display a char of their choice unless its not a letter or is out of range


*/


#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include <array>
using namespace std;

void letter(char, int);
int main()
{

	char WhatLetter;
	int LetterPlacement;
	cout << "What letter: ";
    cin >> WhatLetter;
	cout << "What Letter Placement: ";
	cin >> LetterPlacement;
	letter(WhatLetter, LetterPlacement);
}


void letter(char WhatLetter, int ChangeLetter) {//Allows the user to input a char of their choice and change the char type

	char LowerCase[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char UpperCase[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	int LetterPlacement;


	if (islower(WhatLetter)) {//check if its a capital letter or not 

		for (int i = 0;i < 27; i++) { //Find the letter placement in the array
			if (WhatLetter == LowerCase[i]) {
				LetterPlacement = i;
				break;
			}
		}
		if (ChangeLetter + LetterPlacement < 26 && ChangeLetter + LetterPlacement > 0) {//checks to see if its in range 
			cout << LowerCase[LetterPlacement + ChangeLetter];
		}
		else {
			throw runtime_error("invalid Range Expection");//output if the character is out of range
		}
	}
	else if (isupper(WhatLetter)) {
		for (int i = 0;i < 27; i++) {
			if (WhatLetter == UpperCase[i]) {
				LetterPlacement = i;
				break;
			}
		}
		if (ChangeLetter + LetterPlacement < 26 && ChangeLetter + LetterPlacement > 0) {
			cout << UpperCase[LetterPlacement + ChangeLetter];
		}
		else {
			throw runtime_error("invalid Range Expection");
		}
	}
	else { //output if its not a character in the alphabit 
		throw runtime_error("Invaild Character Excpeption");
	}

}
