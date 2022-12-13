#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

////设计人类
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
//
//	//获取年龄
//	int getAge()
//	{
//		//m_Age = 0;
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "输入有误！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//设置情人 只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name;//姓名  可读可写
//	int m_Age;//年龄  只读
//	string m_Lover;//情人  只写
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//
//	cout << "姓名为：" << p.getName() << endl;
//	p.setAge(100);
//	cout << "年龄为：" << p.getAge() << endl;
//
//	p.setLover("哈哈");
//
//
//	system("pause");
//	return 0;
//}


//练习案列：设计立方体类（Cube） 
//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等
//
//class Cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * m_L*m_W + 2*m_W*m_H + 2 * m_L*m_H;
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L*m_W*m_H;
//	}
//	//利用成员函数判断两个立方体是否相等
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
////利用全局函数判断 两个立方体是否相等
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//
//int main()
//{
//	//创建一个立方体对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//	//创建第二个立方体
//	Cube c2;
//	c2.setL(10);
//	c2.setW(100);
//	c2.setH(10);
//
//	//利用全局函数判断
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "全局函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "全局函数判断：c1和c2是不相等的" << endl;
//	}
//
//	//利用成员函数判断
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2是不相等的" << endl;
//	}
//
//	system("pause");
//	return 0;
//} 


//练习案列2：点和圆的关系

////点类
//class Point
//{
//public:
//	//设置x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x
//	int getX()
//	{
//		return m_X;
//	}
//	//设置y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//半径
//
//	//在类中可以让另一个类 作为本类中的成员
//	Point m_Center;//圆心
//};
//
////判断点和圆关系
//void isInCircle(Circle&c, Point &p)
//{
//	//计算两点之间距离的平方
//	int distance =
//		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	
//	//计算半径的平方
//	int rDistance = c.getR()*c.getR();
//	
//	//判断关系
//	if (distance == rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	//创建圆
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//判断关系
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}


