#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//文本文件 写文件
//void test01()
//{
//
//	//1、包含头文件 fstream
//
//	//2、创建流对象
//	ofstream ofs;
//
//	//3、指定打开方式
//	ofs.open("test.txt", ios::out);
//
//	//4、写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	//5、关闭文件
//	ofs.close();
//}

////文本文件 读文件
//void test01()
//{
//	//1. 包含头文件
//
//	//2. 创建流对象
//	ifstream ifs;
//
//	//3. 打开文件 并判断文件是否打开成功
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4. 读数据
//
//	//第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//
//	}*/
//
//	//第三种
//	/*string buf;
//
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第四种
//	char c;
//	while ((c=ifs.get())!=EOF)
//	{
//		cout << c;
//	}
//
//	//5. 关闭文件
//	ifs.close();
//
//}

//二进制文件 写文件
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
////二进制文件  写文件
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建输出流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "张三", 18 };
//
//	//4、写文件
//	ofs.write((const char *)&p, sizeof(p));
//
//	//5、关闭文件
//	ofs.close();
//}

//二进制读文件
class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}

	Person p;
	ifs.read((char *)&p, sizeof(p));

	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main()
{
	test01();
	return 0;
}