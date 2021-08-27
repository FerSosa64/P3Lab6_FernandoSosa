#ifndef INTEGER_HPP
#define INTEGER_HPP
#include <vector>

class INTEGER {
private:
	int num;
	
public:
	INTEGER();
	int getnum();
	void operator<<(int);
	void operator!();

	void operator/(INTEGER);
	void operator-(INTEGER);
	void operator+(INTEGER);
	void operator*(INTEGER);
	
};

#endif // !