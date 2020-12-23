#include <iostream>

using namespace std;
class A
{
public:
	int dataA;
};
class B :virtual public A
{
public:
	int dataB;
};
class C :virtual public A
{
public:
	int dataC
};


class D :public B, public C
{
public:
	int dataD;
};

void test01()
{
	A a;
	B b;
	C c;
	D d;
	cout << "a的大小为" << sizeof(a) << endl;
	cout << "b的大小为" << sizeof(b) << endl;
	cout << "c的大小为" << sizeof(c) << endl;
	cout << "d的大小为" << sizeof(d) << endl;


}
int main()
{
	test01();
	return 0;
}
