#include <random>
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


void letter(char WhatLetter, int ChangeLetter) {

	char LowerCase[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char UpperCase[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	int LetterPlacement;


	if (islower(WhatLetter)) {

		for (int i = 0;i < 27; i++) {
			if (WhatLetter == LowerCase[i]) {
				LetterPlacement = i;
				break;
			}
		}
		if (ChangeLetter + LetterPlacement < 26 && ChangeLetter + LetterPlacement > 0) {
			cout << LowerCase[LetterPlacement + ChangeLetter];
		}
		else {
			cout << "invalid Range Expection";
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
			cout << "invalid Range Expection";
		}
	}
	else {
		cout << "Invaild Character Excpeption";
	}

}
