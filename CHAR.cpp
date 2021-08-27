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
	string cadena = "";
	cadena += this->caracter;
	cadena += c.caracter;
	return cadena;
}