#include <iostream>
#include "Deck.h"
using namespace std;

class CardFactory {
	Deck deck;
public: CardFactory();
		static CardFactory* getFactory(); //Only one copy of Card Factory
		Deck getDeck();
};
