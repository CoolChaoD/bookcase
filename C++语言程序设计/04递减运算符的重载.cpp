/*
  递减运算符的实现
*/
#include <iostream>

using namespace std;

class MyIntenger {

	friend ostream& operator<<(ostream& out, MyIntenger myint);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//前置递减返回值是引用
	MyIntenger& operator--() {
		this->m_Num--;
		return *this;
	}

	//后置递减返回值是数值
	MyIntenger operator--(int) {
		MyIntenger temp = *this;
		this->m_Num--;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyIntenger myint) {
	out << "m_Num=" << myint.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << m-- << endl;
	cout << m << endl;

}



int main() {
	test01();
	system("pause");
	return 1;

}

