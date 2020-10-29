/*
  描述：练习递增运算符的重载
*/
#include <iostream>

using namespace std;

class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger myintenger);

public:
	MyIntenger() {
		this->m_Num = 0;
	}
	//前置递增
	//前置递增返回值是引用，为了对同一个数实现递增
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}

	//后置递增返回值
	//因为不能返回局部对象的引用
	//使用int作为占位符
	MyIntenger operator++(int) {
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};


//重载左移运算符
ostream& operator<<(ostream& out, MyIntenger myintenger) {
	out << "m_Num的值是：" << myintenger.m_Num << endl;
	return out;
}


void test01() {
	MyIntenger m;
	cout << ++m << endl;
	cout << m << endl;

}


void test02() {
	MyIntenger m;
	cout << m++ << endl;
	cout << m << endl;
}

int main() {

	test02();
	return 1;

}