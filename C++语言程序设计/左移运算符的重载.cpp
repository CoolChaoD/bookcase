//��������������ؿ�������Զ������������
//���������������ֻ��ͨ��ȫ�ֺ�����ʵ��
#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	//�������캯��
	Person(int x, int y) {
		this->m_A = x;
		this->m_B = y;
	}
	int getA() {
		return m_A;
	}
	int getB() {
		return m_B;
	}

private:
	int m_A;
	int m_B;
};


ostream& operator<<(ostream& out, Person& p) {

	cout << "m_A=" << p.m_A << " " << "m_B:" << p.m_B << endl;
	return cout;
}

void test01() {

	Person p(10, 20);
	cout << "p��ֵ��" << p;
}

int main() {
	test01();
	return 1;
}
