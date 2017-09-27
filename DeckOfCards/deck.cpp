//
//  deck.cpp
//  DeckOfCards
//
//  Created by 20072163 on 05/04/2017.
//  Copyright © 2017 20072163. All rights reserved.
//

#include "deck.h"
#include "card.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
const string suits[4] = { "Hearts","Diamonds","Clubs","Spades" };
string values[13]{ "A","2","3","4","5","6","7","8","9","10","J","K","Q" };

Deck::Deck(const string& name) {
	cout << "Constructor called\n";
	d_name = new string(name);
	for (int i = 0; i < d_size; i++)
	{
		Card* card = new Card(suits[i / 13], values[i % 13]);		//creates the cards from the arrays
		cardDeck.push_back(*card);
		currentCard++;
	}

	srand(static_cast<unsigned int>(time(0)));
}

Deck::Deck(const Deck& d)
{
	vector<Card>::iterator iter;
	cout << "Copy Constructor called\n";
	d_name = new string(*(d.d_name));
	cardDeck = d.cardDeck;
}

ostream& operator<<(ostream & out, Card & c)		//overloading the << operator to print card details
{
	out << c.print();
	return out;
}

Deck::~Deck()
{
	cout << "Destructor called for " << *d_name << endl;
	delete d_name;
}

void Deck::printDeck()
{
	vector<Card>::iterator iter;
	for (iter = cardDeck.begin(); iter != cardDeck.end(); ++iter)
	{
		cout << (*iter);		//use of overload
	}
}

void Deck::shuffle() {
	currentCard = 0;
	for (int i = 0; i < d_size; i++)
	{
		int j = rand() % d_size;
		Card temp = cardDeck.at(i);
		cardDeck.at(i) = cardDeck.at(j);
		cardDeck.at(j) = temp;
	}
}

Card Deck::deal()
{
	if (currentCard > d_size-1)  //out of cards
		shuffle();
	if (currentCard < d_size)
		return (cardDeck.at(currentCard++));
	return (cardDeck.at(0));
}