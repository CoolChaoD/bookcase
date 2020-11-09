#include <iostream>


using namespace std;
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
private:
	int* m_Age;
public:
	Person(int age) {
		m_Age = new int(age);
	}

	Person& operator=(Person& p) {
		//�����ж��Ƿ������Կ����ڶ���,��������ͷ�
		if (this->m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		return *this;
	}

	~Person() {
		if (m_Age != NULL) {

			delete m_Age;
			m_Age = NULL; //�ͷŶ�������
		}

	}

};

ostream& operator<<(ostream& out, Person& p) {

	out << "Person������" << *p.m_Age << endl;
	return out;
}

void test01() {
	Person p1(10);
	Person p2(0);
	p2 = p1;
	cout << p2;


}

int main() {
	test01();
	return 0;
}