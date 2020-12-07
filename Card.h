#include <iostream>
using namespace std;

class Card {
public: virtual int getCardsPerCoin(int coins) = 0;
	  virtual string getName() = 0;
	  virtual void print(ostream& out) = 0;
	  //todo: global stream insertion operator for printing that implements
	  //the "Virtual Friend Function Idiom" with the class hierarchy

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
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Chili : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Stink : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Green : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class soy : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class black : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class Red : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};

class garden : public Card {
public: int getCardsPerCoin(int coins);
		string getName();
		void print(ostream& out);
};