#include "Deck.h"
#include "CardFactory.h"


Deck::Deck(istream& stream, const CardFactory* Cfactory) {
    
    //todo

Deck::Deck(istream& stream, const CardFactory*) {
    //todo
} 

Deck::Deck(const CardFactory*) {
    
} 

Card* Deck::draw() {
    if (this->size() <= 0) {

        return nullptr;
    }
    else {
        Card* topCard = this->back();
        this->pop_back();
        return topCard;
    }
}