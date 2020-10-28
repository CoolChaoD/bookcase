#include <iostream>

using namespace std;

class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger myintenger);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//重载前置递增
	//返回引用的目的是为了一直是对一个数进行递增操作
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//重载后置递增
	//后置递增如果返回的是引用则相当于返回的是局部对象的引用，因此后置递增返回的是值 
	MyIntenger operator++(int) { //使用int作为占位符，来实现函数的重载
		//先返回结果然后进行递增	
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;

	}

private:
	int m_Num;

};

ostream& operator<<(ostream& out, MyIntenger myintenger) {
	out << "m的值=" << myintenger.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << ++(++m) << endl;
}
void test02() {
	MyIntenger myint;
	cout << (myint++)++ << endl;
	cout << myint << endl;

}


int main() {
	test01();
	return 1;
}