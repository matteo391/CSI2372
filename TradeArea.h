#include <iostream>
#include <list>
#include "CardFactory.h"
#include "Card.h"
using namespace std;

class TradeArea {
	
	public: TradeArea(istream&, const CardFactory*);
			TradeArea();
			TradeArea& operator+=(Card*);
			bool legal(Card*);
			Card* trade(string);
			int numCards();
			list<Card*> cards;
			friend ostream& operator<<(ostream&, const TradeArea&);
};

