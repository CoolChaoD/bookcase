#include <iostream>
#include <string>
using namespace std;

//��ͨд��
class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "* ") {
			return m_Num1 * m_Num2;
		}
		else if (oper == "/") {
			return m_Num1 + m_Num2;
		}
	}
	int m_Num1, m_Num2;
};

//��ͨд����������Ҫ��չ�µĹ��ܵ�ʱ�򣬾���Ҫ�޸�Դ����
//���ƻ��˿��ŷ��ԭ��
//����չ���п��ţ����޸Ľ��йر�

void test01() {

	Calculator c;
	c.m_Num1 = 1;
	c.m_Num2 = 2;
	cout << "m_NUm1+m_NUm2=" << c.getResult("+") << endl;

}

//���ö�̬ȥʵ�ּ�����
//��̬�ĺô�
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ڿκ��ڵ�ά����ǿ
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_num2;
};

//��̬��������
//1.�м̳й�ϵ
//2.������д������麯��
//1.�ӷ���
class AddCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_num2;
	}
};


//2.������
class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_num2;
	}
};


//3.�˷���
class MultiCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_num2;
	}
};



void test02() {

	//��̬ʹ�õ�����
	//�����ָ���������ָ������Ķ���
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 1;
	abc->m_num2 = 4;
	int result = abc->getResult();
	cout << "addresult=" << result << endl;
	delete abc;//�����ǵ�����
	abc = new SubCalculator;
	abc->m_Num1 = 1;
	abc->m_num2 = 4;
	int result2 = abc->getResult();
	cout << "subresult=" << result2 << endl;


}
int main() {
	test02();


	return 1;
}