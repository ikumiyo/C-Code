#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //��׼�㷨��ͷ�ļ�
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<ctime>

//vector�������������������

//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//������һ��vector���� �൱������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʵ������ ָ�������еĵ�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ���
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////�ڶ��ֱ���
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//�����ֱ���  ����STL���ṩ�ı����㷨
//	for_each(v.begin(), v.end(), myPrint);


//����Ƕ������
//void test01()
//{
//	vector<vector<int>>v;
//
//	//����С����
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//��С�������������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//ͨ�����������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)---���� vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}

//string�Ĺ��캯��
/*
* string();        				//����һ���յ��ַ��� ����: string str;
* string(const char* s);	            //ʹ���ַ���s��ʼ��
* string(const string& str);       //ʹ��һ��string�����ʼ����һ��string����
* string(int n, char c);           //ʹ��n���ַ�c��ʼ�� 
*/

//void test01()
//{
//	string s1;//Ĭ�Ϲ���
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

//string��ֵ����
/*
* `string& operator=(const char* s);`             //char*�����ַ��� ��ֵ����ǰ���ַ���
* `string& operator=(const string &s);`         //���ַ���s������ǰ���ַ���
* `string& operator=(char c);`                          //�ַ���ֵ����ǰ���ַ���
* `string& assign(const char *s);`                  //���ַ���s������ǰ���ַ���
* `string& assign(const char *s, int n);`     //���ַ���s��ǰn���ַ�������ǰ���ַ���
* `string& assign(const string &s);`              //���ַ���s������ǰ�ַ���
* `string& assign(int n, char c);`                  //��n���ַ�c������ǰ�ַ���
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

//�ַ���ƴ��
/*
* `string& operator+=(const char* str);`                   //����+=������
* `string& operator+=(const char c);`                         //����+=������
* `string& operator+=(const string& str);`                //����+=������
* `string& append(const char *s); `                               //���ַ���s���ӵ���ǰ�ַ�����β
* `string& append(const char *s, int n);`                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
* `string& append(const string &s);`                           //ͬoperator+=(const string& str)
* `string& append(const string &s, int pos, int n);`//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

//void test01()
//{
//	string str1 = "��";
//
//	str1 += "���ô���";
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1=" << str1 << endl;
//
//	string str2 = "C++ C����";
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

//1������
//void test01()
//{
//	string str1 = "abcdef";
//
//	int pos = str1.find("de");
//
//	cout << "pos=" << pos << endl;
//}

//�Ƚ��ַ�
//void test01()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1���� str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1����str2" << endl;
//	}
//	else
//	{ 
//		cout << "str1С��str2" << endl;
//	}
//}

//string �ַ���ȡ
//
//void test01()
//{
//	string str = "hello";
//
//	cout << "str=" << str << endl; 
//
//	//1��ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2��ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
//	str[0] = 'x';
//	cout << "str=" << str << endl;
//}

//�ַ��� �����ɾ��
//void test01()
//{
//	string str = "hello";
//
//	//����
//	str.insert(1, "111");
//	cout << "Str=" << str << endl;
//
//	//ɾ��
//	str.erase(1, 3);
//	cout << "Str=" << str << endl;
//}

//string ���Ӵ�
//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "subStr=" << subStr << endl;
//}

//ʵ�ò���
//void test01()
//{
//	string email = "zhagnxia@qq.com";
//	//���ʼ���ַ�л�ȡ�û�����Ϣ
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
////vector��������
//void test01()
//{
//	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//ͨ�����䷽ʽ���й���
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elem��ʽ����
//	vector<int>v3(10, 199);
//	printVector(v3);
//
//	//��������
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
////vector��ֵ
//void test01()
//{
//	vector<int>v1;
//	for (int i=0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//��ֵ
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n��elem��ʽ��ֵ
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
////vector�����������ʹ�С����
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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15,100);//�������صİ汾������ָ��Ĭ�����ֵ������2
//	printVector(v1);//�������ָ���Ĵ�С��ԭ���ĳ��ˣ�Ĭ����0������µ�λ��
//
//	v1.resize(5);
//	printVector(v1);//�������ָ���ı�ԭ���Ķ��ˣ������Ĳ��ֻ��Զ�ɾ��
//}

/*
* `push_back(ele);`                                  //β������Ԫ��ele
* `pop_back();`                                      //ɾ�����һ��Ԫ��
* `insert(const_iterator pos, ele);`                 //������ָ��λ��pos����Ԫ��ele
* `insert(const_iterator pos, int count,ele);`       //������ָ��λ��pos����count��Ԫ��ele
* `erase(const_iterator pos);`                       //ɾ��������ָ���Ԫ��
* `erase(const_iterator start, const_iterator end);` //ɾ����������start��end֮���Ԫ��
* `clear();`                                         //ɾ������������Ԫ��
*/
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector�����ɾ��
//void test01()
//{
//	vector<int>v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	//����
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//	 
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//���
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//
//}

