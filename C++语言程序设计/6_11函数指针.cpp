//函数指针的案例
#include <iostream>
using namespace std;

void printStuff(float) {
	cout << "This is printStuff function." << endl;
}

void printMessage(float data) {
	cout << "The data to be listed is ." << data << endl;
}


void printFloat(float data) {
	cout << "The data to be printed is " << data << endl;
}

const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

int main() {
	printStuff(PI);

	typedef void (*pointer)(float);//声明一个函数指针

	pointer p;

	p = printStuff;
	p(PI);//函数指针调用
	p = printFloat;
	p(PI);



}

