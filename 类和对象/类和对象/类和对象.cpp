#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//class C1
//{
//	int m_A��//Ĭ��Ȩ�� ��˽��
//};
//
//struct C2
//{
//	int m_A;//Ĭ��Ȩ�� �ǹ���
//};
//int main()
//{
//	//struct �� class ����
//	//struct Ĭ��Ȩ���� ���� public
//	//class  Ĭ��Ȩ���� ˽�� private 
//	C1 c1;
//	//c1.m_A;//��class��Ĭ��Ȩ�� ˽�У�������ⲻ���Է���
//
//	C2 c2;
//	c2.m_A = 100;//structĬ��Ȩ��Ϊ��������˿��Է���
//	system("pause");
//	return 0;
//}



//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��

//�������
//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ����
//	int getAge()
//	{
//		m_Age = 0;//��ʼ��Ϊ0
//		return m_Age;
//	} 
//	//�������� ֻд
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//
//private:
//	//����  �ɶ���д
//	string m_Name;
//	//����  ֻ��
//	int m_Age;
//	//����  ֻд
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//
//	cout << "����Ϊ��" << p.getName() << endl;
//	cout << "����Ϊ��" << p.getAge() << endl;
//
//	//��������
//	p.setLover("����");
//	system("pause");
//	return 0;
//} 

////����ĳ�ʼ��������
////1�����캯�� ���г�ʼ������
//class Person
//{
//public:
//	//1.1���캯���ص�
//	/*û�з���ֵ ��дvoid
//	������ �� ������ͬ
//	���캯�������в���  ���Է�������
//	���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��*/
//	Person()
//	{
//		cout << "Person ���캯���ĵ���" << endl;
//	}
//
//	//2���������� ��������Ĳ���
//	/*û�з���ֵ ��дvoid
//	��������������ͬ ������ǰ��~
//	���������������в����������Է�������
//	����������ǰ ���Զ�������������������ֻ�����һ��
//	*/
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
//	}
//};
//
////������������Ǳ����е�ʵ�֣���������Լ����ṩ�����������ṩһ����ʵ�ֵĹ������������
//void test01()
//{
//	Person P;//��ջ�ϵ����ݣ�test01ִ����Ϻ󣬾ͻ��ͷ��������
//}
//
//int main()
//{
//	//Person p;
//	test01();
//
//	system("pause");
//	return 0;
//}


//���������ķ��༰����
/*  ���ղ�����  �޲ι���  �вι���
    �������ͷ�  ��ͨ����  ��������
*/

//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯������" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�������캯��
//	Person(Person &p)
//	{
//		age = p.age;
//		cout << "Person�Ŀ������캯������"<<endl;
//	}
//
//	int age;
//
//};
//
////����
//void test01()
//{
//	//1.���ŷ�
//	//Person p1;//Ĭ�Ϲ��캯������
//	//Person p2(10);//�вι��캯��
//	//Person p3(p2);//�������캯��
//
//	//ע������1��
//	/*����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//
//	*/
//	//cout << "p2�����䣺" << p2.age << endl;
//	//cout << "p3�����䣺" << p3.age << endl;
//
//	//2.��ʾ��
//	//Person p1;
//	//Person p2 = Person(10);//�вι���
//	//Person P3 = Person(p2);//��������
//
//	//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ��������󣬼�������������
//
//	/*ע������2
//	��Ҫ���ÿ������캯���� ��ʼ���������� ����������Ϊ Person��p3���ȼ��� Person p3  ����������Ϊ���ض���
//	*/
//	//3.��ʽת����
//	Person p4 = 10;//�൱��д�� Person p4=Person(10);  �вι���
//	Person p5 = p4;//��������
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}


////������������ʱ��
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person �вι��캯������" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "Person �������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person ������������" << endl;
//	}
//
//	int m_Age;
//
//};
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}
////2��ֵ���ݵķ�ʽ������������ֵ
//void dowork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	dowork(p);
//}
//
////3��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//
//}
//
//int main()
//{
//
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


////���캯���ĵ��ù���
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person�������캯��" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2������Ϊ��"<<p2.m_Age << endl;
//}



//�����ǳ����

//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "Person�вι��캯������" << endl;
//		
//	}
//	//�Լ�ʵ�ֿ������캯�� ���ǳ�����������ڴ��ظ��ͷŵ�����
//	Person(const Person &p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;������Ĭ��ʵ�ֵľ������д���
//		//�������
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//�������� �����������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person���������ĵ���" << endl;
//	}
//
//	int m_Age;//����
//	int *m_Height;//���
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1������Ϊ:" << p1.m_Age << endl;
//	cout << "p1�����Ϊ:" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//	cout << "p1�����Ϊ:" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



