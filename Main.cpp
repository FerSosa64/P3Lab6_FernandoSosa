#include <iostream>
#include "CHAR.hpp"
#include "INTEGER.hpp"
#include "STRING.hpp"
#include <vector>
#include <string>
using namespace std;

int menu() {
	int opcion;
	cout << "\n1. Agregar Integer" << endl;
	cout << "2. Agregar CHAR" << endl;
	cout << "3. Agregar STRING" << endl;
	cout << "4. Operaciones INTEGER" << endl;
	cout << "5. Operaciones CHAR" << endl;
	cout << "6. Operaciones STRING" << endl;
	cout << "7. Salir" << endl;
	cout << "Ingrese su opcion: "; cin >> opcion;
	return opcion;
}
char menu2() {
	char opcion;
	cout << "\na. Suma" << endl;
	cout << "b. Resta" << endl;
	cout << "c. Multiplicacion" << endl;
	cout << "d. Divicion" << endl;
	cout << "Ingrese su opcion: "; cin >> opcion;
	return opcion;
}
void agregarINT(vector<INTEGER*>& vec,int num) {
	INTEGER* INT = new INTEGER();
	*INT << num;
	vec.push_back(INT);
}
void agregarCHAR(vector<CHAR*>& vec, char c) {
	CHAR* CH = new CHAR();
	*CH << c;
	vec.push_back(CH);
}
void agregarString(vector<STRING*>& vec, string palabra) {
	STRING* STR = new STRING();
	*STR << palabra;
	vec.push_back(STR);
}

void listarINT(vector<INTEGER*>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << i << ") "; 
		!(*vec[i]);
		cout << endl;
	}
}

void listarCHAR(vector<CHAR*>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << i << ") ";
		!(*vec[i]);
		cout << endl;
	}
}

void listarSTRING(vector<STRING*>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << i << ") ";
		!(*vec[i]);
		cout << endl;
	}
}

int main() {
	
	vector<CHAR*> vectchar;
	vector<INTEGER*> vectint;
	vector<STRING*> vectstring;

	int opcion;
	char opcion2;
	while ((opcion = menu()) != 7) {
		switch (opcion){
			case 1: {//agregar int
				int num;
				cout << "\nIngrese un numero para agregar al vector: "; cin >> num;
				agregarINT(vectint,num);

				break;
			}
			case 2: {//agregar char

				char caract;
				cout << "\nIngrese el caracter: "; cin >> caract;
				agregarCHAR(vectchar, caract);

				break;
			}
			case 3: {//agregar string

				string pala;
				cout << "\nIngrese una cadena: "; cin >> pala;
				agregarString(vectstring, pala);

				break;
			}
			case 4: {//op int



				switch ((opcion2 = menu2())) {
					case 'a': { // +

						int n1;
						int n2;

						listarINT(vectint);
						
						cout << "Ingrece la posicion del primer numero: ";
						cin >> n1;

						cout << "Ingrese la posicion del segundo numero: ";
						cin >> n2;

						(*vectint[n1]) + (*vectint[n2]);

						break;
					}
					case 'b': { // -

						int n1;
						int n2;

						listarINT(vectint);

						cout << "Ingrece la posicion del primer numero: ";
						cin >> n1;

						cout << "Ingrese la posicion del segundo numero: ";
						cin >> n2;

						(*vectint[n2]) - (*vectint[n1]);

						break;
					}
					case 'c': { // *

						int n1;
						int n2;

						listarINT(vectint);

						cout << "Ingrece la posicion del primer numero: ";
						cin >> n1;

						cout << "Ingrese la posicion del segundo numero: ";
						cin >> n2;

						(*vectint[n2]) * (*vectint[n1]);

						break;
					}
					case 'd': { // /

						int n1;
						int n2;

						listarINT(vectint);

						cout << "Ingrece la posicion del primer numero: ";
						cin >> n1;

						cout << "Ingrese la posicion del segundo numero: ";
						cin >> n2;

						(*vectint[n2]) / (*vectint[n1]);

						break;
					}
				}

				break;
			}
			case 5: {//op char
				int c1;
				int c2; 

				listarCHAR(vectchar);

				cout << "Ingrese la posicion del primer caracter: "; 
				cin >> c1;
				cout << "Ingrese la posicion del segundo caracter: ";
				cin >> c2;

				cout << "El resultado es: " << (*vectchar[c1]) + (*vectchar[c2]);

				break;
			}
			case 6: {//op string
				int esc;
				int m;
				listarSTRING(vectstring);
				cout << "Ingrese la posicion string a repetir: ";
				cin >> esc;
				cout << "Cuantas veces se repetira?: ";
				cin >> m;
				
				cout << "El resultado es: ";
				(*vectstring[esc])* m;
				break;
			}
		}
	}
	
	
	return 0;
}