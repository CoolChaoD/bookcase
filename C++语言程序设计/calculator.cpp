#include <iostream>
#include <string>
using namespace std;

//普通写法
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

//普通写法当我们想要扩展新的功能的时候，就需要修改源代码
//这破坏了开放封闭原则
//对扩展进行开放，对修改进行关闭

void test01() {

	Calculator c;
	c.m_Num1 = 1;
	c.m_Num2 = 2;
	cout << "m_NUm1+m_NUm2=" << c.getResult("+") << endl;

}

//利用多态去实现计算器
//多态的好处
//1.组织结构清晰
//2.可读性强
//3.对于前期课后期的维护性强
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_num2;
};

//多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数
//1.加法类
class AddCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_num2;
	}
};


//2.减法类
class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_num2;
	}
};


//3.乘法类
class MultiCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_num2;
	}
};



void test02() {

	//多态使用的条件
	//父类的指针或者引用指向子类的对象
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 1;
	abc->m_num2 = 4;
	int result = abc->getResult();
	cout << "addresult=" << result << endl;
	delete abc;//用完后记得销毁
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