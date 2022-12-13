#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"MyArray.hpp"
#include<string>

void printIntArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i]<< endl;
	}
}
void test01()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;

	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

}

//�����Զ�����������
class Person
{
public:
	Person(){};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person>arr(10);
	Person p1("�����",500);
	Person p2("ţħ��",100);
	Person p3("�캢��",14);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);

	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	//�����С
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;

}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;

}