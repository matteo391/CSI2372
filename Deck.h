#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;


class Deck : vector <Card*> {
public: Deck(istream&, const CardFactory*);
		Card* draw();
		//todo insertion operator (friend)
};

