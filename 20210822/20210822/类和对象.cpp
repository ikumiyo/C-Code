#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


////对象的初始化和清理
//
////1.构造函数 进行初始化操作
//class Person
//{
//	//1.1构造函数
//	//没有返回值 不用写void
//	//函数名 与类名相同
//	//构造函数可以有参数 可以发生重载
//	//创建对象的时候，构造函数会自动调用，而且只调用一次
//public:
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//
//	//2.析构函数 进行清理的操作
//	//没有返回值  不写void
//	//函数名和类名相同  但要在名称前加~
//	//析构函数不可以有参数，不可以发生重载
//	//对象在销毁前会自动调用析构函数，而且只会调用一次
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//};
//
//
////构造和析构都是鼻血有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}


////1 构造函数的分类及调用
////分类
////   按照参数分类   无参构造(默认构造) 和 有参构造
////   按照类型分类   普通构造    和   拷贝构造函数
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person 的无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person 的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person 的拷贝构造函数调用" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//	int age;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造函数调用
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//
//	//注意事项：
//	//调用默认构造函数时，不要加（）
//	//因为下面这行代码，编译器会认为是一个函数的声明 不会认为在创建对象
//	//Person p1();
//
//	/*cout << "p2的年龄为："<<p2.age << endl;
//	cout << "p3的年龄为：" << p3.age << endl;*/
//
//	//2.显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造 
//	Person p3 = Person(p2);//拷贝构造
//
//	
//	Person(10);//匿名对象  特点：当前执行结束后，系统会立即回收掉匿名对象
//	 
//	//注意事项2
//	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person（p3）==Person p3
//	//Person(p3);
//	
//	//3.隐式转换法 
//	Person p4 = 10;// 相当于 写了 Person p4=Person(10);   有参构造
//	Person p5 = p4;//拷贝构造
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}

//拷贝构造函数调用时机

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//}
////2.值传递的方式给函数参数传值
//
////3.值方式返回局部对象
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

int a, b, c;
int a = 30;
int b = a++;
int c = ++a;
cout<< "a=" << a << "b=" << b << "c=" << c << endl;