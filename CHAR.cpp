#include <iostream>
#include "CHAR.hpp"
using namespace std;
CHAR::CHAR() {
	
}

void CHAR::operator<<(char c) {
	this->caracter = c;
}

void CHAR::operator!() {
	cout << this->caracter;
}

string CHAR::operator+(CHAR c) {
	string cadena;
	string c1 = "" + this->caracter;
	string c2 = "" + c.caracter;
	cadena = c1 + c2;
	return cadena;
}