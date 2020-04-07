#include <iostream>
#include <math.h>
int main()
{
	//Задание 1. Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки.
	//Количество строк Н вводит пользователь (можно из файла).
	int Zadanie1;
	std::cin >> Zadanie1;
	for(int i=1; i < Zadanie1+1; i++){
       for(int j=0; j < i; j++)
           std::cout << 0;
       std::cout << std::endl;
    }
	//Задание 2i. Протабулировать функцию (шаг и диапазон задаёт пользователь):
	float dx, xs, xf;
    const float eps = 0.000001;  // всё, что меньше этого числа считаем нулём

    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    // заголовок таблицы
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    float f;
    float x = xs;  // начинаем считать с левого края интервала
    while (x < xf){
       if(fabs(x - 2) < eps)
           std::cout << "\t"
                     << x
                     << "\t\t Divide on zero"
                     << std::endl;
       else {
		   f = -x*(3+2*x)*(3+2*x)+3*x+sin(2*x);

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;
       }
       x += dx;
    }

	//Задание 2o. Протабулировать функцию (шаг и диапазон задаёт пользователь):
    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    // заголовок таблицы
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    x = xs;  // начинаем считать с левого края интервала
    while (x < xf){
       if(fabs(x - 2) < eps)
           std::cout << "\t"
                     << x
                     << "\t\t Divide on zero"
                     << std::endl;
       else {
		   f = sqrt(15+4/x)+13*x+sin(3*x+13);

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;
       }
       x += dx;
    }
	//Задание 4i. Дана функция y=f(x). Найти значение функции по x:
	std::cout << "X";
	std::cin>> x;
	if (x>7) { std::cout<<"y = " << 2*(x*x)-3 << std::endl; }
	else {std::cout<< "X !< 7" << std::endl;}
	std::cout<<"y = " << 0 << std::endl;
	std::cout << "X";
	std::cin>> x;
	if (x<7) { std::cout<<"y = " << 2*abs(x)+3 << std::endl; }
	else {std::cout<< "X !> 7" << std::endl;}

	//Задание 5. Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. 
	//Например, если Н 10, М 35, Ш 5, то вывод должен быть таким: 10 15 20 25 30 35. 
	//Значения Н, М, Ш указываются пользователем (считываются с клавиатуры).
	int xmin,xmax,shag;
	std::cout << "xmin, xmax, shag " << std::endl;
	std::cin >> xmin >> xmax >> shag;
	while (xmin<xmax) {
		std::cout << xmin << " ";
		xmin+=shag;
	}
	std::cout << std::endl;
	//Задание 3i. Пользователь задаёт число Ч и Х. Посчитать y:
	int chislo, kolichestvo;
	kolichestvo = 0;
	std::cout << "chislo,shag ";
	std::cin >> chislo >> kolichestvo; //Число
	chislo+1;
	for (int i=0;i<kolichestvo;i++)
	{
	chislo += -pow(chislo,kolichestvo)/kolichestvo;
	}
	std::cout<<"y = " << chislo << std::endl;

	//Задание 3с.
	kolichestvo = 0;
	std::cout << "chislo,shag ";
	std::cin >> chislo >> kolichestvo; //Число
	for (int i=0;i<kolichestvo;i++)
	{
	chislo += 1/chislo*kolichestvo;
	}
	std::cout<<"y = " << chislo << std::endl;

	std::getchar();
	std::getchar();
	return 0;
}

