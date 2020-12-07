#include "Card.h"
#include <iostream>
using namespace std;

//Blue
int Blue::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 4;
	case 2: return 6;
	case 3: return 8;
	case 4: return 10;
	}
}
string Blue::getName() {
	return "Blue";
}
void Blue::print(ostream& out) {
	out << "B";
}

//Chili
int Chili::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 3;
	case 2: return 6;
	case 3: return 8;
	case 4: return 9;
	}
}
string Chili::getName() {
	return "Chili";
}
void Chili::print(ostream& out) {
	out << "C";
}

//Stink
int Stink::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 3;
	case 2: return 5;
	case 3: return 7;
	case 4: return 8;
	}
}
string Stink::getName() {
	return "stink";
}
void Stink::print(ostream& out) {
	out << "S";
}

//Green
int Green::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 3;
	case 2: return 5;
	case 3: return 6;
	case 4: return 7;
	}
}
string Green::getName() {
	return "Green";
}
void Green::print(ostream& out) {
	out << "G";
}

//soy
int soy::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 2;
	case 2: return 4;
	case 3: return 6;
	case 4: return 7;
	}
}
string soy::getName() {
	return "soy";
}
void soy::print(ostream& out) {
	out << "s";
}

//black
int black::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 2;
	case 2: return 4;
	case 3: return 5;
	case 4: return 6;
	}
}
string black::getName() {
	return "black";
}
void black::print(ostream& out) {
	out << "b";
}

//Red
int Red::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: return 2;
	case 2: return 3;
	case 3: return 4;
	case 4: return 5;
	}
}
string Red::getName() {
	return "Red";
}
void Red::print(ostream& out) {
	out << "R";
}

//garden
int garden::getCardsPerCoin(int coins) {
	switch (coins) {
	case 1: throw Card::IllegalChain(); return 0;
	case 2: return 2;
	case 3: return 3;
	case 4: throw Card::IllegalChain(); return 0;
	}
}
string garden::getName() {
	return "garden";
}
void garden::print(ostream& out) {
	out << "g";
}