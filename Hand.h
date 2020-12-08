#include <iostream>
#include <list>
#include "Card.h"

class Hand {
	list<Card*> hand;
	public:	Hand(istream&, const CardFactory*);
			Hand& operator+=(Card*);
			Card* play();
			Card* top();
			Card* operator[](int);
};

