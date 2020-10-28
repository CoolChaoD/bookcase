/*
  第一次重写左移运算符的重载
*/

#include <iostream>
using namespace std;

class Person {


	friend  ostream& operator<<(ostream& out, Person& p);
public:
	Person(int x, int y) {
		this->m_A = x;
		this->m_B = y;
	}

private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream& out, Person& p) {
	out << "m_A=" << p.m_A << " " << "m_B=" << p.m_B << endl;
	return out;
}

void test() {

	Person p(10, 20);
	cout << p << endl;
}

int main() {

	test();
	return 1;
}