#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<ctime>

int main()
{
	////选择结构 单行if语句
	////分数大于600视为考上一本大学，在屏幕上输出

	////1，用户输入分数
	//int score = 0;
	//cout << "请输入一个分数：" << endl;
	//cin >> score;

	////2.打印用户输入的分数
	//cout << "您输入的分数为:" << score << endl;

	////3.判断分数是否大于600，如果大于，则输出
	//if (score > 600)
	//{
	//	cout << "恭喜您考上一本大学!!!" << endl;
	//}

	//选择结构 - 多行if语句
	//输入考试成绩，如果成绩大于600，视为考上一本大学，在屏幕上输出
	//如果没考上，打印未考上一本大学
	
	//1.输入考试分数
	//int score = 0;
	//cout << "请输入一个考试分数：" << endl;
	//cin >> score;
	////2.提示用户输入的分数
	//cout << "您输入的分数为：" << score << endl;
	////3.判断 
	//if (score > 600)
	//{
	//	cout << "恭喜 考上一本大学！！！！" << endl;
	//}
	//else
	//{
	//	cout << "未考生一本大学" << endl;
	//}

	//选择结构 多条件if语句
	//输入一个考试分数，如果大于600分，输出一本大学
	//大于500分，二本大学
	//大于400分，三本大学
	//小于等于400分，未考上本科

	//1. 输入
	//int score = 0;
	//cout << "请输入考试分数：" << endl;
	//cin >> score;
	////2.提示用户输入的分数
	//cout << "您输入的考试分数为：" << score << endl;
	////3.判断
	//if (score > 600)
	//{
	//	cout << "恭喜您考上一本大学" << endl;
	//}
	//else if (score > 500)
	//{
	//	cout << "恭喜您考上二本大学" << endl;
	//}
	//else if (score > 400)
	//{
	//	cout << "恭喜您考上三本大学" << endl;
	//}
	//else
	//{
	//	cout << "未考上本科大学，请再接再厉" << endl;
	//}

	//* 提示用户输入一个高考考试分数，根据分数做如下判断
	//* 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
	//* 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。

	//1.提示输入高考分数
	//int score = 0;
	//cout << "请输入高考分数：" << endl;
	//cin >> score;
	////2.显示高考分数
	//cout << "您的高考分数是：" << score << endl;
	////3.判断
	//if (score > 600)
	//{
	//	cout << "恭喜您考上一本大学" << endl;
	//	if (score > 700)
	//	{
	//		cout << "您能考入北京大学" << endl;
	//	}
	//	else if (score > 650)
	//	{
	//		cout << "您能考入清华大学" << endl;
	//	}
	//	else
	//	{
	//		cout << "您能考入中国人民大学" << endl;
	//	}
	//}
	//else if (score > 500)
	//{
	//	cout << "恭喜您考入二本大学" << endl;
	//}
	//else if (score > 400)
	//{
	//	cout << "恭喜您考入三本大学" << endl;
	//}
	//else
	//{
	//	cout << "未考上本科大学，很遗憾！" << endl;
	//}

	//选择结构案例 三只小猪称体重，判断哪只最重

	////1.创建三只小猪的体重变量
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	////2.让用户输入三只小猪的重量
	//cout << "请输入小猪A的体重：" << endl;
	//cin >> num1;

	//cout << "请输入小猪B的体重：" << endl;
	//cin >> num2;

	//cout << "请输入小猪C的体重：" << endl;
	//cin >> num3;

	//cout << "小猪A的体重为：" << num1 << endl;
	//cout << "小猪B的体重为：" << num2 << endl;
	//cout << "小猪C的体重为：" << num3 << endl;

	////3.判断哪只最重
	//if (num1 > num2)   //A比B重
	//{
	//	if (num1 > num3)  //A比C重
	//	{
	//		cout << "小猪A最重" << endl;
	//	}
	//	else  //C比A重
	//	{
	//		cout << "小猪C最重" << endl;
	//	}

	//}
	//else
	//{
	//	if (num2 > num3) //B比C重
	//	{
	//		cout << "小猪B最重" << endl;
	//	}
	//	else
	//	{
	//		cout << "小猪C最重" << endl;
	//	}
	//}

	//三目运算符 （同C语言）

	//switch语句
	//给电影打分
	//10~9分 经典
	//8~7分 非常好
	//6~5分 一般
	//5分以下 烂片

	//1.提示用户给电影评分
	//cout << "请给电影进行评分：" << endl;
	////2.用户开始进行评分
	//int score = 0;
	//cin >> score;
	//cout << "您输入的分数是：" << score<<endl;
	////3.根据用户输入的分数来提示用户最后的结果

	//switch(score)
	//{
	//case 10:
	//case 9:
	//	cout << "经典电影" << endl;
	//	break;
	//case 8:
	//case 7:
	//	cout << "非常好" << endl;
	//	break;
	//case 6:
	//case 5:
	//	cout << "一般" << endl;
	//	break;
	//default:
	//	cout << "烂片" << endl;
	//	break;
	//}
	//if和switch区别？
	//switch 缺点：判断时候只能是整形或者是字符型，不可以是一个区间
	//switch 优点：结构清晰，执行效率高
	

	//while 循环
	//打印0~9
	//int num = 0;

	//while (num < 10)
	//{
	//	cout << num << endl;
	//	num++;
	//}

	////循环练习案列 猜数字

	////添加随机数种子 作用：利用当前系统时间生成随机数 防止 每次随机数都一样
	//srand((unsigned int)time(NULL));
	////1.系统生成随机数
	//int num = rand() % 100 + 1;//生成0~99+1 的随机数

	////2.玩家进行猜测
	//int val = 0;//玩家输入的数据
	//while (1)
	//{
	//	cin >> val;

	//	//3.判断玩家的猜测

	//	//猜错 提示猜的结果 过大或者过小 重新返回第2步
	//	if (val > num)
	//	{
	//		cout << "猜测过大" << endl;
	//	}
	//	else if (val < num)
	//	{
	//		cout << "猜测过小" << endl;
	//	}
	//	else
	//	{
	//		cout << "猜对了" << endl;
	//		//猜对 退出游戏
	//		break; // 退出当前循环
	//	}

	//}
	

	//练习案列 水仙花数
	//int num = 100;
	//do
	//{
	//	//2.从所有三位数字中找到水仙花数
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;

	//	a = num % 10;//获取数字的个位
	//	b = num / 10 % 10;//获取数字的十位
	//	c = num / 100;//获取数字的百位

	//	if (a*a*a + b*b*b + c*c*c == num)
	//	{
	//		cout << num << endl;
	//	}
	//	num++;
	//} while (num < 1000);

	////敲桌子案列
	////1.先输出1~100数字
	//for (int i = 1; i <= 100; i++)
	//{
	//	//2.从这100个数字中找到特殊数字，打印“敲桌子”
	//	//如果是 7的倍数，个位数有7、或者十位上有7，打印敲桌子
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
	//	{
	//		cout << "敲桌子" << endl;
	//	}
	//	else//如果不是特殊数字，才打印该数字
	//	{
	//		cout << i << endl;
	//	}
	//}
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j*i << "  ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}