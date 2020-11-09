/*
* 函数调用运算符也是可以重载的
* 由于重载后的调用方式非常像函数的调用因此也称为仿函数
* 仿函数没有固定的写法非常灵活
*/
#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test01() {

	MyPrint myprint;
	myprint("dongchao");

}

void test02() {
	MyAdd myadd;
	int res = myadd(100, 12);
	cout << res << endl;

	//匿名函数
	cout << MyAdd()(100, 122) << endl;
}

int main() {
	test01();
	test02();
	return 0;
}
