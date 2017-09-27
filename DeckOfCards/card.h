#pragma once
//
//  card.hpp
//  DeckOfCards
//
//  Created by 20072163 on 05/04/2017.
//  Copyright © 2017 20072163. All rights reserved.
//

#ifndef card_h
#define card_h

#include <stdio.h>
#include <string>
using namespace std;

class Card
{
private:
	string m_suit;
	string m_value;

public:
	Card(string suit, string value);
	string print();
	Card();
	class deck;


};

#endif /* card_h */
