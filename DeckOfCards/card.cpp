//
//  card.cpp
//  DeckOfCards
//
//  Created by 20072163 on 05/04/2017.
//  Copyright © 2017 20072163. All rights reserved.
//

#include "card.h"
#include <iostream>

Card::Card()
{
}

Card::Card(string suit, string value)
{
	m_suit = suit;
	m_value = value;
}

string Card::print() {
	return "the " + m_value + " of " + m_suit + ".\n" ;
}
