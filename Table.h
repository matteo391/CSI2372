#include <iostream>
#include "TradeArea.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
using namespace std;

class Table {
	public: Player* player1;
			Player* player2;
			Table(istream, const CardFactory*);
			DiscardPile* discardPile;
			Table();
			Deck* deck;
			TradeArea* tradearea;
			bool win(string&);
			void printHand(bool);
			friend ostream& operator<<(ostream&, const Table&);
};

