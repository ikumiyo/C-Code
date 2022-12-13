#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //标准算法的头文件
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<ctime>

//vector容器存放内置数据类型

//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//创建了一个vector容器 相当于数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//其实迭代器 指向容器中的第一个元素
//	//vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
//
//	////第一种遍历
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////第二种遍历
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历  利用STL中提供的遍历算法
//	for_each(v.begin(), v.end(), myPrint);


//容器嵌套容器
//void test01()
//{
//	vector<vector<int>>v;
//
//	//创建小容器
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将小容器插入到大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器把所有数据遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)---容器 vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}

//string的构造函数
/*
* string();        				//创建一个空的字符串 例如: string str;
* string(const char* s);	            //使用字符串s初始化
* string(const string& str);       //使用一个string对象初始化另一个string对象
* string(int n, char c);           //使用n个字符c初始化 
*/

//void test01()
//{
//	string s1;//默认构造
//
//	const char*str = "hello world!";
//	string s2(str);
//
//	cout << "s2=" << s2 << endl;
//
//	string s3(s2);
//	cout << "s3=" << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4=" << s4 << endl;
//}

//string赋值操作
/*
* `string& operator=(const char* s);`             //char*类型字符串 赋值给当前的字符串
* `string& operator=(const string &s);`         //把字符串s赋给当前的字符串
* `string& operator=(char c);`                          //字符赋值给当前的字符串
* `string& assign(const char *s);`                  //把字符串s赋给当前的字符串
* `string& assign(const char *s, int n);`     //把字符串s的前n个字符赋给当前的字符串
* `string& assign(const string &s);`              //把字符串s赋给当前字符串
* `string& assign(int n, char c);`                  //用n个字符c赋给当前字符串
*/

//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++", 5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//
//	string  str7;
//	str7.assign(10, 'w');
//	cout << "str7=" << str7 << endl;
//}

//字符串拼接
/*
* `string& operator+=(const char* str);`                   //重载+=操作符
* `string& operator+=(const char c);`                         //重载+=操作符
* `string& operator+=(const string& str);`                //重载+=操作符
* `string& append(const char *s); `                               //把字符串s连接到当前字符串结尾
* `string& append(const char *s, int n);`                 //把字符串s的前n个字符连接到当前字符串结尾
* `string& append(const string &s);`                           //同operator+=(const string& str)
* `string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾
*/

//void test01()
//{
//	string str1 = "我";
//
//	str1 += "爱敲代码";
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1=" << str1 << endl;
//
//	string str2 = "C++ C语言";
//	
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//
//	string str3 = "I ";
//	str3.append("Love ");
//	cout << "str3=" << str3 << endl;
//
//	str3.append("game abcdef", 4);
//	cout << "str3=" << str3 << endl;
//
//	//str3.append(str2);
//	//cout << "str3=" << str3 << endl;
//
//	str3.append(str2,4,5);
//	cout << "str3=" << str3 << endl;
//
//}

//1、查找
//void test01()
//{
//	string str1 = "abcdef";
//
//	int pos = str1.find("de");
//
//	cout << "pos=" << pos << endl;
//}

//比较字符
//void test01()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1等于 str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1大于str2" << endl;
//	}
//	else
//	{ 
//		cout << "str1小于str2" << endl;
//	}
//}

//string 字符存取
//
//void test01()
//{
//	string str = "hello";
//
//	cout << "str=" << str << endl; 
//
//	//1、通过[]访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2、通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'x';
//	cout << "str=" << str << endl;
//}

//字符串 插入和删除
//void test01()
//{
//	string str = "hello";
//
//	//插入
//	str.insert(1, "111");
//	cout << "Str=" << str << endl;
//
//	//删除
//	str.erase(1, 3);
//	cout << "Str=" << str << endl;
//}

//string 求子串
//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "subStr=" << subStr << endl;
//}

//实用操作
//void test01()
//{
//	string email = "zhagnxia@qq.com";
//	//从邮件地址中获取用户名信息
//
//	int pos = email.find("@");
//	cout << pos << endl;
//
//	string userName = email.substr(0, pos);
//	cout << userName << endl;
//}

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector容器构造
//void test01()
//{
//	vector<int>v1;//默认构造 无参构造
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int>v3(10, 199);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector赋值
//void test01()
//{
//	vector<int>v1;
//	for (int i=0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//赋值
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem方式赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector容器的容量和大小操作
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15,100);//利用重载的版本，可以指定默认填充值，参数2
//	printVector(v1);//如果重新指定的大小比原来的长了，默认用0来填充新的位置
//
//	v1.resize(5);
//	printVector(v1);//如果重新指定的比原来的短了，超出的部分会自动删除
//}

