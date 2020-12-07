#include "CardFactory.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

CardFactory::CardFactory()
{
	cout << "Creating the deck";
	for (int i = 0; i < 20; i++) {
		deck.push_back(blue);
	}

	for (int i = 0; i < 18; i++) {
		deck.push_back(chili);
	}

	for (int i = 0; i < 16; i++) {
		deck.push_back(stink);
	}

	for (int i = 0; i < 14; i++) {
		deck.push_back(green);
	}

	for (int i = 0; i < 12; i++) {
		deck.push_back(soys);
	}

	for (int i = 0; i < 10; i++) {
		deck.push_back(blacks);
	}

	for (int i = 0; i < 8; i++) {
		deck.push_back(red);
	}

	for (int i = 0; i < 6; i++) {
		deck.push_back(gardens);
	}
}

CardFactory* CardFactory::getFactory() {
	static CardFactory * oneFactory;
	return oneFactory;
}

Deck CardFactory::getDeck() {
     //shuffle
	auto randomdeck = std::default_random_engine{};
	std::shuffle(std::begin(deck), std::end(deck), randomdeck);
}
