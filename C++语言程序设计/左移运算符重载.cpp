/*
  ʵ�����������������
*/
#include  <iostream>

using namespace std;

class Person {

	//�����Ԫ����ʹ������ĺ���Ҳ���Է������˽�г�Ա
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	//�������캯��
	Person(int x, int y) {
		this->m_A = x;
		this->m_B = y;
	}

private:
	int m_A;
	int m_B;
};


//�������������������ֻ��ʹ��ȫ�ֺ�����ʵ��
//����ֵostream& ����ʹ����ʽ���
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_A=" << p.m_A << " " << "m_B=" << p.m_B << endl;
}

void test01() {
	Person p(10, 20);
	cout << p << 123;
}

int main() {

	test01();
	return 1;

}