////��ʼ���б�
//class Person
//{
//public:
//	
//	//��ͳ��ʼ������
//	//Person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//��ʼ���б��ʼ������
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	//Person p(10, 20, 30);
//	Person p(30,20,10);
//	cout << "m_A=" << p.m_A << endl;
//	cout << "m_B=" << p.m_B << endl;
//	cout << "m_C=" << p.m_C << endl;
//}



//�������Ϊ���Ա

////�ֻ���
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	//����
//	string m_Name;
//	//�ֻ���
//	Phone m_Phone;
//
//
//};
//
////�������������Ϊ�����Ա������ʱ�ȹ�������������ٹ�������
//void test01()
//{
//	Person p("����", "ƻ��");
//}
//int main()
//{
//
//	test01();
//	return 0;
//}

////��̬��Ա����
//class Person
//{
//public:
//	//���ж��󶼹���ͬһ����
//	//����׶ξͷ����ڴ�
//	//���������������ʼ������
//	static int m_A;
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//};
//
//int Person::m_A = 100;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A<< endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//
//}
//
//void test02()
//{
//	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//
//	//1��ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//	//2��ͨ���������з���
//	cout << Person::m_A << endl;
//}


////��̬��Ա����
//class Person
//{
//public:
//	//��̬��Ա����
//	static void func()
//	{
//		cout << "static void func����" << endl;
//	}
//};
//
//void test01()
//{
//	//1��ͨ���������
//	Person p;
//	p.func();
//	//2��ͨ����������
//	Person::func();
//}

//��Ա���� �� ��Ա���� �ֿ��洢

//class Person
//{
//	int m_A;//�Ǿ�̬��Ա���� ������Ķ�����
//
//	static int m_B;//��̬��Ա���� ��������Ķ�����
//
//	void func()  //�Ǿ�̬��Ա���� ��������Ķ�����
//	{};
//	
//	static void func2() //��̬��Ա���� ��������Ķ�����
//	{};
//};
//
//void test01()
//{
//	Person p;
//	//�ն���ռ���ڴ�ռ䣺1
//	//C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//	cout << "size of p=" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}


//this ָ��

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this ָ��ָ�� �����õĳ�Ա���� �����Ķ���
//		this->age = age;
//	}
//
//	int age;
//
//	void PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//	}
//};
//
////1��������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
////2�����ض�������thisָ��
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	p2.PersonAddAge(p1);
//
//	cout << "p2������Ϊ��" << p2.age << endl;
//}



////const���γ�Ա����
//
////������
//class Person
//{
//public:
//
//	//this ָ��ı����� ָ�볣�� ָ���ָ�򲻿����޸�
//	//����ӵ�const�൱�� const Person * const this
//	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
//	void showPerson()const
//	{
//		//this->m_A = 100;
//		this->m_B = 100;
//	}
//	void func()
//	{
//		int m_A = 100;
//	}
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�ǿ����޸����ֵ
//
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////������
//void test02()
//{
//	const Person p;//�ڶ���ǰ��const����Ϊ������
//	p.m_A = 100;
//	p.m_B = 100;
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();// ������ �����Ե�����ͨ��Ա���� ��Ϊ��ͨ��Ա���������޸�����
//}

//������
//class Building
//{
//	//goodgirlȫ�ֺ����� Building������  ���Է���Building�е�˽�г�Ա
//	friend void goodgirl(Building *building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
//void goodgirl(Building *building)
//{
//	cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodgirl(&building);
//}


////������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//public:
//	void visit();//�ιۺ��� ����Building�е�����
//	Building *building;
//};
//
//class Building
//{
//	//GodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//�������������
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "���������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "���������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}


////��Ա��������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();//��visit�������Է���Building��˽�г�Ա
//	void visit2();//��visit2���������Է��ʲ�Building��˽�г�Ա
//	Building * building;
//};
//
//class Building
//{
//	//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
//	friend void GoodGay::visit();
//public:
//	Building(); 
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////����ʵ�ֳ�Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom<< endl;
//	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}

//
////�Ӻ����������
//
//class Person
//{
//public:
//
//	//1����Ա��������+��
//	//Person operator+(Person &p)
//	//{
//	//	Person tmp;
//	//	tmp.m_A = this->m_A + p.m_A;
//	//	tmp.m_B = this->m_B + p.m_B;
//	//	return tmp;
//	//}
//	int m_A;
//	int m_B;
//
//};
//
//
////2��ȫ�ֺ�������+��
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////�������ذ汾
//Person operator+(Person &p1,int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//��Ա�������ر��ʵ���
//	//Person p3=p1.operator+(p2);
//	//ȫ�ֺ������ر��ʵ���
//	//Person p3=operator(p1,p2);
//
//	Person p3 = p1 + p2;
//	//��������� Ҳ���Է�����������
//
//	Person p4 = p1 + 100;
//
//	cout << "p3.m_A="<<p3.m_A << endl;
//	cout << "p3.m_B=" << p3.m_B << endl;
//
//	cout << "p4.m_A=" << p4.m_A << endl;
//	cout << "p4.m_B=" << p4.m_B << endl;
//}

