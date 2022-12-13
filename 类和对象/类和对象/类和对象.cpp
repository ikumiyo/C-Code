#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//class C1
//{
//	int m_A；//默认权限 是私有
//};
//
//struct C2
//{
//	int m_A;//默认权限 是公共
//};
//int main()
//{
//	//struct 和 class 区别
//	//struct 默认权限是 公共 public
//	//class  默认权限是 私有 private 
//	C1 c1;
//	//c1.m_A;//在class里默认权限 私有，因此类外不可以访问
//
//	C2 c2;
//	c2.m_A = 100;//struct默认权限为公共，因此可以访问
//	system("pause");
//	return 0;
//}



//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

//设计人类
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄
//	int getAge()
//	{
//		m_Age = 0;//初始化为0
//		return m_Age;
//	} 
//	//设置情侣 只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//
//private:
//	//姓名  可读可写
//	string m_Name;
//	//年龄  只读
//	int m_Age;
//	//情侣  只写
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//
//	cout << "姓名为：" << p.getName() << endl;
//	cout << "年龄为：" << p.getAge() << endl;
//
//	//设置情侣
//	p.setLover("杨洋");
//	system("pause");
//	return 0;
//} 

////对象的初始化和清理
////1、构造函数 进行初始化操作
//class Person
//{
//public:
//	//1.1构造函数特点
//	/*没有返回值 不写void
//	函数名 和 类名相同
//	构造函数可以有参数  可以发生重载
//	创建对象的时候，构造函数会自动调用，而且只调用一次*/
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//	//2、析构函数 进行清理的操作
//	/*没有返回值 不写void
//	函数名和类名相同 在名词前加~
//	析构函数不可以有参数，不可以发生重载
//	对象在销毁前 会自动调用析构函数，而且只会调用一次
//	*/
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//
////构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构函数
//void test01()
//{
//	Person P;//在栈上的数据，test01执行完毕后，就会释放这个对象
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


//析构函数的分类及调用
/*  按照参数分  无参构造  有参构造
    按照类型分  普通构造  拷贝构造
*/

//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(Person &p)
//	{
//		age = p.age;
//		cout << "Person的拷贝构造函数调用"<<endl;
//	}
//
//	int age;
//
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
//	//注意事项1：
//	/*调用默认构造函数的时候，不要加()
//
//	*/
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person P3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象，即调用析构函数
//
//	/*注意事项2
//	不要利用拷贝构造函数来 初始化匿名对象 编译器会认为 Person（p3）等价于 Person p3  编译器会认为是重定义
//	*/
//	//3.隐式转换法
//	Person p4 = 10;//相当于写了 Person p4=Person(10);  有参构造
//	Person p5 = p4;//拷贝构造
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}


////拷贝函数调用时机
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person 有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "Person 拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person 析构函数调用" << endl;
//	}
//
//	int m_Age;
//
//};
//
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
////2、值传递的方式给函数参数传值
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
////3、值方式返回局部对象
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


////构造函数的调用规则
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
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
//	cout << "p2的年龄为："<<p2.m_Age << endl;
//}



//深拷贝与浅拷贝

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "Person有参构造函数调用" << endl;
//		
//	}
//	//自己实现拷贝构造函数 解决浅拷贝带来的内存重复释放的问题
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;编译器默认实现的就是这行代码
//		//深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//析构代码 将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person析构函数的调用" << endl;
//	}
//
//	int m_Age;//年龄
//	int *m_Height;//身高
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄为:" << p1.m_Age << endl;
//	cout << "p1的身高为:" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//	cout << "p1的身高为:" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



////初始化列表
//class Person
//{
//public:
//	
//	//传统初始化操作
//	//Person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//初始化列表初始化属性
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



//类对象作为类成员

////手机类
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	//姓名
//	string m_Name;
//	//手机类
//	Phone m_Phone;
//
//
//};
//
////当其他类对象作为本类成员，构造时先构造其他类对象，再构造自身
//void test01()
//{
//	Person p("张三", "苹果");
//}
//int main()
//{
//
//	test01();
//	return 0;
//}

