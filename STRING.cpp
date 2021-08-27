#include <string>
#include <iostream>
#include "STRING.hpp"
using namespace std;

STRING::STRING() {

}

void STRING::operator<<(string s) {
	this->word = s;
}

void STRING::operator!() {
	cout << this->word;
}

void STRING::operator*(int n) {
	string pala = "";
	for (int i = 0; i < n; i++) {
		pala += this->word;
	}
	cout << pala << endl;
}