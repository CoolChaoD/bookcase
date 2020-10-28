/*
  实现左移运算符的重载
*/
#include  <iostream>

using namespace std;

class Person {

	//添加友元函数使得类外的函数也可以访问类的私有成员
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	//声明构造函数
	Person(int x, int y) {
		this->m_A = x;
		this->m_B = y;
	}

private:
	int m_A;
	int m_B;
};


//对于左移运算符的重载只能使用全局函数类实现
//返回值ostream& 才能使用链式输出
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_A=" << p.m_A << " " << "m_B=" << p.m_B << endl;
}

void test01() {
	Person p(10, 20);
	cout << p << 123;
}

int main() {

	test01();
	return 1;

}