////静态成员变量
//class Person
//{
//public:
//	//所有对象都共享同一份数
//	//编译阶段就分配内存
//	//类内声明，类外初始化操作
//	static int m_A;
//	//静态成员变量也是有访问权限的
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
//	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1、通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//}


////静态成员函数
//class Person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		cout << "static void func调用" << endl;
//	}
//};
//
//void test01()
//{
//	//1、通过对象访问
//	Person p;
//	p.func();
//	//2、通过类名访问
//	Person::func();
//}

//成员变量 和 成员函数 分开存储

//class Person
//{
//	int m_A;//非静态成员变量 属于类的对象上
//
//	static int m_B;//静态成员变量 不属于类的对象上
//
//	void func()  //非静态成员函数 不属于类的对象上
//	{};
//	
//	static void func2() //静态成员函数 不属于类的对象上
//	{};
//};
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间：1
//	//C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p=" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}


//this 指针

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this 指针指向 被调用的成员函数 所属的对象
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
////1、解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2、返回对象本身用this指针
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	p2.PersonAddAge(p1);
//
//	cout << "p2的年龄为：" << p2.age << endl;
//}



////const修饰成员函数
//
////常函数
//class Person
//{
//public:
//
//	//this 指针的本质是 指针常量 指针的指向不可以修改
//	//下面加的const相当于 const Person * const this
//	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
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
//	mutable int m_B;//特殊变量，即使在常函数中，也是可以修改这个值
//
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////常对象
//void test02()
//{
//	const Person p;//在对象前加const，变为常对象
//	p.m_A = 100;
//	p.m_B = 100;
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();// 常对象 不可以调用普通成员函数 因为普通成员函数可以修改属性
//}

//建筑物
//class Building
//{
//	//goodgirl全局函数是 Building好朋友  可以访问Building中的私有成员
//	friend void goodgirl(Building *building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//void goodgirl(Building *building)
//{
//	cout << "好朋友全局函数 正在访问：" << building->m_SittingRoom << endl;
//	cout << "好朋友全局函数 正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodgirl(&building);
//}


////类做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//public:
//	void visit();//参观函数 访问Building中的属性
//	Building *building;
//};
//
//class Building
//{
//	//GodGay类是本类的好朋友，可以访问本类中的私有成员
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好朋友正在访问：" << building->m_SittingRoom << endl;
//	cout << "好朋友正在访问：" << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}


////成员函数作友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();//让visit函数可以访问Building中私有成员
//	void visit2();//让visit2函数不可以访问不Building中私有成员
//	Building * building;
//};
//
//class Building
//{
//	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
//	friend void GoodGay::visit();
//public:
//	Building(); 
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////类外实现成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_SittingRoom<< endl;
//	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
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
////加号运算符重载
//
//class Person
//{
//public:
//
//	//1、成员函数重载+号
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
////2、全局函数重载+号
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////函数重载版本
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
//	//成员函数重载本质调用
//	//Person p3=p1.operator+(p2);
//	//全局函数重载本质调用
//	//Person p3=operator(p1,p2);
//
//	Person p3 = p1 + p2;
//	//运算符重载 也可以发生函数重载
//
//	Person p4 = p1 + 100;
//
//	cout << "p3.m_A="<<p3.m_A << endl;
//	cout << "p3.m_B=" << p3.m_B << endl;
//
//	cout << "p4.m_A=" << p4.m_A << endl;
//	cout << "p4.m_B=" << p4.m_B << endl;
//}

//左移运算符重载

//class Person
//{
//public:
//	//利用成员函数重载 左移运算符 p.operator(cout) 简化版本 p<<out
//	//不会利用成员函数重载<<运算符 因为无法实现cout在左侧
//	/*void operator<<(cout)
//	{
//
//	}*/
//
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载左移运算符
//ostream & operator<<(ostream & cout, Person &p)//本质 operator<<(cout,p)  简化 cout<<p
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


