#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


////����ģ��
//template<typename T>   //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ��Ӣ���õ���������
//
//void mySwap(T&a, T&b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//���ú���ģ�彻��
//	//1�������Զ������Ƶ�
//	//mySwap(a, b);
//	//2����ʾָ������
//	mySwap<int>(a, b);
//	
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//}


//ʵ��ͨ�� �������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ��
//���� char ���顢int ����

//��������ģ��
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<typename T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ���±�
//		//�϶������ֵ �� ����������ֵ ҪС��˵��j�±��Ԫ�ز������������ֵ
//		for (int j = i+1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ�±�
//			}
//		}
//		if (max != i)
//		{
//			//����max��iԪ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//	
//}
//
////��ӡ����ģ��
//template<typename T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//���� char����
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}

//��ͨ�����뺯��ģ����ù���
//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3. ����ģ��Ҳ���Է�������
//4. �������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��

//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template < class T >
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template < class T >
//void myPrint(T a, T b,T c)
//{
//	cout << "���õ�������ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);
//
//	ͨ����ģ��Ĳ����б� ǿ�Ƶ��ú���ģ��
//	myPrint<>(a, b);
//
//	myPrint<>(a,b,100);
//	�������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}


//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//
////�Ա����������Ƿ���ȵĺ���
//template<class T>
//bool myCompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//
////���廯����ʾ���廯��ԭ�ͺͶ���˼��template<>��ͷ����ͨ��������ָ������
////���廯�����ڳ���ģ��
//template<> bool myCompare(Person &p1, Person &p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//	if (ret)
//	{
//		cout << "a==b" << endl;
//	}
//	else
//		cout << "a!=b" << endl;
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1==p2" << endl;
//	}
//	else
//		cout << "p1!=p2" << endl;
//
//}

////��ģ��
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//	}
//public:
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//
//
//void test01()
//{
//	// ָ��NameType Ϊstring���ͣ�AgeType Ϊ int����
//	Person<string,int>P1("�����", 999);
//	P1.showPerson();
//}

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//};
//void test01()
//{
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2();
//
//}


//��ģ���������������
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	T1 mName;
//	T2 mAge;
//};
//
////1��ָ����������
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("�����",100);
//	printPerson1(p);
//}
//
////2������ģ�廯 
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T����������" << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("��ɮ", 50);
//	printPerson3(p);
//}

//��ģ����̳�
//template<class T>
//class Base
//{
//	T m;
//};
//
////class son :public Base//����д��������Ҫ֪�������е�T���ͣ����ܼ̳и�����
//class Son:public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////��������ָ�������е�T���ͣ�����Ҳ��Ҫ��ģ��
//template<class T1,class T2>
//class Son2 :public Base <T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}

//��ģ���Ա��������ʵ��
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	/*{
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//
//	void showPerson();
//	//{
//	//	cout << "������" << this->m_Name << endl;
//	//	cout << "���䣺" << this->m_Age << endl;
//	//}
//
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯��������ʵ��
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << endl;
//	cout << "���䣺" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string,int>p("Tom", 18);
//	p.showPerson();
//}


//��ģ����ļ���д�����Լ����
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	
//	string m_Name;
//	int m_Age;
//};

////���캯��������ʵ��
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << endl;
//	cout << "���䣺" << this->m_Age << endl;
//}
//#include"Person.cpp"
//
//void test01()
//{
//	Person<string,int>p("Tom", 18);
//	p.showPerson();
//}


///ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

//��ǰ�ñ�����֪��Person�����
template<class T1,class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "����ʵ�֡���������" << p.m_Name << "���䣺" << p.m_Age << endl;
}

template < class T1, class T2 >
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	}
	//ȫ�ֺ��� ����ʵ��  ��һ����ģ��Ĳ����б�
	friend void printPerson2<>(Person<T1, T2>p);
	

public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


//1��ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int>p("Tom", 18);
	printPerson(p);
}

//2��ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int>p("Rose", 18);
	printPerson2(p);
}


int main()
{
	//test01();
	test02();
	//test03();
	system("pause");
	return 0;
}