/*
* `push_back(ele);`                                  //尾部插入元素ele
* `pop_back();`                                      //删除最后一个元素
* `insert(const_iterator pos, ele);`                 //迭代器指向位置pos插入元素ele
* `insert(const_iterator pos, int count,ele);`       //迭代器指向位置pos插入count个元素ele
* `erase(const_iterator pos);`                       //删除迭代器指向的元素
* `erase(const_iterator start, const_iterator end);` //删除迭代器从start到end之间的元素
* `clear();`                                         //删除容器中所有元素
*/
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector插入和删除
//void test01()
//{
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	//遍历
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//	 
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//
//}

//vector容器 数据存取
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//利用中括号的形式来访问数组中的元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//利用at方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	//获取最后一个元素
//	cout <<"最后一个元素为：" << v1.back() << endl;
//
//}

//vector容器互换
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////1、基本使用
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i>0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//
//}
////2、实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap收缩
//	vector<int>(v).swap(v);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//	
//}

//vector容器 预留空间
//void test01()
//{
//	vector<int>v;
//
//	//利用reserve预留空间
//	v.reserve(10000);
//	int num = 0;//统计开辟次数
//	int *p = NULL;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num=" << num << endl;
//}

//deque构造函数

//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i=0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//	
//}

//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////deque容器的赋值操作
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator= 赋值操作
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assisn 赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//
//}

//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////deque的大小操作
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小：" << d1.size() << endl;
//	}
//}

//deque容器的插入和删除
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////两端进行操作
//void test01()
//{
//	deque<int>d1;
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	//头删
//	d1.pop_front();
//	
//	printDeque(d1);
//	
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2,2000);
//	printDeque(d1);
//
//	//按照区间进行插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}

//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//public:
//	string m_Name;//姓名
//	int m_Score;//平均分
//};
//
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDF";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//将创建的对象放入容器中
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委的分数 放到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  // 60 ~ 100
//			d.push_back(score);
//		}
//
//		/*cout << "选手：" << it->m_Name << "打分：" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}
//		cout << endl;*/
//
//		//排序
//		sort(d.begin(), d.end());
//
//		//去除最高分和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//累加每个评委的分数
//		}
//		int avg = sum / d.size();
//
//		//将平均分 赋值给选手身上
//		it->m_Score = avg;
//	}
//
//}
//
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it=v.begin(); it != v.end(); it++)
//	{
//		cout << "选手：" << (*it).m_Name << "平均分：" << (*it).m_Score << endl;
//	}
//}
//
//int main()
//{
//	//1、创建5名选手
//	vector<Person>v;//存放选手的容器
//	createPerson(v);
//
//	//测试
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名："<<(*it).m_Name << " "<<"分数："<<(*it).m_Score<<" ";
//	}
//	cout << endl;*/
//
//	//2、给5名选手打分
//	setScore(v);
//
//	//3、显示最后得分
//	showScore(v);
//	system("pause");
//	return 0;
//}


//void test01()
//{
//	//特点：先进后出的数据结构
//	stack<int>s;
//
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "栈的大小：" << s.size() << endl;
//	
//	//只要栈不为空，查看栈顶，并且执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素：" << s.top() << endl;
//
//		//出栈
//		s.pop();
//
//	}
//
//	cout << "栈的大小：" << s.size() << endl;
//
//}

//队列 Queue
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	//创建队列
//	queue<Person>q;
//
//	//准备数据
//	Person p1("唐僧",30);
//	Person p2("孙悟空",1000);
//	Person p3("猪八戒",900);
//	Person p4("沙僧",800);
//
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//判断只要队列不为空，查看队头，查看队尾，出队
//	//队列不提供迭代器，更不支持随机访问	
//	while (!q.empty()) {
//		//输出队头元素
//		cout << "队头元素-- 姓名： " << q.front().m_Name
//			<< " 年龄： " << q.front().m_Age << endl;
//
//		cout << "队尾元素-- 姓名： " << q.back().m_Name
//			<< " 年龄： " << q.back().m_Age << endl;
//
//		cout << endl;
//		//弹出队头元素
//		q.pop();
//	}
//
//	cout << "队列大小为：" << q.size() << endl;
//
//}

//list容器构造函数

//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1; 
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历容器
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 1000);
//	printList(L4);
//
//}

//list 容器的赋值与交换
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////交换
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 1000);
//
//	cout << "交换前:" << endl;;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "交换后：" << endl;;
//	printList(L1);
//	printList(L2);
//}

//list 容器大小操作
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "L1容器为空" << endl;
//	}
//	else
//	{
//		cout << "L1容器不为空" << endl;
//		cout << "L1的元素个数为：" << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10, 1000);
//	printList(L1);
//}

