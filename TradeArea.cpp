#include "TradeArea.h"

TradeArea::TradeArea(istream&, const CardFactory*)
{
}

TradeArea& TradeArea::operator+=(Card* addedCard)
{
	cards.push_back(addedCard);
	return *this;
}

bool TradeArea::legal(Card* addedCard)
{
	for (auto inTrade : cards) {
		
		if (addedCard->getName() == inTrade->getName()) {
			return true;
		}
		return false;
	}
}

Card* TradeArea::trade(string type)
{
	list<Card*>::iterator iterator;
	iterator = cards.begin();
	for (auto inTrade : cards) {
		if (inTrade->getName() == type) {
			cards.erase(iterator);
			return inTrade;
		}
		advance(iterator, 1);
	}
	//todo: throw exception here? or in legal
	return nullptr;
}

int TradeArea::numCards()
{
	return cards.size();
}
