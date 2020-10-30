/*
  ��ֵ������ĳ���
  ע�⣺
  �����������Կ����ڶ�����ʱ������Ĭ�ϵĸ�ֵ������ͻ������ǳ����������
*/
#include <iostream>
using namespace std;

class Person {
public:
	//���캯��
	Person(int age) {
		m_Age = new int(age); //�ڶ�������һ��������͵�����
	}
	int* m_Age;


	//���صȺ������
	Person& operator=(Person& p) {

		//�༭���ṩ����ǳ������������Ҫ�������
		//1.�����ж��Ƿ������Կ����ڶ�����������Ƚ����ͷŵ�
		if (this->m_Age != nullptr) {
			delete m_Age;
			m_Age = nullptr;
		}
		//����һ���µĿռ䣬���
		this->m_Age = new int(*p.m_Age);
		return *this; //���ض�����
	}


	//��������
	~Person() {
		if (m_Age != nullptr) {
			delete m_Age;  //�ͷŶ�������
			m_Age = nullptr;
		}
	}
};

void test01() {

	Person p1(10);
	Person p2(20);

	p1 = p2;
	cout << "p1������=" << *p1.m_Age << endl;
	cout << "p2������=" << *p2.m_Age << endl;

}

int main() {

	test01();
	return 1;
}