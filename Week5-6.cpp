#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
	std::fstream file; // ������� ������ ������ ifstream
	file.open("Week5-6.txt",std::ios::out); // ��������� ����
	//file<<""<<std::endl;

	int arr[10]; //������
	int Exercise2i = 0; //����� ������ 4
	int Exercise2c = 0; //����� ������ 3
	int Exercise6max = 0; int Exercise6indexmax = 0; //������������ ���� � �������
	int Exercise6min = 10; int Exercise6indexmin = 0; //����������� ���� � �������
	int Exercise5max = 0; int Exercise5indexmax = 0; //����� ������������� �����
	int Exercise5min = 10; int Exercise5indexmin = 0;//����� ������������ �����
	int Zadannoechislo = 0; int Kollichestvo = 0; std::cin >> Zadannoechislo; // ���� ��������� ����� ��� ������� 10
	int Exercise14 = 0; //������� 14
	for(int i=0; i<10; i++)
	{
       arr[i] = rand() % 10; //������� 1. ��������� ������ ���������� ������ � ��������� �� 0 �� 10.
	   //��������� ����� ��������� �������,
	   if (arr[i] < 4) { Exercise2i +=arr[i]; }; //������� 4.
	   if (arr[i] > 3) { Exercise2c +=arr[i]; }; //������� 3.
	   //������� 6. ����� ����� ������������/������������� �� ������ ��������
	   if (abs(arr[i]) > Exercise6max) { Exercise6max = arr[i]; Exercise6indexmax=i; };
	   if (abs(arr[i]) < Exercise6min) { Exercise6min = arr[i]; Exercise6indexmin=i; };
	   //������� 5. ����� ����������/���������� ������� ������� � ��� ����� �� �������
	   if (arr[i] > Exercise5max) { Exercise5max = arr[i]; Exercise5indexmax=i; }; //���������� ������� ������� � ��� �����
	   if (arr[i] < Exercise5min) { Exercise5min = arr[i]; Exercise5indexmin=i; }; //���������� ������� ������� � ��� �����
	   //������� 10. ��������� ���������� (� ������� �� �����) ��������� �������, ������� ��������� �����
	   if (arr[i] > Zadannoechislo) { Kollichestvo++; }; 
	   //������� 12. ��������� ��� �������� �������� ������� �� 3, � ������ � 2 ����
	   if (arr[i] % 2 == 0) {arr[i]=arr[i]*2;} else {arr[i]+=3;}
	   //������� 14. ����� ���������� ������� ������� ����� ��������� � ������� ���������.
	   if (i % 2 == 0) {if (arr[i] > Exercise14) { Exercise14 = arr[i];} }

	}
	std::cout << Kollichestvo << std::endl;
	file<<"Exercise2i "<<Exercise2i<<std::endl;
	file<<"Exercise2c "<<Exercise2c<<std::endl;
	file<<"Zadanie6 "<<"Max_index "<<Exercise6indexmax<<" Min_index "<<Exercise6indexmin<<::endl;
	file<<"Zadanie5 "<<"Max "<<Exercise5max<<" index "<<Exercise5indexmax<<" Min "<<Exercise5min<<" index "<<Exercise5indexmin<<::endl;
	file<<"Zadanie10 "<<Kollichestvo<<std::endl;
	file<<"Zadanie14 "<<Exercise14<<std::endl;

	std::getchar();
	std::getchar();
	return 0;
}

