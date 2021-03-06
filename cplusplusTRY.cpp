// cplusplusTRY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <exception>
#include <cstdlib> 
#include <iostream>
#include <ctime>

using namespace std;

class ToException : public exception {};

void guessDiceRoll() {
	ToException excep;

	try {
		int guess;
		int diceValue = rand() % 5 + 1;
		//random value for a fictional dice (1-6)
		
		cout << diceValue << endl;

		cout << "Guess the value of the dice: ";
		cin >> guess;
		if (guess == diceValue) {
			cout << "You guessed correctly!" << endl;
		}
		else
				throw excep;
	}
	catch (ToException& e) {
		cout << "Wrong Number" << endl;
		return;
	}
}

int main(){
	srand(time(NULL));
	guessDiceRoll();
}