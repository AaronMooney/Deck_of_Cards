//
//  main.cpp
//  DeckOfCards
//
//  Created by 20072163 on 05/04/2017.
//  Copyright © 2017 20072163. All rights reserved.
//

#include <iostream>
#include "deck.h"
using namespace std;

int main() {
	int option;
	bool game = true;
	string name = "deck1";
	Deck* deck;
	Deck* deck2;	//this deck is to be created with copy constructor
	deck2 = nullptr;
	deck = new Deck(name);
	while (game != false) {
		cout << "\n 1 - print the deck\n";
		cout << " 2 - shuffle the deck\n";
		cout << " 3 - deal a number of cards\n";
		cout << " 4 - create a copy of the deck\n";
		cout << " 5 - exit\n";
		cin >> option;

		switch (option)
		{
		case 1:
		{
			cout << "Printing deck\n";
			deck->printDeck();
			break;
		}
		case 2:
		{
			cout << "shuffling deck\n";
			deck->shuffle();
			break;
		}
		case 3:
		{
			int numberOfCards;
			cout << "How many cards would you like to deal?\n" << endl;
			cin >> numberOfCards;
			cout << "dealing cards\n";
			for (int i = 0; i <= numberOfCards; i++) {
				cout << deck->deal();
			}
			break;
		}
		case 4:
		{
			cout << "copying deck\n";
			deck2 = new Deck(*deck);
			deck2->printDeck();
			break;
		}
		case 5:
		{
			cout << "End of program" << endl;
			game = false;
			delete deck2;
			delete deck;
			break;
		}
		}
	}
	return 0;
}