//vector���� ���ݴ�ȡ
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//���������ŵ���ʽ�����������е�Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//����at��ʽ����Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//
//	//��ȡ���һ��Ԫ��
//	cout <<"���һ��Ԫ��Ϊ��" << v1.back() << endl;
//
//}

//vector��������
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////1������ʹ��
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "����ǰ��" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i>0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "������" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//
//}
////2��ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);//����ָ����С
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//����swap����
//	vector<int>(v).swap(v);
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//	
//}

//vector���� Ԥ���ռ�
//void test01()
//{
//	vector<int>v;
//
//	//����reserveԤ���ռ�
//	v.reserve(10000);
//	int num = 0;//ͳ�ƿ��ٴ���
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

//deque���캯��

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
////deque�����ĸ�ֵ����
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator= ��ֵ����
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assisn ��ֵ
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
////deque�Ĵ�С����
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
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�С��" << d1.size() << endl;
//	}
//}

//deque�����Ĳ����ɾ��
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////���˽��в���
//void test01()
//{
//	deque<int>d1;
//
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	//ͷɾ
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
//	//insert����
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2,2000);
//	printDeque(d1);
//
//	//����������в���
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
//	string m_Name;//����
//	int m_Score;//ƽ����
//};
//
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDF";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//�������Ķ������������
//		v.push_back(p);
//	}
//}
//
////���
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�ķ��� �ŵ�deque������
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  // 60 ~ 100
//			d.push_back(score);
//		}
//
//		/*cout << "ѡ�֣�" << it->m_Name << "��֣�" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}
//		cout << endl;*/
//
//		//����
//		sort(d.begin(), d.end());
//
//		//ȥ����߷ֺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//�ۼ�ÿ����ί�ķ���
//		}
//		int avg = sum / d.size();
//
//		//��ƽ���� ��ֵ��ѡ������
//		it->m_Score = avg;
//	}
//
//}
//
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it=v.begin(); it != v.end(); it++)
//	{
//		cout << "ѡ�֣�" << (*it).m_Name << "ƽ���֣�" << (*it).m_Score << endl;
//	}
//}
//
//int main()
//{
//	//1������5��ѡ��
//	vector<Person>v;//���ѡ�ֵ�����
//	createPerson(v);
//
//	//����
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������"<<(*it).m_Name << " "<<"������"<<(*it).m_Score<<" ";
//	}
//	cout << endl;*/
//
//	//2����5��ѡ�ִ��
//	setScore(v);
//
//	//3����ʾ���÷�
//	showScore(v);
//	system("pause");
//	return 0;
//}


//void test01()
//{
//	//�ص㣺�Ƚ���������ݽṹ
//	stack<int>s;
//
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//	
//	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ�أ�" << s.top() << endl;
//
//		//��ջ
//		s.pop();
//
//	}
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//}

//���� Queue
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
//	//��������
//	queue<Person>q;
//
//	//׼������
//	Person p1("��ɮ",30);
//	Person p2("�����",1000);
//	Person p3("��˽�",900);
//	Person p4("ɳɮ",800);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
//	//���в��ṩ������������֧���������	
//	while (!q.empty()) {
//		//�����ͷԪ��
//		cout << "��ͷԪ��-- ������ " << q.front().m_Name
//			<< " ���䣺 " << q.front().m_Age << endl;
//
//		cout << "��βԪ��-- ������ " << q.back().m_Name
//			<< " ���䣺 " << q.back().m_Age << endl;
//
//		cout << endl;
//		//������ͷԪ��
//		q.pop();
//	}
//
//	cout << "���д�СΪ��" << q.size() << endl;
//
//}

//list�������캯��

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
//	//����list����
//	list<int>L1; 
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��������
//	printList(L1);
//
//	//���䷽ʽ����
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	printList(L3);
//
//	//n��elem
//	list<int>L4(10, 1000);
//	printList(L4);
//
//}

//list �����ĸ�ֵ�뽻��
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
////����
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
//	cout << "����ǰ:" << endl;;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;;
//	printList(L1);
//	printList(L2);
//}

//list ������С����
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
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "L1����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1������Ϊ��" << endl;
//		cout << "L1��Ԫ�ظ���Ϊ��" << L1.size() << endl;
//	}
//
//	//����ָ����С
//	L1.resize(10, 1000);
//	printList(L1);
//}

