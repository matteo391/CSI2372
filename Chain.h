#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include <vector>
using namespace std;

class Chain_base;

class Chain_base {

public: Chain_base() {};

		//todo: istream constructor

		virtual int sell() const {
			return 0; //Chain_base has no chains and always returns 0
		};
		virtual Chain_base& operator+=(Card* card) {
			return *this;
		};
		

};


template <class color> 
class Chain : public Chain_base {
		vector<color*> Cards;
public: Chain() {};
	  //todo istream constructor
	  

	  Chain<color>& operator+= (Card* card) {
		  color* cardType;
		  cardType = dynamic_cast<Card*>(card);

		  if (cardType == nullptr) {
			  throw Card::IllegalType();
		  }
		  else {
			  Cards.push_back(card);
		  }
		  return *this;
	  };

	  int sell() {

		  int numCards = Cards.size();
		  color* topCard = Cards.front();

		  return topCard->getCardsPerCoin(numCards);

	  }

};

