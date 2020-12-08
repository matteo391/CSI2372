#include <iostream>
#include "Card.h"
#include "Chain.h"
#include "DiscardPile.h"
#include "Hand.h"
#include "Player.h"
#include "Table.h"
#include "TradeArea.h"

//Student1 Name: Matteo Pimentel Section A
//Student1 Number: 8298683

//Student2 Name: Dahong He 300063385 Section A
//Student2 Number: 300063385 

int main()
{
	string PlayerOneName;
	string PlayerTwoName;
	Player* Players[2];
	CardFactory cardFactory = *CardFactory::getFactory();
	int chainNumber = -1;
	
	Table* table;
	Card* topCard;
	string winner = "";
	int tempAns;
	int tempAns2;
	string tempAn;

	// Setting up a new game

	cout << "New game starting..." << endl;
	cout << "What is Player One's name?" << endl;
	cin >> PlayerOneName;
	cout << "Registered Player One as: " << PlayerOneName << endl;
	cout << "What is Player Two's name?" << endl;
	cin >> PlayerTwoName;
	cout << "Registered Player Two as: " << PlayerTwoName << endl;


	Players[0] = new Player(PlayerOneName);
	Players[1] = new Player(PlayerTwoName);

	cout << "Setting up the table..." << endl;
	table->player1 = Players[0];
	table->player2 = Players[1];
	table->deck = cardFactory.getDeck();

	cout << "Each player will now draw 5 cards" << endl;
	for (int i = 0; i < 5; i++) {
		table->player1->hand->operator+=(table->deck.draw());
		table->player2->hand->operator+=(table->deck.draw());
	}

	//starting main gameplay loop

	while (!table->win(winner)) {

		cout << "---Current Table---" << endl;
		cout << *table << endl;

		//If Player 1 is able to buy a 3rd chain, enter loop.
		if (table->player1->getMaxNumChains() < 3 && table->player1->getNumCoins() > 2) {
			tempAns = 0;
			while (tempAns = 0) {
				cout << "Would you like to buy your third chain?" << endl;
				cout << "Enter 1 for yes or  2 for no." << endl;
				cin >> tempAns;
				if (tempAns < 0 || tempAns > 2) {
					tempAns = 0;
					cout << "Invalid input." << endl;
				}
				if (tempAns = 1) {
					table->player1->buyThirdChain();
				}
			}
		}

		//Player 1 draws a card and sees their hand.
		if (!table->deck->empty()) {

			cout << "Player 1 will now draw a card." << endl;
			Card* newCard = table->deck->draw();
			cout << "Player 1 drew " << newCard->getName() << endl;
			table->player1->hand->operator+=(newCard);

			table->player1->printHand(cout, true);
		}

		//Adding cards to chains from TradeArea

		cout << "Your current chains: " << endl;
		cout << table->player1->chains[0] << endl;
		cout << table->player1->chains[1] << endl;
		cout << table->player1->chains[2] << endl;
		cout << "The current trade area " << endl;
		cout << table->tradearea << endl;
		cout << "Enter the name of a card in the trade area you want added to one of your chains: " << endl;
		cin >> tempAn;

		//If the trade area isn't empty, go through each chain and check if the card can be added
		if (table->tradearea->numCards() != 0) {
			for (int i = 0; i < table->tradearea->numCards(); i++) {
				for (int i = 0; i < table->player1->chains[0].size(); i++) {
					if (table->player1->chains[0].Cards[i] == tempAn) {
						table->player1->chains[0]->operator+=(table->tradearea->trade(tempAn));
					}
				}
				for (int i = 0; i < table->player1->chains[1].size(); i++) {
					if (table->player1->chains[1].Cards[i] == tempAn) {
						table->player1->chains[1]->operator+=(table->tradearea->trade(tempAn));
					}
				}
				for (int i = 0; i < table->player1->chains[2].size(); i++) {
					if (table->player1->chains[2].Cards[i] == tempAn) {
						table->player1->chains[2]->operator+=(table->tradearea->trade(tempAn));
					}
				}

			}

		}

		tempAns2 = 0;
		while (!table->player1->hand->empty() && tempAns2 = 0 ) {

			cout << "Player 1 plays the top card of their hand: ";
			table->player1->printHand(cout, false);
			topCard = table->player1->hand->play();


			tempAns = 0;
			while (tempAns = 0) {
				cout << "Do you want to add that card to a chain?" << endl;
				cout << "Enter 1 for yes or  2 for no." << endl;
				cin >> tempAns;

				if (tempAns = 1) {
					for (int i = 0; i < table->player1->chains[0].size(); i++) {
						if (table->player1->chains[0].Cards[i] == topCard) {
							table->player1->chains[0]->operator+=(topCard);
						}
					}
					for (int i = 0; i < table->player1->chains[1].size(); i++) {
						if (table->player1->chains[1].Cards[i] == topCard) {
							table->player1->chains[1]->operator+=(topCard);
						}
					}
					for (int i = 0; i < table->player1->chains[2].size(); i++) {
						if (table->player1->chains[2].Cards[i] == topCard) {
							table->player1->chains[2]->operator+=(topCard);
						}
					}
				}
			}
				cout << "Do you want to play another card?" << endl;
				cout << "Enter 0 for yes or any other number for no" << endl;
				cin >> tempAns2;


		}

		while (tempAns = 0) {
			cout << "Do you want to discard a card?" << endl;
			cout << "Enter 1 for yes or 2 for no." << endl;
			cin >> tempAns;
		}
		if (tempAns < 0 || tempAns > 2) {
			tempAns = 0;
			cout << "Invalid input." << endl;
		}
		if (tempAns == 1) {
			table->discardPile->operator+=(table->player1->hand->play());
		}
	}
	//Main method is unfinished.
}

