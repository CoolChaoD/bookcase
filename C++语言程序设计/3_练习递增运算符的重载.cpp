#include <iostream>

using namespace std;

//递增运算符的重载前置递增返回引用，后置递增返回值
class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger m);
public:
	MyIntenger() {
		m_Num = 0;
	}

	//1.前置递增
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//2.后置递增
	MyIntenger operator++(int) {
		MyIntenger temp = *this;

		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyIntenger m) {
	out << "m_Num的值：" << m.m_Num << endl;
	return out;
}

void test01() {

	cout << "test01" << endl;
	MyIntenger m;
	cout << m << endl;
	cout << m++ << endl;


}
void test02() {

	cout << "test02" << endl;
	MyIntenger m;
	cout << m << endl;
	cout << ++m << endl;
}


int main() {
	test01();
	test02();
	return 0;
}