#include "Deck.h"
#include "CardFactory.h"


Deck::Deck(istream& stream, const CardFactory* Cfactory) {
    };
    Deck::Deck(istream & stream, const CardFactory*) {
    };
    Deck::Deck(const CardFactory*) {
    };

    Deck::Deck(const vector<Card*> cards){

    };

    Card* Deck::draw()
    {
        if (this->size() <= 0) {

            return nullptr;
        }
        else {
            Card* topCard = this->back();
            this->pop_back();
            return topCard;
    };