/*
  当类中有堆区数据的时候在类的赋值时就会出现深浅拷贝的问题
  一个类中至少包括以下4个函数
  1.默认构造函数
  2.默认析构函数
  3.默认拷贝构造函数
  4.赋值运算符
*/

#include <iostream>

using namespace std;

//赋值运算符的重载
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int age) { //构造函数
		m_Age = new int(age); //在堆区开辟一个存放整型的数据
	}
	Person& operator=(Person& p) {
		//编译器提供的时候浅拷贝，我们需要的是深拷贝
		//首先判断是否有属性在堆区，如果有的话先释放干净，然后再深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		//再开辟一个新的空间进行深拷贝
		m_Age = new int(*p.m_Age);
		return *this; //返回对象本身
	}
	~Person()//析构函数，释放堆区的数据包
	{
		if (m_Age != NULL) {
			delete m_Age;  //释放堆区数据
			m_Age = NULL;
		}
	}
private:
	int* m_Age;
};

ostream& operator<<(ostream& out, Person& p) {
	out << "年龄是：" << *p.m_Age << endl;
	return out;
}

void test01() {
	Person p1(10);
	Person p2(12);

	p1 = p2;
	cout << p1;
	cout << p2;

}

int main() {

	test01();
	return 0;
}