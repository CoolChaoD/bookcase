/*
* ��ǳ��������Ľ��
*/
#include <iostream>

using namespace std;

class Person {
public:
	int m_Age;
	int* m_Height;
public:
	//Ĭ�Ϲ��캯��
	Person() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	//�вι��캯��
	Person(int age, int height) {
		cout << "�вι��캯��" << endl;
		this->m_Age = age;
		this->m_Height = new int(height);
	}
	//�������캯��
	Person(const Person& p) {
		cout << "�������캯��" << endl;
		this->m_Age = p.m_Age;
		this->m_Height = new int(*p.m_Height);//�����ڶ���������һ��ռ�

	}

	~Person() {
		cout << "������������" << endl;
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	}
};

void test01() {
	Person p1(10, 160);
	Person p2(p1);
	p1.m_Age = 1000;
	*p1.m_Height = 1600;
	cout << "p1 " << p1.m_Age << " " << *p1.m_Height << endl;
	cout << "p2 " << p2.m_Age << " " << *p2.m_Height << endl;

}

int main() {

	test01();
	return 0;
}