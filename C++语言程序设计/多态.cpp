#include  <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() {

		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	//��д����ĺ���
	void speak() {
		cout << "Сè��˵��" << endl;
	}
};


class Dog :public Animal
{
public:
	//��д����ĺ���
	void speak() {
		cout << "С����˵��" << endl;
	}
};

//��̬��ʹ��
//1.�м̳й�ϵ
//2.�����ָ���������ָ������Ķ���

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

	//Animal�Ĵ�С
	Animal animal;
	cout << "Animal�Ĵ�С" << sizeof(animal) << endl;

}

int main() {

	test02();
	return 1;
}



