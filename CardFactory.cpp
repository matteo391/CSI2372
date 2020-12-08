#include "CardFactory.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

CardFactory::CardFactory()
{
	cout << "Creating the deck";
	for (int i = 0; i < 20; i++) {
		deck.push_back(new Blue());
	}

	for (int i = 0; i < 18; i++) {
		deck.push_back(new Chili());
	}

	for (int i = 0; i < 16; i++) {
		deck.push_back(new Stink());
	}

	for (int i = 0; i < 14; i++) {
		deck.push_back(new Green());
	}

	for (int i = 0; i < 12; i++) {
		deck.push_back(new soy());
	}

	for (int i = 0; i < 10; i++) {
		deck.push_back(new black());
	}

	for (int i = 0; i < 8; i++) {
		deck.push_back(new Red());
	}

	for (int i = 0; i < 6; i++) {
		deck.push_back(new garden());
	}
}

CardFactory* CardFactory::getFactory() {
	static CardFactory * oneFactory;
	return oneFactory;
}

Deck CardFactory::getDeck() {
	//shuffle and combine deck
	Deck shuffleDeck{ deck };
	auto randomdeck = default_random_engine{};
	shuffle(begin(shuffleDeck), end(shuffleDeck), randomdeck);
	return shuffleDeck;
}