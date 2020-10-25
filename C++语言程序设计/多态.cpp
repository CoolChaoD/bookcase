#include  <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() {

		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	//重写父类的函数
	void speak() {
		cout << "小猫在说话" << endl;
	}
};


class Dog :public Animal
{
public:
	//重写父类的函数
	void speak() {
		cout << "小狗在说话" << endl;
	}
};

//多态的使用
//1.有继承关系
//2.父类的指针或者引用指向子类的对象

void doSpeak(Animal& animal) {

	animal.speak();
}

void test01() {


	Cat cat;
	Dog dog;
	doSpeak(dog);
	doSpeak(cat);

}

void test02() {

	//Animal的大小
	Animal animal;
	cout << "Animal的大小" << sizeof(animal) << endl;

}

int main() {

	test02();
	return 1;
}



