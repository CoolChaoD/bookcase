#include <iostream>

using namespace std;

//动物类
class Animal {
public:
	int m_Age;
};

//在继承之前加上关键字virtual变成虚基类
//Animal类成为虚基类，虚继承后，数据只有一份了
//羊类
class Sheep :virtual public Animal {};

//鸵类
class Tuo : virtual public Animal {};

//羊驼类：
class SheepTuo :public Sheep, public Tuo {};


void test01() {

	SheepTuo st;

	st.Sheep::m_Age = 18; //羊18岁
	st.Tuo::m_Age = 20;   //驼20岁
	//st.m_Age = 25;        //羊驼25岁

	cout << "羊的年龄：" << st.Sheep::m_Age << endl;
	cout << "驼的年龄：" << st.Tuo::m_Age << endl;

	//cout << "羊驼的年龄：" << st.m_Age << endl;
}

int main() {
	test01();
}

