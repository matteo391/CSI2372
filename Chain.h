#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include <vector>
using namespace std;

class Chain_base;

class Chain_base {

public: Chain_base() {};

		virtual int sell() const {
			return 0;
		};
		virtual void print(ostream& out) {
			out << "Empty Chain";
		};
		virtual Chain_base& operator+=(Card* card) {
			return *this;
		};
		

};


template <class color> 
class Chain : public Chain_base {
		
public: Chain() {};
public: vector<color*> Cards;

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
	  }
	  int sell() {

		  int numCards = Cards.size();
		  color* topCard = Cards.front();

		  return topCard->getCardsPerCoin(numCards);
	  }
	  void print(ostream& out) {
		  out << Cards.front()->getName() << "    " << endl;
		  for (auto cardPrint : Cards) {
			  cardPrint->print(out);
			  out << " ";
		  }
	  }


};

