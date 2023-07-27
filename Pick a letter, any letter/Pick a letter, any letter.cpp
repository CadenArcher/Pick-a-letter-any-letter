#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include <array>
using namespace std;


int main()
{
  


}


void letter(char WhatLetter, int ChangeLetter) {

	char LowerCase[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char UpperCase[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	int LetterPlacement;


	if (islower(WhatLetter) == true) {

		for (int i = 0;i < 27; i++) {
			if (WhatLetter == LowerCase[i]) {
				LetterPlacement = i;
			}
		}
		if (ChangeLetter + LetterPlacement < 26 && ChangeLetter + LetterPlacement > 0) {
			cout << LowerCase[LetterPlacement + ChangeLetter];
		}
		else {
			cout << "invalidRangeExpection";
		}
	}
	else if (isupper(WhatLetter) == true) {
		for (int i = 0;i < 27; i++) {
			if (WhatLetter == UpperCase[i]) {
				LetterPlacement = i;
			}
		}
		if (ChangeLetter + LetterPlacement < 26 && ChangeLetter + LetterPlacement > 0) {
			cout << UpperCase[LetterPlacement + ChangeLetter];
		}
		else {
			cout << "invalidRangeExpection";
		}
	}
	else {
		cout << "Invaild Character Excpeption";
	}

}
