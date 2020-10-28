#include <iostream>

using namespace std;

class MyIntenger {
	friend ostream& operator<<(ostream& out, MyIntenger myintenger);
public:
	MyIntenger() {
		m_Num = 0;
	}
	//����ǰ�õ���
	//�������õ�Ŀ����Ϊ��һֱ�Ƕ�һ�������е�������
	MyIntenger& operator++() {
		this->m_Num++;
		return *this;
	}
	//���غ��õ���
	//���õ���������ص����������൱�ڷ��ص��Ǿֲ���������ã���˺��õ������ص���ֵ 
	MyIntenger operator++(int) { //ʹ��int��Ϊռλ������ʵ�ֺ���������
		//�ȷ��ؽ��Ȼ����е���	
		MyIntenger temp = *this;
		this->m_Num++;
		return temp;

	}

private:
	int m_Num;

};

ostream& operator<<(ostream& out, MyIntenger myintenger) {
	out << "m��ֵ=" << myintenger.m_Num << endl;
	return out;
}

void test01() {
	MyIntenger m;
	cout << ++(++m) << endl;
}
void test02() {
	MyIntenger myint;
	cout << (myint++)++ << endl;
	cout << myint << endl;

}


int main() {
	test01();
	return 1;
}