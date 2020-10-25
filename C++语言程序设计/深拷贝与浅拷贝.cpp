#include <iostream>

using namespace std;

class Student {
private:
	int* data;

public:
	Student() {
		data = new int[10];
		cout << "调用构造函数" << endl;
	}
	//拷贝构造函数
	Student(const Student& s) {

		data = new int[10];
		for (int i = 0; i < 10; i++) {
			data[i] = s.data[i];
		}
		cout << "进入深拷贝构造函数" << endl;
	}

	~Student() {

		delete[] data;
		cout << "调用析构函数" << endl;
		data = nullptr;//将data置空

	}

};

int main(int) {

	Student s1;
	Student s2(s1);
	system("pause");

	return 1;
}