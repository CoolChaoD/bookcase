#include <iostream>

using namespace std;


class MyIntenger {

	friend ostream& operator<<(ostream& out, MyIntenger m);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//1.ǰ�õ�����ǰ�õ�����������
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//2.���õ��������õ�������ֵ��int��Ϊռλ��ʵ�ֺ���������
	//�������ص���������
	//1.ͬһ���������µĺ�����������ͬ������������ͬ�� �������Ͳ�ͬ������λ�ò�ͬ
	MyIntenger operator++(int) {
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};


//�������������
ostream& operator<<(ostream& out, MyIntenger m) {
	out << "m_Num=" << m.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << "ǰ�õ�������" << endl;
	cout << ++m << endl;
	cout << m << endl;

	cout << "���õ�������" << endl;
	cout << m++ << endl;
	cout << m << endl;

}

int main() {
	test01();
	return 1;
}