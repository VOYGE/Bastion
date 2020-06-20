#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include "windows.h"
using namespace std;
//В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали. +

//Дана матрица. Составить массив, каждый элемент которого равен максимальному элементу соответствующей строки матрица. +

//Дана матрица.Элементы первой строки — количество осадков в соответствующий день, 
//второй строки — сила ветра в этот день.Найти, был ли в эти дни ураган ? (ураган — когда самый сильный ветер был в самый дождливый день).

//Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую следующие сущности.
//Предложите свой вариант.
//Двумерное изображение.Изображение состоит из пикселей.Каждый пиксель характеризуется яркостью цветовых каналов : красный, синий, зелёный.



//i-строки(Горизонт) j-столбцы
int i, j, N, M, matrix[10][10];
int Zad1 = 0; 
int massiv[10];
int maxRain = -10;
int maxWind = -10;
int DrawavalibleMatrix[10][10];
void NewMatrix()
{
//цикл по переменной i, в которой перебираем строки матрицы
	for (i = 0; i < 10; i++)
	{
		//цикл по переменной j, в котором перебираем элементы внутри строки
		for (j = 0; j < 10; j++)
		{
			matrix[i][j] = (rand() % 20 -10);
			cout << matrix[i][j] << "; ";
		}
		cout <<"||" << endl;
	}
}

void SummaMinusov() 
{
	for (i = 0; i < 5; i++)
	{
		//цикл по переменной j, в котором перебираем элементы внутри строки
		if (matrix[i][i] <= 0)
		{
			//cout << matrix[i][i] << " ;";
			Zad1 += matrix[i][i];
		}
	}
}

void MaxElement()
{
	for (i = 0; i < 10; i++)
	{
		//цикл по переменной j, в котором перебираем элементы внутри строки
		int maxelement = -10;
		for (j = 0; j < 10; j++)
		{
			if (matrix[i][j] >= maxelement)
			{
				maxelement = matrix[i][j];
				massiv[i] = matrix[i][j];
			}
		}
		cout << massiv[i] << "; ";
	}
}

void Uragan()
{
	int MaxRainIndex = 0;
	int MaxWindIndex = 0;
	for (j = 0; j < 10; j++)
	{
		if (matrix[0][j] >= maxRain)
		{
			maxRain = matrix[0][j];
			MaxRainIndex = j;
		}
	}
	for (j = 0; j < 10; j++)
	{
		if (matrix[1][j] >= maxWind)
		{
			maxWind = matrix[1][j];
			MaxWindIndex = j;
		}
	}
	if (MaxRainIndex == MaxWindIndex)
	{
		cout << "Ураган  произошел в день " << MaxRainIndex;
	}
	else 
	{
		cout << "Урагана не было, сворачиваемся " ;
	}
}

void NewDrawavalibleMatrix(int R,int  G,int B)
{
	HWND myconsole = GetConsoleWindow();
	//Get a handle to device context
	HDC mydc = GetDC(myconsole);
	int xpos = 0,
		yzdvig = 0,
		ypos = 0;

	for (xpos = 0; xpos < 255; xpos++)
	{
		R--;
		for (ypos = 100; ypos < 255+100; ypos++)
		{
			COLORREF COLOR = RGB(R, G, B);
			SetPixel(mydc, xpos, ypos, COLOR);
			B++;
		}
		G++;
		B++;
	}

	ReleaseDC(myconsole, mydc);
	cin.ignore();
}

int main()
{
	int R = 0,
		G = 0,
		B = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(static_cast<unsigned int>(time(0)));

	NewMatrix();
	cout << endl;
	SummaMinusov();
	cout << endl;
	cout << Zad1 << endl;
	MaxElement();
	cout << endl;
	Uragan();
	cout << endl << endl << endl << endl;
	cout << "Вас приветсвует программа создания градиента" << endl;
	cout << "Ввидите цвета по очереди Крсаный Зеленый Синий(Ввести значение от 0 до 255)" << endl;
	cin >> R;
	cin >> G;
	cin >> B;
	cout << "Прокрутите консоль так, что бы это сообщение было верхней строчкой" << endl;
	system("pause");
	NewDrawavalibleMatrix(R,G,B);


			
	std::getchar();
	std::getchar();  
	return 0;
}