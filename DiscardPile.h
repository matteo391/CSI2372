#include <iostream>
#include <vector>
#include "CardFactory.h"
#include "Card.h"
using namespace std;

class DiscardPile{
	vector<Card*> cards;
	public: DiscardPile(istream&, const CardFactory*);
			DiscardPile(const CardFactory*);
			DiscardPile& operator+=(Card*);
			Card* PickUp();
			Card* Top();
			friend ostream& operator<< (ostream&, const DiscardPile&);
};