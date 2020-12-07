#include <iostream>
#include "Chain.h"
#include "Hand.h"
#include "CardFactory.h"
using namespace std;

class Player {
private: string name;
		 int coins = 0;
		 int numChains = 0;
		 vector<Chain<Card*>> chains;
		 Hand* hand;
public: Player(string&);
		Player();
		Player(istream&, const CardFactory*);
		string getName();
		int getNumCoins();
		Player& operator+=(int);
		int getMaxNumChains();
		int getNumChains();
		Chain<Card*>& operator[](int i);
		void buyThirdChain();
		void printHand(ostream&, bool);
		//todo: insertion operator

};