//重载递增运算符

////自定义整型
//class MyInteger
//{
//	friend ostream &operator<<(ostream &cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//
//	}
//	//重载前置++运算符
//	MyInteger& operator++()
//	{
//		//先进行++运算
//		m_Num++;
//		//再将自身做返回
//		return *this;
//	}
//
//	//重载后置 ++运算符
//	//void operator++(int)  int代表占位参数 可以用来区分前置++和后置++
//	MyInteger operator++(int)
//	{
//		//先 记录当时结果
//		MyInteger temp = *this;
//		//后 递增
//		m_Num++;
//		//最后返回记录的结果
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
////重载<<运算符
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


//赋值运算符重载
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
//	//重载 赋值运算符
//	Person& operator=(Person &p)
//	{
//		//编译器提供的是浅拷贝
//		//m_Age=p.m_Age;
//
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后进行深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//		//返回对象本身
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
//	p3=p2 = p1;//赋值运算
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}


////重载关系运算符
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//重载==号
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
//		cout << "p1和p2是相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//
//}

//函数调用运算符重载

//打印输出类
//class MyPrint
//{
//public:
//	//重载函数调用运算符
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


//继承的基本语法

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）"<<endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...(公共分类列表)" << endl;
//	}
//
//};
//
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
//void  test01()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//}

//继承中的对象模型
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
//	//父类中的所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性 是被编译器给隐藏了 因此是访问不到的 但是确实是被继承了
//	cout << "size of Son="<<sizeof(Son) << endl;
//}


//继承中的构造和析构顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数！" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base的析构函数！" << endl;
//	}
//
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数！" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son的析构函数！" << endl;
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
//		cout << "Base-func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base-func(int a)调用" << endl;
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
//		cout << "Son-func()调用" << endl;
//	}
//
//	int m_A;
//};
//
////同名成员属性处理
//void test01()
//{
//	//Base b;
//	Son s;
//	cout << "m_A=" << s.m_A << endl;
//	cout << "m_A=" << s.Base::m_A << endl;
//}
//
////同名成员函数处理
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//如果子类中出现和父类同名的成员函数，子类的同名函数会被隐藏掉父类中所有的同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s.Base::func(10);
//}


//菱形继承

//动物类

//class Animal
//{
//public:
//	int m_Age;
//};
//
////利用虚继承 解决菱形继承的问题
////在继承前面加上关键字 virtual 变为虚继承
//
////羊类
//class Sheep :virtual public Animal{};
//
////驼类
//class Tuo :virtual public Animal{};
//
////羊驼类
//class SheepTuo:public Sheep,public Tuo{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	//当出现菱形继承时，两个父类拥有相同的数据，需要加作用域区分
//	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
//}

//多态

//动物类
//class Animal
//{
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
//	void virtual speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////猫类
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////执行说话的函数
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


//分别利用多态技术实现计算器

//实现计算机抽象类
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
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器类
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
//	//多态的使用条件
//	//父类的指针或者引用指向子类对象
//
//	//加法运算
//	AbstractCalculator * abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "="<<abc->getResult() << endl;
//	//用完后记得销毁
//	delete abc;
//
//	//减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//
//	//乘法运算
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//
//}


//多态案例 制作饮品
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething ()= 0;
//
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//
//};
//
////制作茶叶
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
////制作函数
//void doWork(AbstractDrinking * abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	//制作咖啡
//	doWork(new Coffee);
//
//	cout << "-----------------------" << endl;
//	//制作茶叶
//	doWork(new Tea);
//}


//虚析构和纯虚析构

//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	//纯虚函数
//	virtual void speak() = 0;	
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	virtual ~Animal()
//	{
//		cout << "Animal析构函数调用" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout <<*m_Name<< "小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
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