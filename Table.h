#include <iostream>
#include "TradeArea.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
using namespace std;

class Table {
private:	Player* player1;
			Player* player2;
		 	DiscardPile* discardPile;
		 	TradeArea* tradearea;
	public: Table(istream, const CardFactory*);
			Table();
			Deck* deck;
			bool win(string&);
			void printHand(bool);
			//todo insertion operator
};

