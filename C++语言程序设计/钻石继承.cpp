#include <iostream>

using namespace std;

//������
class Animal {
public:
	int m_Age;
};

//�ڼ̳�֮ǰ���Ϲؼ���virtual��������
//Animal���Ϊ����࣬��̳к�����ֻ��һ����
//����
class Sheep :virtual public Animal {};

//����
class Tuo : virtual public Animal {};

//�����ࣺ
class SheepTuo :public Sheep, public Tuo {};


void test01() {

	SheepTuo st;

	st.Sheep::m_Age = 18; //��18��
	st.Tuo::m_Age = 20;   //��20��
	//st.m_Age = 25;        //����25��

	cout << "������䣺" << st.Sheep::m_Age << endl;
	cout << "�յ����䣺" << st.Tuo::m_Age << endl;

	//cout << "���յ����䣺" << st.m_Age << endl;
}

int main() {
	test01();
}

