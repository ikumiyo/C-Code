#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//Բ����
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*PI*�뾶


class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI*m_r;
	}
};

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class Student
{
public://����Ȩ��

	//����
	string Name;
	string Id;
	//��Ϊ
	//��ʾ������ѧ�ŵĺ���
	void showStudent()
	{
		cout << "������ "<< Name   << "  ѧ��:  " << Id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(string id)
	{
		Id = id;
	}
};

int main()
{
	//ͨ��Բ�� ���������Բ ������
	//Circle c1;
	//��Բ���� �����Խ��и�ֵ
//	c1.m_r = 10;

	//����һ������ѧ�� ʵ��������
	Student s1;
	//��s1���� �������Ը�ֵ����
	//s1.name = "����";
	s1.setName("����");
//	s1.Id = "1234567";
	s1.setId("1234567");
	s1.showStudent();

	//cout << "Բ���ܳ���" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}