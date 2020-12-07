#include "Table.h"
#include <vector>

Table::Table(istream, const CardFactory*){
}

Table::Table(){
	
}

bool Table::win(string& name)
{
	if (deck->empty()) {

		int p1Score = player1->getNumCoins();
		int p2Score = player2->getNumCoins();

		if (p1Score == p2Score) {
			name = "Tie Game!";
		}
		else {
			if (p1Score > p2Score) {
				name = player1->getName();
			}
			if (p2Score > p1Score) {
				name = player2->getName();
			}
			return true;
		}
	}
	return false;
}

void Table::printHand(bool fullHand)
{
	if (fullHand) {

		//player1->printHand(fullHand);

	}
	else {
		
		//player1->printHand(fullHand);

	}
}
