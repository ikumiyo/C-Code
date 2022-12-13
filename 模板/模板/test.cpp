#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


////函数模板
//template<typename T>   //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用英语用的数据类型
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
//	//利用函数模板交换
//	//1、利用自动类型推导
//	//mySwap(a, b);
//	//2、显示指定类型
//	mySwap<int>(a, b);
//	
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//}


//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char 数组、int 数组

//交换函数模板
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<typename T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值的下标
//		//认定的最大值 比 遍历出的数值 要小，说明j下标的元素才是真正的最大值
//		for (int j = i+1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i)
//		{
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//	
//}
//
////打印数组模板
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
//	//测试 char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}

//普通函数与函数模板调用规则
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
//4. 如果函数模板可以产生更好的匹配, 优先调用函数模板

//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template < class T >
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template < class T >
//void myPrint(T a, T b,T c)
//{
//	cout << "调用的是重载模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);
//
//	通过空模板的参数列表 强制调用函数模板
//	myPrint<>(a, b);
//
//	myPrint<>(a,b,100);
//	如果函数模板可以产生更好的匹配, 优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}


//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

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
////对比两个数据是否相等的函数
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
////具体化，显示具体化的原型和定意思以template<>开头，并通过名称来指出类型
////具体化优先于常规模板
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

////类模板
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
//	// 指定NameType 为string类型，AgeType 为 int类型
//	Person<string,int>P1("孙悟空", 999);
//	P1.showPerson();
//}

//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

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
//	//类模板中的成员函数
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


//类模板对象做函数参数
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
////1、指定传入类型
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("孙悟空",100);
//	printPerson1(p);
//}
//
////2、参数模板化 
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3、整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的数据类型" << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 50);
//	printPerson3(p);
//}

//类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
//
////class son :public Base//错误写法，必须要知道父类中的T类型，才能继承给子类
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
////如果想灵活指定父类中的T类型，子类也需要变模板
//template<class T1,class T2>
//class Son2 :public Base <T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}

//类模板成员函数类外实现
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
//	//	cout << "姓名：" << this->m_Name << endl;
//	//	cout << "年龄：" << this->m_Age << endl;
//	//}
//
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数的类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << endl;
//	cout << "年龄：" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string,int>p("Tom", 18);
//	p.showPerson();
//}


//类模板分文件编写问题以及解决
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

////构造函数的类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << endl;
//	cout << "年龄：" << this->m_Age << endl;
//}
//#include"Person.cpp"
//
//void test01()
//{
//	Person<string,int>p("Tom", 18);
//	p.showPerson();
//}


///通过全局函数 打印Person信息

//提前让编译器知道Person类存在
template<class T1,class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "类外实现——姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}

template < class T1, class T2 >
class Person
{
	//全局函数 类内实现
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	}
	//全局函数 类外实现  加一个空模板的参数列表
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


//1、全局函数在类内实现
void test01()
{
	Person<string, int>p("Tom", 18);
	printPerson(p);
}

//2、全局函数在类外实现
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