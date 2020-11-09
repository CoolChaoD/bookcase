#include <iostream>

using namespace std;

//���������������ǰ�õ����������ã����õ�������ֵ
class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger m);
public:
	MyIntenger() {
		m_Num = 0;
	}

	//1.ǰ�õ���
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//2.���õ���
	MyIntenger operator++(int) {
		MyIntenger temp = *this;

		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyIntenger m) {
	out << "m_Num��ֵ��" << m.m_Num << endl;
	return out;
}

void test01() {

	cout << "test01" << endl;
	MyIntenger m;
	cout << m << endl;
	cout << m++ << endl;


}
void test02() {

	cout << "test02" << endl;
	MyIntenger m;
	cout << m << endl;
	cout << ++m << endl;
}


int main() {
	test01();
	test02();
	return 0;
}