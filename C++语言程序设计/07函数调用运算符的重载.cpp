#include <iostream>
#include <string>

using namespace std;
class Myprint {
public:
	//���غ������������
	void operator()(string test) {
		cout << test << endl;
	}
};

//�º�����д��ʮ����û�й̶���д��
class Myadd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}


};


void test01() {
	Myprint myprint;
	myprint("dongchao");
}

void test02() {

	Myadd myadd;
	int res = myadd(100, 12);
	cout << res << endl;
	//������������
	cout << "������������" << Myadd()(100, 122) << endl;

}

int main() {

	test01();
	test02();
	return 1;
}


