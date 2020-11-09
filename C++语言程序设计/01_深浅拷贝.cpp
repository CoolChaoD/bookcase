/*
* 深浅拷贝问题的解决
*/
#include <iostream>

using namespace std;

class Person {
public:
	int m_Age;
	int* m_Height;
public:
	//默认构造函数
	Person() {
		cout << "默认构造函数" << endl;
	}
	//有参构造函数
	Person(int age, int height) {
		cout << "有参构造函数" << endl;
		this->m_Age = age;
		this->m_Height = new int(height);
	}
	//拷贝构造函数
	Person(const Person& p) {
		cout << "拷贝构造函数" << endl;
		this->m_Age = p.m_Age;
		this->m_Height = new int(*p.m_Height);//重新在堆区再申请一块空间

	}

	~Person() {
		cout << "析构函数调用" << endl;
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