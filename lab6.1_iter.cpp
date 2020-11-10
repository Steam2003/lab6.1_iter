#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
void iter(int* mas, int* mas2)
{
	int j = 0;
	int sum = 0;
	int Low = -24;
	int Max = 32;
	{
		for (int i = 0; i <= 19; ++i)
		{
			mas[i] = Low + rand() % (Max - Low + 1);
			if (mas[i] < 0 && mas[i] % 2 == 0)
			{
				mas2[i] = 0;
				sum += mas[i];
				++j;
			}
			else
				mas2[i] = mas[i];
			cout << setw(3) << mas[i] << " ";
		}
		cout << endl;
		cout << "________________________________________________________________________________" << endl;
		cout << "Сумма тих, які є парні та від'ємні: " << sum << endl;
		cout << "Кількість тих, які є парні та від'ємні: " << j << endl;
		cout << "________________________________________________________________________________" << endl;

	}
}
void print(int* mas2)
{
	for (int i = 0; i <= 19; ++i)
		cout << setw(3) << mas2[i] << " ";
}
int unittest(int a[], int i, int sum)
{
	for (i; i <= 9; ++i)
	{
		if (a[i] < 0 && a[i] % 2 == 0)
			sum += a[i];
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int mas[20];
	cout << "Ітераційний" << endl;
	int* mas2 = new int[20];
	iter(mas, mas2);
	print(mas2);
	delete[] mas2;
	int a[10] = { -5,6,10,-14,0,13,16,-10,20,32 };
	cout << endl;
	cout << "Unit test result: " << unittest(a, 0, 0) << endl;
	cout << "________________________________________________________________________________" << endl;
	
}

