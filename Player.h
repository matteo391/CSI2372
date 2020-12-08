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
		 
public: Player(std::string& name);

		Hand* hand;
		Player(istream&, const CardFactory*);
		vector<Chain_base*> chains{ new Chain_base(), new Chain_base(), };
	    std::string getName();
		int getNumCoins();
		Player& operator+=(int);
		int getMaxNumChains();
		int getNumChains();
		Chain_base& operator[](int i);
		void buyThirdChain();
		void printHand(ostream&, bool);
		
		friend ostream& operator<<(ostream&, const Player&);

};

