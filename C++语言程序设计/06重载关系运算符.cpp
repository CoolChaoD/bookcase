#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}

	//���ع�ϵ�����
	bool operator==(Person& p) {
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) {
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	string m_Name;
	int m_Age;

};

void test01() {
	Person p1("dong", 10);
	Person p2("dong", 10);

	if (p1 == p2) {
		cout << "p1��p2����ȵ�" << endl;
	}
	else {
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}
}

int main() {
	test01();
	return 1;
}