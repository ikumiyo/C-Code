#include <iostream>
using namespace std;
class Array_max_min
{
public:
	void set_value();
	void get_value();
	void show_value();
private:
	int array[10];
	int max;
	int min;
};
void Array_max_min::set_value()
{
	for (int i = 0; i<10; i++)
		cin >> array[i];
}
void Array_max_min::get_value()
{
	int i;
	min=max = array[0];
	
	for (i = 1; i < 10; i++)
	{
		if (array[i]>max) 
			max = array[i];
	}
	for (i = 1; i < 10; i++)
	{
		if (array[i]<min)
			min = array[i];
	}
	
}
void Array_max_min::show_value()
{
	cout << "数组的最大值为：" << max << endl;
	cout << "数组的最小值为：" << min << endl;

}

int main()
{
	Array_max_min arr;
	arr.set_value();
	arr.get_value();
	arr.show_value();

	system("pause");
	return 0;
}

//int main()
//{
//	int count = 0;
//	for (int i = 1; i<2020; i++)
//	{
//		if (i == 9 || (i % 10 == 9) || ((i / 10) % 10 == 9) || ((i / 100) % 10 == 9))
//		{
//			count++;
//		}
//	}
//	cout << count;
//	system("pause");
//}