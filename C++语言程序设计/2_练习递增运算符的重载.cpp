#include <iostream>

using namespace std;


class MyIntenger {

	friend ostream& operator<<(ostream& out, MyIntenger m);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//1.前置递增，前置递增返回引用
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//2.后置递增，后置递增返回值，int作为占位符实现函数的重载
	//函数重载的三个条件
	//1.同一个作用域下的函数名名称相同，参数个数不同， 参数类型不同，参数位置不同
	MyIntenger operator++(int) {
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};


//重载左移运算符
ostream& operator<<(ostream& out, MyIntenger m) {
	out << "m_Num=" << m.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << "前置递增测试" << endl;
	cout << ++m << endl;
	cout << m << endl;

	cout << "后置递增测试" << endl;
	cout << m++ << endl;
	cout << m << endl;

}

int main() {
	test01();
	return 1;
}