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
	cout << "a�Ĵ�СΪ" << sizeof(a) << endl;
	cout << "b�Ĵ�СΪ" << sizeof(b) << endl;
	cout << "c�Ĵ�СΪ" << sizeof(c) << endl;
	cout << "d�Ĵ�СΪ" << sizeof(d) << endl;


}
int main()
{
	test01();
	return 0;
}
