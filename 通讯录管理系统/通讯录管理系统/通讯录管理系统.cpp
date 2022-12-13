#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>  
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	string Name;//����
	int Sex;//�Ա�
	int Age;//����
	string Phone;//�绰
	string Addr;//סַ

};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ������
	int Size;
};


//1.�����ϵ��
void addPerson(Addressbooks *abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			//����������1 ����2�����˳�ѭ������Ϊ���������ȷ��
			//���������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->Size].Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->Size].Phone = phone; 

		//��ַ
		cout << "�������ַ��" << endl;
		string address;
		cin>>address;
		abs->personArray[abs->Size].Addr = address;

		//����ͨѶ¼����
		abs->Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");//�밴���������
		system("cls");//����


	}
}

//2.��ʾ������ϵ��
void showPerson(Addressbooks*abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->Size; i++)
		{
			cout << "������" << abs->personArray[i].Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].Age << "\t";
			cout << "�绰��" << abs->personArray[i].Phone << "\t";
			cout << "סַ��" << abs->personArray[i].Addr<< endl;

		}
	}
	system("pause");//�����������
	system("cls");//����
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1��
//����1  ͨѶ¼  ����2  �Ա�����
int isExist(Addressbooks*abs, string name)
{
	for (int i = 0; i < abs->Size; i++)
	{
		//�ҵ��û������������
		if (abs->personArray[i].Name == name)
		{
			return i;
		}
	}
	return -1;//�������������û���ҵ�������-1
}


//3.ɾ��ָ����ϵ��
void deletePerson(Addressbooks*abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//�鵽���ˣ�Ҫ����ɾ������
		for (int i = 0; i < abs->Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->Size--;//����ͨѶ¼�е�����
		cout << "ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
}


//4.����ָ����ϵ����Ϣ
void findPerson(Addressbooks*abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].Age << "\t";
		cout << "�绰��" << abs->personArray[ret].Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


//5,�޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks*abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ�ָ����ϵ��
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].Sex = sex;
				break;
			}
			cout << "��������,����������" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].Phone = phone;

		//��ַ
		cout << "�������ͥ��ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].Addr = address;

		cout << "�޸ĳɹ���"<<endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	//�������������
	system("pause");
	system("cls");

}


//6.���������ϵ��
void cleanPerson(Addressbooks*abs)
{
	abs->Size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼�����" << endl;
	//�������������
	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա�ĸ���
	abs.Size = 0;

	int select = 0;//�����û�ѡ������ı���
	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //1.�����ϵ��
			addPerson(&abs);//���õ�ַ����
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
		/*{
			cout << "������ɾ����ϵ�˵�������" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;

		}
	}

	system("pause");
	return 0;
}