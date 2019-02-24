#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

//Написать функцию, которая получает матрицу и номер столбца и меняет знак 
//элементов этого столбца на противоположный.Использовать 
//функцию для преобразования некоторой действительной матрицы размером 4х5.



void FillArray(char A[][5], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			A[i][j] = '+';

		}

	}
}

void PrintArray(char A[][5], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";

		}
		cout << endl;
	}
}

void Change(char A[][5], int x, int n, int m)
{
	if (x < 0 || x >= m)
	{
		return;
	}
	if (n == 0)
	{
		return;
	}
	Change(A, x, n - 1, m);
	A[n - 1][x] = '-';
}


void Figure1(int n, char ch = '*', int type = 0)
{
	cout << "Type? 1 - Filled 0 - Not Filled";
	cin >> type;

	if (type == 0)
	{


	int x = 1;

	for (size_t i = 0; i < n; i++)

	{

		for (size_t j = 0; j < n; j++)

		{

			if (i == n - 1 || j == 0 || i == j)

			{

				cout << ch;

			}

			else cout << " ";

		}

		cout << endl;

	}

}




	else
	{ 


	for (size_t i = 0; i < n; i++)

	{

		for (size_t j = 0; j < n; j++)

		{

			if (i >= j)

			{

				cout << ch;

			}

			else cout << " ";

		}

		cout << endl;

	}
	}




}

void Figure2(int n, char ch = '*', int type = 0)
{
	cout << "Type? 1 - Filled 0 - Not Filled";
	cin >> type;

	if (type == 0)
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == 0 || i == 0 || i == n-1-j)
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}

	else
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == 0 || i == 0 || i == n - 1 - j || n > i+j+1)
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}
}

void Figure3(int n, char ch = '*', int type = 0)
{
	cout << "Type? 1 - Filled 0 - Not Filled";
	cin >> type;

	if (type == 0)
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == n-1 || i == n-1 || i == n - 1 - j)
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}

	else
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == n-1 || i == n-1 || i == n - 1 - j || n <= i+j )
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}
}

void Figure4(int n, char ch = '*', int type = 0)
{
	cout << "Type? 1 - Filled 0 - Not Filled";
	cin >> type;

	if (type == 0)
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == n - 1 || i == 0 || i == j)
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}

	else
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j == n - 1 || i == 0 || i <= j )
				{
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}
}

void WhatFigure(int n, char ch = '*', int type = 0)
{
	int Number;
	cout << "Тип фигуры? от 1 до 4(Извините, смог сделать только 4 типа)" << endl;
	cin >> Number;

	switch (Number)
	{
	case 1:Figure1(n, '*', type);
	case 2:Figure1(n, '*', type);
	case 3:Figure1(n, '*', type);
	case 4:Figure1(n, '*', type);
	}

}




int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 4, m = 5;
	char a[n][m];
	int x, y;
	int flag, task;
	int p, o;
	do
	{
		cout << "Task Number";
		cin >> task;

		switch (task)
		{
		case 1:
			cin >> x;
			FillArray(a, n, m);
			PrintArray(a, n, m);
			cout << endl;
			Change(a, x, n, m);
			PrintArray(a, n, m);

			break;
		case 2:

			cout << "Размер" << endl;
			cin >> y;

			WhatFigure(y, '*');

			break;
		}

		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

}
