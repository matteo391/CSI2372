#include "Player.h"

Player::Player(std::string& name) {
	this->namePlayer = name;
}

Player::Player(istream& is,const CardFactory* _cFactory) {
	
}

std::string Player::getName() 
{
	return namePlayer;
}

int Player::getNumCoins() 
{
	return numcoins;
}

Player& Player::operator+=(int coins)
{
	numcoins += coins;
	return (Player&)numcoins;
}

int Player::getMaxNumChains() {
	return Maxnumberchains;
}

int Player::getNumChains() {
	return chains.size();
}

Chain<Card*>& Player::operator[](int i) {
	return chains[i];
}

void Player::buyThirdChain() {
	if (chains.size() == 3) {
		cout << " reach chains limit";

		if (numcoins >= 2) {
			Maxnumberchains += 1;
			numcoins -= 2;
		}
		else {
			throw "not enough of coins";
		}
	}

}

void Player::printHand(std::ostream& os, bool all) {

}
