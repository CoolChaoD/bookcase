#include  <iostream>
using namespace std;

class Base {
public:
	Base() {
		m_A = 10;
	}
	int m_A;
	int m_C;
	//static int m_D;
private:
	int m_B;
};

//int  Base::m_D = 10;

class Son :public Base {
public:
	Son() {
		m_A = 100;
	}
	int m_A;
};


void test01() {

	Son s1;
	//cout << "son�е�m_A" << s1.m_A << endl;
	//cout << "Base�е�m_A" << s1.Base::m_A << endl;

	//�����е�˽�г�Ա��Ȼ�����Է��ʣ���������Ҳ�̳���
	cout << "����Ĵ�С" << sizeof(s1) << endl;




}
int main() {
	test01();
	system("pause");
	return 1;
}