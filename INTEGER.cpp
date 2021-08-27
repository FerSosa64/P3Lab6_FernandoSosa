#include <iostream>
#include"INTEGER.hpp"
using namespace std;
INTEGER::INTEGER() {
}

int INTEGER::getnum() {
	return this->num;
}

void INTEGER::operator<<(int i) {
	this->num = i;
}

void INTEGER::operator!() {
	cout << this->num;
}

void INTEGER::operator+(INTEGER num) {
	int result = num.getnum() + this->num;
	cout << "Resultado: " << result;
}

void INTEGER::operator/(INTEGER num) {
	int result = num.getnum() / this->num;
	cout << "Resultado: " << result;
}

void INTEGER::operator-(INTEGER num) {
	int result = num.getnum() - this->num;
	cout << "Resultado: " << result;
}

void INTEGER::operator*(INTEGER num) {
	int result = num.getnum() * this->num;
	cout << "Resultado: " << result;
}