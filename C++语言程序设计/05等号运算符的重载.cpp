/*
  赋值运算符的承载
  注意：
  当类中有属性开辟在堆区的时候，利用默认的赋值运算符就会产生深浅拷贝的问题
*/
#include <iostream>
using namespace std;

class Person {
public:
	//构造函数
	Person(int age) {
		m_Age = new int(age); //在堆区开辟一个存放整型的数据
	}
	int* m_Age;


	//重载等号运算符
	Person& operator=(Person& p) {

		//编辑器提供的是浅拷贝而我们需要的是深拷贝
		//1.首先判断是否有属性开辟在堆区，如果有先将它释放掉
		if (this->m_Age != nullptr) {
			delete m_Age;
			m_Age = nullptr;
		}
		//开辟一个新的空间，深拷贝
		this->m_Age = new int(*p.m_Age);
		return *this; //返回对象本身
	}


	//析构函数
	~Person() {
		if (m_Age != nullptr) {
			delete m_Age;  //释放堆区数据
			m_Age = nullptr;
		}
	}
};

void test01() {

	Person p1(10);
	Person p2(20);

	p1 = p2;
	cout << "p1的年龄=" << *p1.m_Age << endl;
	cout << "p2的年龄=" << *p2.m_Age << endl;

}

int main() {

	test01();
	return 1;
}