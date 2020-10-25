#include <iostream>
using namespace std;

//����ͬ�������
//����CPU��
class CPU {
public:
	//������㺯��
	virtual void calculate() = 0;
};


//�����Կ���
class VideoCard {
public:
	//�����չʾ����
	virtual void display() = 0;
};

//����洢��
class Memory {
public:
	//����洢����
	virtual void storage() = 0;

};

//������
class Computer {
public:
	//���캯��
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		this->m_cpu = cpu;
		this->m_mem = mem;
		this->m_vc = vc;
	}

	//�ṩһ�������������������������
	void work() {
		m_cpu->calculate();
		m_mem->storage();
		m_vc->display();
	}


	//�ṩһ�����������ͷ����
	~Computer() {
		//�ͷ�cpu���
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ����
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}

		//�ͷ�cpu���
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;           //cpu���ָ��
	VideoCard* m_vc;      //�Կ����ָ��
	Memory* m_mem;        //�ڴ������ָ��
};



//�������ĳ���
//һ��Intel
class IntelCPU :public CPU {
public:
	//��д����ĺ���
	void calculate() {
		cout << "Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard {
public:
	//��д����ĺ���
	void display() {
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory {
public:
	//��д����ĺ���
	void  storage() {
		cout << "Intel�Ĵ洢����ʼ�洢��" << endl;
	}
};


//�������볧��
class LenovoCPU :public CPU {
public:
	//��д����ĺ���
	void calculate() {
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoVideoCard :public VideoCard {
public:
	//��д����ĺ���
	void display() {
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	//��д����ĺ���
	void storage() {
		cout << "Lenovo�Ĵ洢����ʼ�洢��" << endl;
	}
};

void test01() {
	//��һ̨�������
	//����ָ��ָ������Ķ���
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMmeory = new  IntelMemory;
	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMmeory);
	computer1->work();
}

void test02() {
	//�ڶ�̨�������
	//����ָ��ָ������Ķ���
	CPU* lenovoCpu = new LenovoCPU;
	VideoCard* lenovoCard = new LenovoVideoCard;
	Memory* lenovoMmeory = new  LenovoMemory;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(lenovoCpu, lenovoCard, lenovoMmeory);
	computer1->work();


}

int main() {
	//��һ̨����
	test01();
	//�ڶ�̨����
	test02();
	return 1;
}