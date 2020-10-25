#include <iostream>
using namespace std;

//抽象不同的零件类
//抽象CPU类
class CPU {
public:
	//抽象计算函数
	virtual void calculate() = 0;
};


//抽象显卡类
class VideoCard {
public:
	//抽象的展示函数
	virtual void display() = 0;
};

//抽象存储类
class Memory {
public:
	//抽象存储函数
	virtual void storage() = 0;

};

//电脑类
class Computer {
public:
	//构造函数
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		this->m_cpu = cpu;
		this->m_mem = mem;
		this->m_vc = vc;
	}

	//提供一个工作函数，让零件工作起来
	void work() {
		m_cpu->calculate();
		m_mem->storage();
		m_vc->display();
	}


	//提供一个析构函数释放零件
	~Computer() {
		//释放cpu零件
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}

		//释放显卡零件
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}

		//释放cpu零件
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;           //cpu零件指针
	VideoCard* m_vc;      //显卡零件指针
	Memory* m_mem;        //内存条零件指针
};



//放入具体的厂商
//一、Intel
class IntelCPU :public CPU {
public:
	//重写父类的函数
	void calculate() {
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard {
public:
	//重写父类的函数
	void display() {
		cout << "Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory {
public:
	//重写父类的函数
	void  storage() {
		cout << "Intel的存储器开始存储了" << endl;
	}
};


//二、联想厂商
class LenovoCPU :public CPU {
public:
	//重写父类的函数
	void calculate() {
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoVideoCard :public VideoCard {
public:
	//重写父类的函数
	void display() {
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	//重写父类的函数
	void storage() {
		cout << "Lenovo的存储器开始存储了" << endl;
	}
};

void test01() {
	//第一台电脑零件
	//父类指针指向子类的对象
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMmeory = new  IntelMemory;
	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMmeory);
	computer1->work();
}

void test02() {
	//第二台电脑零件
	//父类指针指向子类的对象
	CPU* lenovoCpu = new LenovoCPU;
	VideoCard* lenovoCard = new LenovoVideoCard;
	Memory* lenovoMmeory = new  LenovoMemory;
	cout << "第二台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(lenovoCpu, lenovoCard, lenovoMmeory);
	computer1->work();


}

int main() {
	//第一台电脑
	test01();
	//第二台电脑
	test02();
	return 1;
}