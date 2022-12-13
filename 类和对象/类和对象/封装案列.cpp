#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//圆周率
const double PI = 3.14;

//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径


class Circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI*m_r;
	}
};

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类
class Student
{
public://公共权限

	//属性
	string Name;
	string Id;
	//行为
	//显示姓名和学号的函数
	void showStudent()
	{
		cout << "姓名： "<< Name   << "  学号:  " << Id << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		Name = name;
	}
	//给学号赋值
	void setId(string id)
	{
		Id = id;
	}
};

int main()
{
	//通过圆类 创建具体的圆 （对象）
	//Circle c1;
	//给圆对象 的属性进行赋值
//	c1.m_r = 10;

	//创建一个具体学生 实例化对象
	Student s1;
	//给s1对象 进行属性赋值操作
	//s1.name = "张三";
	s1.setName("张三");
//	s1.Id = "1234567";
	s1.setId("1234567");
	s1.showStudent();

	//cout << "圆的周长：" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}