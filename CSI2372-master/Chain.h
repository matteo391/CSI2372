#include <iostream>
#include "CardFactory.h"
#include "Card.h"
using namespace std;


template <class color> 
class Chain {
	
public: Chain(istream&, const  CardFactory*);
		Chain<T>& operator+=(Card*);
		int sell()
		//todo: insertion operator(friend) to print on to std::ostream
};

