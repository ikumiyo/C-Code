#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��

////�������
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
//
//	//��ȡ����
//	int getAge()
//	{
//		//m_Age = 0;
//		return m_Age;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "��������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//�������� ֻд
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name;//����  �ɶ���д
//	int m_Age;//����  ֻ��
//	string m_Lover;//����  ֻд
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//
//	cout << "����Ϊ��" << p.getName() << endl;
//	p.setAge(100);
//	cout << "����Ϊ��" << p.getAge() << endl;
//
//	p.setLover("����");
//
//
//	system("pause");
//	return 0;
//}


//��ϰ���У�����������ࣨCube�� 
//1.������������
//2.�������
//3.�����Ϊ ��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//
//class Cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ���������
//	int calculateS()
//	{
//		return 2 * m_L*m_W + 2*m_W*m_H + 2 * m_L*m_H;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L*m_W*m_H;
//	}
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
//
////����ȫ�ֺ����ж� �����������Ƿ����
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
//	//����һ�����������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	//�����ڶ���������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(100);
//	c2.setH(10);
//
//	//����ȫ�ֺ����ж�
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "ȫ�ֺ����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "ȫ�ֺ����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	//���ó�Ա�����ж�
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//} 


//��ϰ����2�����Բ�Ĺ�ϵ

////����
//class Point
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//�뾶
//
//	//�����п�������һ���� ��Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};
//
////�жϵ��Բ��ϵ
//void isInCircle(Circle&c, Point &p)
//{
//	//��������֮������ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	
//	//����뾶��ƽ��
//	int rDistance = c.getR()*c.getR();
//	
//	//�жϹ�ϵ
//	if (distance == rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//����Բ
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//�жϹ�ϵ
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}