//�������������

//class Person
//{
//public:
//	//���ó�Ա�������� ��������� p.operator(cout) �򻯰汾 p<<out
//	//�������ó�Ա��������<<����� ��Ϊ�޷�ʵ��cout�����
//	/*void operator<<(cout)
//	{
//
//	}*/
//
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ����������������
//ostream & operator<<(ostream & cout, Person &p)//���� operator<<(cout,p)  �� cout<<p
//{
//	cout << "p.m_A=" << p.m_A << "  p.m_B=" << p.m_B;
//	return cout;
//}
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	cout <<p<< endl;
//
//}


//���ص��������

////�Զ�������
//class MyInteger
//{
//	friend ostream &operator<<(ostream &cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//
//	}
//	//����ǰ��++�����
//	MyInteger& operator++()
//	{
//		//�Ƚ���++����
//		m_Num++;
//		//�ٽ�����������
//		return *this;
//	}
//
//	//���غ��� ++�����
//	//void operator++(int)  int����ռλ���� ������������ǰ��++�ͺ���++
//	MyInteger operator++(int)
//	{
//		//�� ��¼��ʱ���
//		MyInteger temp = *this;
//		//�� ����
//		m_Num++;
//		//��󷵻ؼ�¼�Ľ��
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
////����<<�����
//ostream &operator<<(ostream &cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}


//��ֵ���������
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//���� ��ֵ�����
//	Person& operator=(Person &p)
//	{
//		//�������ṩ����ǳ����
//		//m_Age=p.m_Age;
//
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ��������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//���
//		m_Age = new int(*p.m_Age);
//
//		//���ض�����
//		return *this;
//
//	}
//
//	int * m_Age;
//};
//
//void  test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3=p2 = p1;//��ֵ����
//
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}


////���ع�ϵ�����
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//����==��
//	bool operator==(Person &p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Jack", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//
//}

//�����������������

//��ӡ�����
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("Hello world");

//}


//�̳еĻ����﷨

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����"<<endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...(���������б�)" << endl;
//	}
//
//};
//
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
//void  test01()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//}

//�̳��еĶ���ģ��
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//�����е����зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա���� �Ǳ��������������� ����Ƿ��ʲ����� ����ȷʵ�Ǳ��̳���
//	cout << "size of Son="<<sizeof(Son) << endl;
//}


//�̳��еĹ��������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯����" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base������������" << endl;
//	}
//
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯����" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son������������" << endl;
//	}
//};

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base-func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base-func(int a)����" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son-func()����" << endl;
//	}
//
//	int m_A;
//};
//
////ͬ����Ա���Դ���
//void test01()
//{
//	//Base b;
//	Son s;
//	cout << "m_A=" << s.m_A << endl;
//	cout << "m_A=" << s.Base::m_A << endl;
//}
//
////ͬ����Ա��������
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�������ᱻ���ص����������е�ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Base::func(10);
//}


//���μ̳�

//������

//class Animal
//{
//public:
//	int m_Age;
//};
//
////������̳� ������μ̳е�����
////�ڼ̳�ǰ����Ϲؼ��� virtual ��Ϊ��̳�
//
////����
//class Sheep :virtual public Animal{};
//
////����
//class Tuo :virtual public Animal{};
//
////������
//class SheepTuo:public Sheep,public Tuo{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	//���������μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ������������
//	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
//}

//��̬

//������
//class Animal
//{
//public:
//	//Speak���������麯��
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
//	void virtual speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ִ��˵���ĺ���
//void doSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal=" << sizeof(Animal) << endl;
//}


//�ֱ����ö�̬����ʵ�ּ�����

//ʵ�ּ����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2; 
//}; 
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test01()
//{
//	//��̬��ʹ������
//	//�����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator * abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "="<<abc->getResult() << endl;
//	//�����ǵ�����
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//
//	//�˷�����
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//
//}


//��̬���� ������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething ()= 0;
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//
////��������
//void doWork(AbstractDrinking * abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//
//	cout << "-----------------------" << endl;
//	//������Ҷ
//	doWork(new Tea);
//}


//�������ʹ�������

//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	//���麯��
//	virtual void speak() = 0;	
//
//	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	virtual ~Animal()
//	{
//		cout << "Animal������������" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout <<*m_Name<< "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string * m_Name;
//};
//
//void test01()
//{
//	Animal * animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//}

//int main()
//{
//	test01();
//	//test02();
//	return 0;
//}