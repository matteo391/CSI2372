#include <iostream>
#include "TradeArea.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
using namespace std;

class Table {
	private: Player* players[2];
			 Deck* deck;
		 	 DiscardPile* discardPile;
		 	 TradeArea* tradearea;
	public: Table(istream, const CardFactory*);
			bool win(string&);
			void printHand(bool);
			//todo insertion operator
};

