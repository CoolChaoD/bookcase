/*
第二次练习加号运算符的重载
*/
#include <iostream>

using namespace std;


//加号运算符的重载有两种方式
//1.全局函数重载
//2.类成员函数重载
class Person {
public:
	int m_A;
	int m_B;

	//Person operator+(Person& p) {
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};

//全局函数的运算符重载
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}


void test01() {
	//1.验证类成员函数的运算符重载
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 20;
	p2.m_A = 20;
	p2.m_B = 40;

	Person p3 = p1 + p2;
	cout << p3.m_A << p3.m_B << endl;
}



int main() {

	test01();
	return 1;
}