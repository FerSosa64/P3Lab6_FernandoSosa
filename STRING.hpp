#ifndef STRING_HPP
#define STRING_HPP
#include <vector>
#include <string>
using namespace std;

class STRING {
	string word;
public:
	STRING();
	void operator<<(string);
	void operator!();
	void operator*(int);
};

#endif // !