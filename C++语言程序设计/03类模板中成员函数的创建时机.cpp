#include <iostream>

using namespace std;

//��ģ���еĳ�Ա�����Ĵ���ʱ��
//��ģ���еĳ�Ա�����ڵ���ʱ��ȥ����,��Ϊ���ڵ��õ�ʱ���֪���������������

class Person1 {

public:
	void showPerson1() {
		cout << "Person1 show" << endl;
	}
};


class Person2 {

public:
	void showPerson2() {
		cout << "Person2 show" << endl;
	}
};

template <class T>
class MyClass {

public:
	T obj;
	//��ģ���г�Ա����
	void func1() {
		obj.showPerson1();
	}

	void func2() {
		obj.showPerson2();
	}



};
