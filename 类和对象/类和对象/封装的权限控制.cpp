#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//����Ȩ�ޣ����֣�
//����Ȩ�� public       ��Ա ���ڿ��Է���  ������Է���
//����Ȩ�� protected    ��Ա ���ڿ��Է���  ���ⲻ���Է���  ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private      ��Ա ���ڿ��Է���  ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������
 
class Person
{
public:
	string Name;//����
protected:
	string Car;//����
private:
	int Password;  //���п�����

public:
	void func()
	{
		Name = "����";
		Car = "����";
		Password = 123456;
	}
};
int main()
{
	//ʵ�����������
	Person p1;

	p1.Name = "����";
	//p1.Car = "����";//����Ȩ�����ݣ���������ʲ���
	//p1.Password = 123;//˽��Ȩ�����ݣ���������ʲ���


	system("pause");
	return 0;
}