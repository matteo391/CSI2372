#include <iostream>
#include <vector>
#include "CardFactory.h"
using namespace std;

class DiscardPile{
	vector<Card*> cards;
	public: DiscardPile(istream&, const CardFactory*);
			DiscardPile& operator+=(Card*);
			Card* PickUp();
			Card* Top();
			void print(std::ostream&);
			//todo insertion operator (friend)
};