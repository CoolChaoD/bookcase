#include <iostream>
using namespace std;

//函数模板
//交换两个数
template <class T>
void mySwap(T& a, T& b) {

	T temp = a;
	a = b;
	b = temp;

}

void test01() {
	int a = 10;
	int b = 20;

	//1.指定显示类型
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2.自动类型推导，参数的类型必须一致才可以
	double c = 1.1;
	double d = 2.2;
	mySwap(c, d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;


}

int main() {

	test01();
	system("pause");
	return 1;
}