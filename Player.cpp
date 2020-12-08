#include "Player.h"

Player::Player(std::string& name) {
	this->namePlayer = name;
}
//care for istreams
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

Chain_base& Player::operator[](int i) {
	return *chains[i];
}

void Player::buyThirdChain() {
	if (chains.size() == 3) {
		cout << " reach chains limit";

		if (numcoins >= 2) {
			Maxnumberchains += 1;
			chains[2] = new Chain_base();
			numcoins -= 2;
		}
		else {
			throw "not enough of coins";
		}
	}

}

void Player::printHand(std::ostream& out, bool all) {
	if (all) {
		out << hand;
	}
	else {
		Card* top = hand->top();
		top->print(out);
	}
}

ostream& operator<<(ostream& out, Player& player)
{
	out << player.getName(); //Prints the name
	out << " has:     "<< player.getNumCoins() << " coins" << endl; //Prints the coins
	out << player.chains[0] << endl; //Prints the first chain
	out << player.chains[1] << endl; //Prints the second chain
	out << player.chains[2] << endl; //Prints the third chain (or empty if there isn't one)
	return out;
}
