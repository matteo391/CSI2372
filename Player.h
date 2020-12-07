#include <iostream>
#include "Chain.h"
#include "Hand.h"
#include <array>
#include <vector>
#include "CardFactory.h"
using namespace std;

class Player {
private: string namePlayer;
		 int numcoins = 0;
		 int numChains = 0;
		 int Maxnumberchains;
		 vector<Chain<Card*>> chains;
		 Chain chain1;
		 Chain chain2;
		 Chain chain3;
		 Hand* hand;
public: Player(std::string& name);
		Player(istream&, const CardFactory*);
	    std::string getName();
		int getNumCoins();
		Player& operator+=(int);
		int getMaxNumChains();
		int getNumChains();
		Chain<Card*>& operator[](int i);
		void buyThirdChain();
		void printHand(ostream&, bool);
		//todo: insertion operator

};

