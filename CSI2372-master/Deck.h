#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;


class Deck : public std::vector <Card*> {
public: 
	Deck() = default;
	Deck(istream&, const CardFactory*);

	Card* draw();
	//todo insertion operator (friend)

	friend std::ostream& operator<<(std::ostream&, Deck&);

	
};

