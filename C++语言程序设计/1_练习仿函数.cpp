/*
* �������������Ҳ�ǿ������ص�
* �������غ�ĵ��÷�ʽ�ǳ������ĵ������Ҳ��Ϊ�º���
* �º���û�й̶���д���ǳ����
*/
#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
	//���غ������������
	void operator()(string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test01() {

	MyPrint myprint;
	myprint("dongchao");

}

void test02() {
	MyAdd myadd;
	int res = myadd(100, 12);
	cout << res << endl;

	//��������
	cout << MyAdd()(100, 122) << endl;
}

int main() {
	test01();
	test02();
	return 0;
}
