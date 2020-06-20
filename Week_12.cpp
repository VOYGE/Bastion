#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include "windows.h"
using namespace std;
//Реализовать сложение, вычитание, умножение, транспонирование матриц (разрешается фиксированный размер матриц).

//Реализовать вычисление матричных норм из списка выше (можно для квадратных матриц).



//i-строки(Горизонт) j-столбцы
int i, j, N, M, matrix1[10][10], matrix2[10][10], matrixRezult[10][10];

void NewMatrix()
{
	//цикл по переменной i, в которой перебираем строки матрицы
	for (i = 0; i < 10; i++)
	{
		//цикл по переменной j, в котором перебираем элементы внутри строки
		for (j = 0; j < 10; j++)
		{
			matrix1[i][j] = (rand() % 10);
			matrix2[i][j] = (rand() % 10);
		}
	}
}


void Slojene()
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matrixRezult[i][j] = matrix1[i][j]+matrix2[i][j];
			cout << matrixRezult[i][j] << "; ";
		}
		cout << endl;
	}
}
void Vichitanie()
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matrixRezult[i][j] = matrix1[i][j] - matrix2[i][j];
			cout << matrixRezult[i][j] << "; ";
		}
		cout << endl;
	}
}
void Umnogenie()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matrixRezult[i][j] = 0;
			for (int k = 0; k < 10; k++)
			{
				matrixRezult[i][j] += matrix1[i][k] * matrix2[k][j];
			}
			cout << matrixRezult[i][j] << "; ";
		}
		cout << endl;
	}
}
void transportirovanie()
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matrixRezult[j][i] = matrix2[i][j];
			cout << matrixRezult[j][i] << "; ";
		}
		cout << endl;
	}
}

void normaMatrix()
{
	cout << endl;
	int maxelement[10];
	int x = 0;
	for (i = 0; i < 10; i++)
	{
		x = 0;
		for (j = 0; j < 10; j++)
		{
			x+= abs(matrixRezult[i][j]);
			maxelement[i] = x;
		}
	}
	x = 0;
	for (i = 0; i < 10; i++)
	{
		if (maxelement[i] > x)
		{
			x = maxelement[i];
		}
	}
	cout << "Норма матрицы "<< x << endl;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(static_cast<unsigned int>(time(0)));
	NewMatrix();
	cout <<"Сложение"<< endl;
	Slojene();
	normaMatrix();
	cout << endl;
	cout << "Вычитание" << endl;
	Vichitanie(); 
	normaMatrix();
	cout << endl;
	cout << "Умножение" << endl;
	Umnogenie();
	normaMatrix();
	cout << endl;
	cout << "Транспортирование" << endl;
	transportirovanie();
	normaMatrix();



	



	std::getchar();
	std::getchar();
	return 0;
}