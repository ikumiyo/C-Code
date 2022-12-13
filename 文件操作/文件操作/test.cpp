#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//�ı��ļ� д�ļ�
//void test01()
//{
//
//	//1������ͷ�ļ� fstream
//
//	//2������������
//	ofstream ofs;
//
//	//3��ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4��д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//
//	//5���ر��ļ�
//	ofs.close();
//}

////�ı��ļ� ���ļ�
//void test01()
//{
//	//1. ����ͷ�ļ�
//
//	//2. ����������
//	ifstream ifs;
//
//	//3. ���ļ� ���ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4. ������
//
//	//��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//
//	}*/
//
//	//������
//	/*string buf;
//
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������
//	char c;
//	while ((c=ifs.get())!=EOF)
//	{
//		cout << c;
//	}
//
//	//5. �ر��ļ�
//	ifs.close();
//
//}

//�������ļ� д�ļ�
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
////�������ļ�  д�ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2���������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "����", 18 };
//
//	//4��д�ļ�
//	ofs.write((const char *)&p, sizeof(p));
//
//	//5���ر��ļ�
//	ofs.close();
//}

//�����ƶ��ļ�
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
		cout << "�ļ���ʧ��" << endl;
	}

	Person p;
	ifs.read((char *)&p, sizeof(p));

	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}

int main()
{
	test01();
	return 0;
}