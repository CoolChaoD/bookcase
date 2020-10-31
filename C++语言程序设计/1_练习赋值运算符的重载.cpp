/*
  练习赋值运算符的重载
*/
#include  <iostream>

using namespace std;

class Person {
public:

	Person(int age) {
		m_Age = new int(age);
	}
	int* m_Age;

	Person& operator=(Person& p) {

		if (m_Age != nullptr) {  //首先判断自身是否为空，若不是为空则
			delete m_Age;
			m_Age = nullptr;
		}
		//开辟一个新的空间
		this->m_Age = new int(*p.m_Age);
		return *this;
	}

	//析构函数
	~Person() {
		if (this->m_Age != nullptr) {
			delete this->m_Age;    //释放堆区数据
			this->m_Age = nullptr;
		}
	}
};

void test01() {

	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3 = p1 = p2;
	//p1的年龄
	cout << *p1.m_Age << endl;
	cout << *p2.m_Age << endl;

}

int main() {

	test01();
	return 1;
}