#ifndef CHAR_HPP
#define CHAR_HPP
#include <vector>
#include <string>
using namespace std;
class CHAR {
private:
	char caracter;
	
public:
	CHAR();
	void operator<<(char);
	void operator!();
	string operator+(CHAR);
};

#endif // !