//list�����Ĳ����ɾ��
/*
* push_back(elem);//������β������һ��Ԫ��
* pop_back();//ɾ�����������һ��Ԫ��
* push_front(elem);//��������ͷ����һ��Ԫ��
* pop_front();//��������ͷ�Ƴ���һ��Ԫ��
* insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
* insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
* insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
* clear();//�Ƴ���������������
* erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
* erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
* remove(elem);//ɾ��������������elemֵƥ���Ԫ��
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
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	printList(L);
//
//	//insert����
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(100000);
//	L.push_back(100000);
//	L.push_back(100000);
//	printList(L);
//	L.remove(100000);
//	printList(L);
//
//}

//list���� ���ݴ�ȡ
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0];��������[]����list�����е�Ԫ��
//	//L1.at(0);��������at��ʽ����list�����е�Ԫ��
//	//ԭ����list���������������������Ŀռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��
//	it--;//֧��˫��
//	//it + 1;��֧���������
//}

//list�����ķ�ת������
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
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	cout << "��ת��" << endl;
//	L1.reverse();
//	printList(L1);
//}
//bool myCompare(int v1, int v2)
//{
//	//���� ���õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
////����
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(100);
//	L1.push_back(60);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	cout << "�����" << endl;
//	L1.sort(myCompare);
//	printList(L1);
//}

//list���� ������ �����Զ����������� ������
//��������������� ���������ͬ������߽��н���

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
////ָ���������
//bool comparePerson(Person&p1, Person&p2)
//{
//	//����������
//	if (p1.m_Age == p2.m_Age)
//	{
//		//������ͬ ����߽���
//		return p1.m_Height > p2.m_Height;
//	}
//	return p1.m_Age < p2.m_Age;
//}
//void test01()
//{
//	list<Person> L;//��������
//
//	//׼������
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	//��������
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6); 
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl; ;
//	}
//	//����
//	cout << "--------------------------------" << endl;
//	cout << "�����" << endl;
//	L.sort(comparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;;
//	}
//
//}


//set��������͸�ֵ
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
//	//�������� ֻ��insert�ķ�ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//
//
//
//	//�������� 
//	//set�������ص㣺����Ԫ�ز���ʱ���Զ������� 
//	//set��������������ظ�ֵ 
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}

//set���� ��С�ͽ���
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��С
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//��ӡ����
//	printSet(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�С��" << s1.size() << endl;
//	}
//
//}
//
////����
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
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "-----------------" << endl;
//	cout << "������" << endl;
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
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//ɾ�����ذ汾
//	s1.erase(30);
//	printSet(s1);
//
//	//���
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}

//set������ͳ��
//void test01()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(300);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ��" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//}
//
////ͳ��
//void test02()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	int num = s1.count(300);
//	cout << "num=" << num << endl;
//}

//set������ multiset����������
//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "��һ�β���ɹ�!" << endl;
//	}
//	else {
//		cout << "��һ�β���ʧ��!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "�ڶ��β���ɹ�!" << endl;
//	}
//	else {
//		cout << "�ڶ��β���ʧ��!" << endl;
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

////pair����Ĵ���
//void test01()
//{
//	//��һ�ַ�ʽ
//	pair<string, int>p("Tom", 20);
//
//	cout << "������" << p.first << " ���䣺" << p.second << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p2 = make_pair("Rose",30);
//	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
//}

//set��������
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
//	//ָ���������Ӵ�С
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

//set�������� ����Զ�����������
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
//		//���������������  ����
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson> s;
//
//	Person p1("����", 23);
//	Person p2("����", 27);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
//	}
//}

//map���� ����͸�ֵ
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
//	//����map����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//��ֵ
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//
//}

/*��������:
* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
* �����10��Ա�����䲿�ź͹���
* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
* �ֲ�����ʾԱ����Ϣ
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
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3; // 0 1 2 

		//��Ա�����뵽������
		//key���ű�ţ�value����Ա��
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGourp(multimap<int, Worker>&m)
{
	// 0  A  B  C   1  D  E   2  F G ...
	cout << "�߻����ţ�" << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // ͳ�ƾ�������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "�������ţ� " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "�з����ţ� " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}

}

int main() {

	srand((unsigned int)time(NULL));

	//1������Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//2��Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);


	//3��������ʾԱ��
	showWorkerByGourp(mWorker);

	////����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "������ " << it->m_Name << " ���ʣ� " << it->m_Salary << endl;
	//}

	system("pause");

	return 0;
}