#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}

	//重载关系运算符
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
		cout << "p1与p2是相等的" << endl;
	}
	else {
		cout << "p1与p2是不相等的" << endl;
	}
}

int main() {
	test01();
	return 1;
}