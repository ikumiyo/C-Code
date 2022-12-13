#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>  
#define MAX 1000

//设计联系人结构体
struct Person
{
	string Name;//姓名
	int Sex;//性别
	int Age;//年龄
	string Phone;//电话
	string Addr;//住址

};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人人数
	int Size;
};


//1.添加联系人
void addPerson(Addressbooks *abs)
{
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			//如果输入的是1 或者2可以退出循环，因为输入的是正确的
			//如果输入有误，则重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->Size].Age = age;

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->Size].Phone = phone; 

		//地址
		cout << "请输入地址：" << endl;
		string address;
		cin>>address;
		abs->personArray[abs->Size].Addr = address;

		//更新通讯录人数
		abs->Size++;

		cout << "添加成功" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏


	}
}

//2.显示所有联系人
void showPerson(Addressbooks*abs)
{
	//判断通讯录中人数是否为0；如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].Name << "\t";
			cout << "性别：" << (abs->personArray[i].Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].Age << "\t";
			cout << "电话：" << abs->personArray[i].Phone << "\t";
			cout << "住址：" << abs->personArray[i].Addr<< endl;

		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1；
//参数1  通讯录  参数2  对比姓名
int isExist(Addressbooks*abs, string name)
{
	for (int i = 0; i < abs->Size; i++)
	{
		//找到用户输入的姓名了
		if (abs->personArray[i].Name == name)
		{
			return i;
		}
	}
	return -1;//如果遍历结束都没有找到，返回-1
}


//3.删除指定联系人
void deletePerson(Addressbooks*abs)
{
	cout << "请输入你要删除的联系人" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//查到到人，要进行删除操作
		for (int i = 0; i < abs->Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->Size--;//更新通讯录中的人数
		cout << "删除成功" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}
}


//4.查找指定联系人信息
void findPerson(Addressbooks*abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1)//找到联系人
	{
		cout << "姓名：" << abs->personArray[ret].Name << "\t";
		cout << "性别：" << abs->personArray[ret].Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].Age << "\t";
		cout << "电话：" << abs->personArray[ret].Phone << "\t";
		cout << "住址：" << abs->personArray[ret].Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}


//5,修改指定联系人信息
void modifyPerson(Addressbooks*abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)//找到指定联系人
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].Name = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].Sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].Age = age;

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].Phone = phone;

		//地址
		cout << "请输入家庭地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].Addr = address;

		cout << "修改成功！"<<endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	//按任意键后清屏
	system("pause");
	system("cls");

}


//6.清空所有联系人
void cleanPerson(Addressbooks*abs)
{
	abs->Size = 0;//将当前记录联系人数量置为0，做逻辑清空操作
	cout << "通讯录已清空" << endl;
	//按任意键后清屏
	system("pause");
	system("cls");
}

//菜单界面
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员的个数
	abs.Size = 0;

	int select = 0;//创建用户选择输入的变量
	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //1.添加联系人
			addPerson(&abs);//利用地址传递
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
		/*{
			cout << "请输入删除联系人的姓名：" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
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