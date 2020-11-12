#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* mas);
void create2(int* mas, int* mas2);
void print(int* mas);
int sum1(int* mas);
int count1(int* mas);
int unittest(int a[], int i, int sum);

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int mas[20];
	cout << "²òåðàö³éíèé" << endl;
	int* mas2 = new int[20];
	create(mas);
	print(mas);
	cout << endl;
	create2(mas, mas2);
	print(mas2);
	cout << endl;
	cout << "Ñóììà òèõ, ÿê³ º ïàðí³ òà â³ä'ºìí³: " << sum1(mas) << endl;
	cout << "Ñóììà òèõ, ÿê³ º ïàðí³ òà â³ä'ºìí³: " << count1(mas) << endl;
	delete[] mas2;
	int a[10] = { -5,6,10,-14,0,13,16,-10,20,32 };
	cout << endl;
	cout << "Unit test result: " << unittest(a, 0, 0) << endl;
	cout << "________________________________________________________________________________" << endl;
	
}
void create(int* mas)
{
	int Low = -24;
	int Max = 32;
		for (int i = 0; i <= 19; ++i)
			mas[i] = Low + rand() % (Max - Low + 1);
}
void create2(int* mas, int* mas2)
{
	for (int i = 0; i <= 19; ++i)
	{
		if (mas[i] < 0 && mas[i] % 2 == 0)
		{
			mas2[i] = 0;
		}
		else
			mas2[i] = mas[i];
	}
}
void print(int* mas)
{
	for (int i = 0; i <= 19; ++i)
		cout << setw(3) << mas[i] << " ";
}
int sum1(int* mas)
{
	int sum = 0;
	for (int i = 0; i<=19;++i)
	{
		if(mas[i] < 0 && mas[i] % 2 == 0)
		sum += mas[i];
	}
	return sum;
}
int count1(int* mas)
{
	int j = 0;
	for (int i = 0; i <= 19; ++i)
	{
		if (mas[i] < 0 && mas[i] % 2 == 0)
			++j;
	}
	return j;
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

