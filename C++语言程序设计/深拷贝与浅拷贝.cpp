#include <iostream>

using namespace std;

class Student {
private:
	int* data;

public:
	Student() {
		data = new int[10];
		cout << "���ù��캯��" << endl;
	}
	//�������캯��
	Student(const Student& s) {

		data = new int[10];
		for (int i = 0; i < 10; i++) {
			data[i] = s.data[i];
		}
		cout << "����������캯��" << endl;
	}

	~Student() {

		delete[] data;
		cout << "������������" << endl;
		data = nullptr;//��data�ÿ�

	}

};

int main(int) {

	Student s1;
	Student s2(s1);
	system("pause");

	return 1;
}