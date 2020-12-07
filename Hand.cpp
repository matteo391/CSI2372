#include "Hand.h"

Hand& Hand::operator+=(Card* newCard)
{
	hand.push_back(newCard);
	return *this;
}

Card* Hand::play()
{
    if (hand.size() <= 0) {

        return nullptr;
    }
    else {
        Card* topCard = hand.back();
        hand.pop_back();
        return topCard;
    }
}


Card* Hand::top()
{
    if (hand.size() <= 0) {
        return nullptr;
    }
    else {
        Card* topCard = hand.back();
        return topCard;
    }
}

Card* Hand::operator[](int pos)
{
    list<Card*>tempHand = hand;
    for (int i = 0; i <= pos; i++) {
        tempHand.pop_front();
    }
    list<Card*>::iterator iterator;
    iterator = hand.begin();
    advance(iterator, pos);
    hand.erase(iterator);

    return *tempHand.begin();
}