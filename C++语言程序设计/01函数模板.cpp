#include <iostream>
using namespace std;

//����ģ��
//����������
template <class T>
void mySwap(T& a, T& b) {

	T temp = a;
	a = b;
	b = temp;

}

void test01() {
	int a = 10;
	int b = 20;

	//1.ָ����ʾ����
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2.�Զ������Ƶ������������ͱ���һ�²ſ���
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