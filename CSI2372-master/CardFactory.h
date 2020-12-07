#include <iostream>
#include "Deck.h"
#include <random>


using namespace std;

class CardFactory {

private:
	CardFactory();
	Deck deck;

public: 
	
	~CardFactory();
	static CardFactory* getFactory(); //Only one copy of Card Factory
	Deck getDeck();
};

