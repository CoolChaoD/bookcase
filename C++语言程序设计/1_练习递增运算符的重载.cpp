/*
  ��������ϰ���������������
*/
#include <iostream>

using namespace std;

class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger myintenger);

public:
	MyIntenger() {
		this->m_Num = 0;
	}
	//ǰ�õ���
	//ǰ�õ�������ֵ�����ã�Ϊ�˶�ͬһ����ʵ�ֵ���
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}

	//���õ�������ֵ
	//��Ϊ���ܷ��ؾֲ����������
	//ʹ��int��Ϊռλ��
	MyIntenger operator++(int) {
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};


//�������������
ostream& operator<<(ostream& out, MyIntenger myintenger) {
	out << "m_Num��ֵ�ǣ�" << myintenger.m_Num << endl;
	return out;
}


void test01() {
	MyIntenger m;
	cout << ++m << endl;
	cout << m << endl;

}


void test02() {
	MyIntenger m;
	cout << m++ << endl;
	cout << m << endl;
}

int main() {

	test02();
	return 1;

}