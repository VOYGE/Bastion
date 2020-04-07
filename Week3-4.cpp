#include <iostream>
#include <math.h>
int main()
{
	//������� 1. ������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������ ����� ������ ������.
	//���������� ����� � ������ ������������ (����� �� �����).
	int Zadanie1;
	std::cin >> Zadanie1;
	for(int i=1; i < Zadanie1+1; i++){
       for(int j=0; j < i; j++)
           std::cout << 0;
       std::cout << std::endl;
    }
	//������� 2i. ��������������� ������� (��� � �������� ����� ������������):
	float dx, xs, xf;
    const float eps = 0.000001;  // ��, ��� ������ ����� ����� ������� ����

    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    // ��������� �������
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    float f;
    float x = xs;  // �������� ������� � ������ ���� ���������
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

	//������� 2o. ��������������� ������� (��� � �������� ����� ������������):
    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    // ��������� �������
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    x = xs;  // �������� ������� � ������ ���� ���������
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
	//������� 4i. ���� ������� y=f(x). ����� �������� ������� �� x:
	std::cout << "X";
	std::cin>> x;
	if (x>7) { std::cout<<"y = " << 2*(x*x)-3 << std::endl; }
	else {std::cout<< "X !< 7" << std::endl;}
	std::cout<<"y = " << 0 << std::endl;
	std::cout << "X";
	std::cin>> x;
	if (x<7) { std::cout<<"y = " << 2*abs(x)+3 << std::endl; }
	else {std::cout<< "X !> 7" << std::endl;}

	//������� 5. ������� �� ����� ��� ����������� ����� �� � �� � � ����� �. 
	//��������, ���� � 10, � 35, � 5, �� ����� ������ ���� �����: 10 15 20 25 30 35. 
	//�������� �, �, � ����������� ������������� (����������� � ����������).
	int xmin,xmax,shag;
	std::cout << "xmin, xmax, shag " << std::endl;
	std::cin >> xmin >> xmax >> shag;
	while (xmin<xmax) {
		std::cout << xmin << " ";
		xmin+=shag;
	}
	std::cout << std::endl;
	//������� 3i. ������������ ����� ����� � � �. ��������� y:
	int chislo, kolichestvo;
	kolichestvo = 0;
	std::cout << "chislo,shag ";
	std::cin >> chislo >> kolichestvo; //�����
	chislo+1;
	for (int i=0;i<kolichestvo;i++)
	{
	chislo += -pow(chislo,kolichestvo)/kolichestvo;
	}
	std::cout<<"y = " << chislo << std::endl;

	//������� 3�.
	kolichestvo = 0;
	std::cout << "chislo,shag ";
	std::cin >> chislo >> kolichestvo; //�����
	for (int i=0;i<kolichestvo;i++)
	{
	chislo += 1/chislo*kolichestvo;
	}
	std::cout<<"y = " << chislo << std::endl;

	std::getchar();
	std::getchar();
	return 0;
}

