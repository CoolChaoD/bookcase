//左移运算符的重载可以输出自定义的数据类型
//左移运算符的重载只能通过全局函数来实现
#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	//声明构造函数
	Person(int x, int y) {
		this->m_A = x;
		this->m_B = y;
	}
	int getA() {
		return m_A;
	}
	int getB() {
		return m_B;
	}

private:
	int m_A;
	int m_B;
};


ostream& operator<<(ostream& out, Person& p) {

	cout << "m_A=" << p.m_A << " " << "m_B:" << p.m_B << endl;
	return cout;
}

void test01() {

	Person p(10, 20);
	cout << "p的值是" << p;
}

int main() {
	test01();
	return 1;
}