//list容器的插入和删除
/*
* push_back(elem);//在容器尾部加入一个元素
* pop_back();//删除容器中最后一个元素
* push_front(elem);//在容器开头插入一个元素
* pop_front();//从容器开头移除第一个元素
* insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
* insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
* insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
* clear();//移除容器的所有数据
* erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
* erase(pos);//删除pos位置的数据，返回下一个数据的位置。
* remove(elem);//删除容器中所有与elem值匹配的元素
*/

//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl; 
//}
//void test01()
//{
//	list<int>L;
//
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	printList(L);
//
//	//头删
//	L.pop_front();
//	printList(L);
//
//	//insert插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//移除
//	L.push_back(100000);
//	L.push_back(100000);
//	L.push_back(100000);
//	printList(L);
//	L.remove(100000);
//	printList(L);
//
//}

//list容器 数据存取
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0];不可以用[]访问list容器中的元素
//	//L1.at(0);不可以用at方式访问list容器中的元素
//	//原因是list本质是链表，不是用连续的空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向
//	it--;//支持双向
//	//it + 1;不支持随机访问
//}

//list容器的反转和排序
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	cout << "反转后：" << endl;
//	L1.reverse();
//	printList(L1);
//}
//bool myCompare(int v1, int v2)
//{
//	//降序 就让第一个数大于第二个数
//	return v1 > v2;
//}
////排序
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(100);
//	L1.push_back(60);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	cout << "排序后：" << endl;
//	L1.sort(myCompare);
//	printList(L1);
//}

//list容器 排序案例 对于自定义数据类型 做排序
//按照年龄进行升序 如果年龄相同按照身高进行降序

//class Person
//{
//public:
//	Person(string name,int age,int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//public:
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
////指定排序规则
//bool comparePerson(Person&p1, Person&p2)
//{
//	//按年龄升序
//	if (p1.m_Age == p2.m_Age)
//	{
//		//年龄相同 按身高降序
//		return p1.m_Height > p2.m_Height;
//	}
//	return p1.m_Age < p2.m_Age;
//}
//void test01()
//{
//	list<Person> L;//创建容器
//
//	//准备数据
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	//插入数据
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6); 
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl; ;
//	}
//	//排序
//	cout << "--------------------------------" << endl;
//	cout << "排序后：" << endl;
//	L.sort(comparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;;
//	}
//
//}


//set容器构造和赋值
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//
//	//插入数据 只有insert的方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//
//
//
//	//遍历容器 
//	//set容器的特点：所有元素插入时会自动被排序 
//	//set容器不允许插入重复值 
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}

//set容器 大小和交换
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//打印容器
//	printSet(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小：" << s1.size() << endl;
//	}
//
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "-----------------" << endl;
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//	
//}

//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//遍历
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//删除重载版本
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}

//set查找与统计
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(300);
//
//	if (pos != s1.end())
//	{
//		cout << "找到元素" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//}
//
////统计
//void test02()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	int num = s1.count(300);
//	cout << "num=" << num << endl;
//}

//set容器和 multiset容器的区别
//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "第一次插入成功!" << endl;
//	}
//	else {
//		cout << "第一次插入失败!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "第二次插入成功!" << endl;
//	}
//	else {
//		cout << "第二次插入失败!" << endl;
//	}
//
//	//multiset
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}

////pair对组的创建
//void test01()
//{
//	//第一种方式
//	pair<string, int>p("Tom", 20);
//
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("Rose",30);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//}

//set容器排序
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void  test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则从大到小
//	set<int,MyCompare>s2;
//
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}

//set容器排序 存放自定义数据类型
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person &p2)
//	{
//		//按照年龄进行排序  降序
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson> s;
//
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//}

//map容器 构造和赋值
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "  value=" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建map容器
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//
//}

/*案例描述:
* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
* 随机给10名员工分配部门和工资
* 通过multimap进行信息的插入  key(部门编号) value(员工)
* 分部门显示员工信息
*/

#define CEHUA  0
#define MEISHU 1
#define YANFA  2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
		//将员工放入到容器中
		v.push_back(worker);
	}
}

//员工分组
void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; // 0 1 2 

		//将员工插入到分组中
		//key部门编号，value具体员工
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGourp(multimap<int, Worker>&m)
{
	// 0  A  B  C   1  D  E   2  F G ...
	cout << "策划部门：" << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // 统计具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "美术部门： " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "研发部门： " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

}

int main() {

	srand((unsigned int)time(NULL));

	//1、创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//2、员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);


	//3、分组显示员工
	showWorkerByGourp(mWorker);

	////测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名： " << it->m_Name << " 工资： " << it->m_Salary << endl;
	//}

	system("pause");

	return 0;
}