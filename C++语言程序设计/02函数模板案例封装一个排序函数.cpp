/*
 用函数模板封装一个选择排序
*/
#include <iostream>

using namespace std;

//1.交换函数的模板
template <class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//打印数组函数的模板
template <class T>
void printArr(T arr[], int len) { //数组作为形参的方法
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//3.选择排序
template <class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int  max = i; //认定最大值的下标
		for (int j = i + 1; j < len; j++) {
			//认定的最大值的下标比遍历出的最大值的下标小，说明j下标的元素才是真正的最大值
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			mySwap(arr[max], arr[i]);
		}
	}
}

void test01() {
	//测试char数组
	char charArr[] = "bacdcfe"; //测试数组
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArr(charArr, num);

}

//测试int数组
void test02() {
	int intArr[] = { 1,5,9,3,5,100,2 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArr(intArr, num);
}

int main() {

	test01();
	test02();
	return 1;
}