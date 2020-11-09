/*
  �������ж������ݵ�ʱ������ĸ�ֵʱ�ͻ������ǳ����������
  һ���������ٰ�������4������
  1.Ĭ�Ϲ��캯��
  2.Ĭ����������
  3.Ĭ�Ͽ������캯��
  4.��ֵ�����
*/

#include <iostream>

using namespace std;

//��ֵ�����������
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int age) { //���캯��
		m_Age = new int(age); //�ڶ�������һ��������͵�����
	}
	Person& operator=(Person& p) {
		//�������ṩ��ʱ��ǳ������������Ҫ�������
		//�����ж��Ƿ��������ڶ���������еĻ����ͷŸɾ���Ȼ�������
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		//�ٿ���һ���µĿռ�������
		m_Age = new int(*p.m_Age);
		return *this; //���ض�����
	}
	~Person()//�����������ͷŶ��������ݰ�
	{
		if (m_Age != NULL) {
			delete m_Age;  //�ͷŶ�������
			m_Age = NULL;
		}
	}
private:
	int* m_Age;
};

ostream& operator<<(ostream& out, Person& p) {
	out << "�����ǣ�" << *p.m_Age << endl;
	return out;
}

void test01() {
	Person p1(10);
	Person p2(12);

	p1 = p2;
	cout << p1;
	cout << p2;

}

int main() {

	test01();
	return 0;
}