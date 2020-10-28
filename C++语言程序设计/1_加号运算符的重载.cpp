#include <iostream>

using namespace std;

class Person {
public:
	int m_A;
	int m_B;
	Person operator+(Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
};


void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	Person p2;
	p2.m_A = 20;
	p2.m_B = 30;

	Person p3;
	cout << "p3的初始值为：";
	cout << sizeof(p3) << endl;

	//p3 = p1 + p2;
	//cout << p3.m_A << " " << p3.m_B << endl;

}

int main() {
	test01();
	return 1;

}