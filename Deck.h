#include <iostream>
#include <vector>
#include "Card.h"
#include "CardFactory.h"

using namespace std;



class Deck : vector <Card*> {
public: Deck(istream&, const CardFactory*); //todo
		Deck(const CardFactory*);
		Card* draw();
		//todo insertion operator (friend)
};

