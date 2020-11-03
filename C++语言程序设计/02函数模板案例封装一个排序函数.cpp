/*
 �ú���ģ���װһ��ѡ������
*/
#include <iostream>

using namespace std;

//1.����������ģ��
template <class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//��ӡ���麯����ģ��
template <class T>
void printArr(T arr[], int len) { //������Ϊ�βεķ���
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//3.ѡ������
template <class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int  max = i; //�϶����ֵ���±�
		for (int j = i + 1; j < len; j++) {
			//�϶������ֵ���±�ȱ����������ֵ���±�С��˵��j�±��Ԫ�ز������������ֵ
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
	//����char����
	char charArr[] = "bacdcfe"; //��������
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArr(charArr, num);

}

//����int����
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