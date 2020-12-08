#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;



class Deck : public vector <Card*> {
		Deck(istream&, const CardFactory*);
		Deck(const CardFactory*);
public :Deck(const vector<Card*> cards);
		Card* draw();
};

