#pragma once
//
//  deck.hpp
//  DeckOfCards
//
//  Created by 20072163 on 05/04/2017.
//  Copyright © 2017 20072163. All rights reserved.
//

#ifndef deck_h
#define deck_h

#include <stdio.h>
#include <string>
#include <vector>
#include "card.h"
using namespace std;

class Deck
{
private:
	const int d_size = 52;
	int currentCard;
	vector<Card> cardDeck;
	string* d_name;


public:
	Deck(const string& name);
	void printDeck();
	Card deal();
	void shuffle();
	~Deck();
	Deck(const Deck& d);
	friend ostream& operator<< (ostream& out, Card& c);



};
#endif /* deck_h */
