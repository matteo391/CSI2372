#include <iostream>
#include "Deck.h"
#include <random>
#include "Card.h"


using namespace std;

class CardFactory {

private:
	CardFactory();
	Blue blue;
	Chili chili;
	Stink stink;
	Green green;
	soy soys;
	black blacks;
	Red red;
	garden gardens;


public: 
	vector<Card*> deck;
	~CardFactory();
	static CardFactory* getFactory(); //Only one copy of Card Factory
	Deck getDeck();
	

};

