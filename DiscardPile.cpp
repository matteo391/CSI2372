#include "DiscardPile.h"

DiscardPile::DiscardPile(istream&, const CardFactory*)
{
}

DiscardPile::DiscardPile(const CardFactory*)
{

}

DiscardPile& DiscardPile::operator+=(Card* discarded)
{
	cards.push_back(discarded);
}

Card* DiscardPile::PickUp()
{
    if (cards.size() <= 0) {

        return nullptr;
    }
    else {
        Card* topCard = cards.back();
        cards.pop_back();
        return topCard;
    }
}

Card* DiscardPile::Top()
{
    if (cards.size() <= 0) {
        return nullptr;
    }
    else {
        Card* topCard = cards.back();
        return topCard;
    }
}

//void DiscardPile::print(std::ostream&) {}


