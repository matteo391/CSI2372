#include <iostream>
using namespace std;

class Card {
private:
	Card();
public: virtual int getCardsPerCoin(int coins) = 0;
	  virtual string getName() = 0;
	  virtual void print(ostream& out) = 0;

	  class IllegalType : public exception {
		  const char* bean() const {
			  return "Invalid type";
		  }
	  };
	  class IllegalChain : public exception {
		  const char* bean() const {
			  return "Invalid chain";
		  }
	  };
};

class Blue : public Card {
public: Blue();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Chili : public Card {
public: Chili();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Stink : public Card {
public: Stink();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Green : public Card {
public: Green();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class soy : public Card {
public: soy();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class black : public Card {
public: black();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Red : public Card {
public: Red();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class garden : public Card {
public: garden();
	    int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};