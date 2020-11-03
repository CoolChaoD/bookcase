#include <iostream>
#include <string>

using namespace std;
class Myprint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};

//仿函数的写法十分灵活，没有固定的写法
class Myadd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}


};


void test01() {
	Myprint myprint;
	myprint("dongchao");
}

void test02() {

	Myadd myadd;
	int res = myadd(100, 12);
	cout << res << endl;
	//匿名函数对象
	cout << "匿名函数对象" << Myadd()(100, 122) << endl;

}

int main() {

	test01();
	test02();
	return 1;
}


