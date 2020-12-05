#include "Deck.h"
#include "CardFactory.h"


Deck::Deck(istream& stream, const CardFactory* Cfactory) {
    
    // reconstruct

}

Card* Deck::draw() {
    if (empty()) {
        cout << "the deck is empty";
        return NULL;
   }
    else {
        Card* card = back();
        pop_back();
        return card;
    }
}


std::ostream& operator<<(std::ostream& oStream, Deck& deck)
{
    for (Card &c: deck) {
        oStream << *c;
    }
    return oStream;
}