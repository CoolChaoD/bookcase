/*
  �ݼ��������ʵ��
*/
#include <iostream>

using namespace std;

class MyIntenger {

	friend ostream& operator<<(ostream& out, MyIntenger myint);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//ǰ�õݼ�����ֵ������
	MyIntenger& operator--() {
		this->m_Num--;
		return *this;
	}

	//���õݼ�����ֵ����ֵ
	MyIntenger operator--(int) {
		MyIntenger temp = *this;
		this->m_Num--;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyIntenger myint) {
	out << "m_Num=" << myint.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << m-- << endl;
	cout << m << endl;

}



int main() {
	test01();
	system("pause");
	return 1;

}

