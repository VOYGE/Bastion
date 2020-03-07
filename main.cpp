#include <iostream>

int main()
{
	int num1;
	int num2;
	int num3;
	std::cout << "Zadaniye 1" << std::endl << std::endl;
//1 Задание
   std::cout << "       " << std::endl
             << "   *   " << std::endl
             << "  * *  " << std::endl
             << " *   * " << std::endl
             << "*******" << std::endl
             << "*     *" << std::endl
             << "*     *" << std::endl << std::endl;
   std::cout << "Zadaniye 2i" << std::endl << std::endl;

   std::cout << "Storona: ";
   std::cin >>  num1;

   std::cout << "Ploshad: " << (2+2*sqrt(2))*num1*num1 << std::endl;
   std::cout << "Peremiter: " << num1 * 8 << std::endl<< std::endl;

   

   std::cout << "Zadaniye 7" << std::endl << std::endl;
   
   std::cout << "1 Chislo: ";
   std::cin >>  num1;
   std::cout << std::endl;
   std::cout << "KVADRAT: " << num1*num1 << std::endl<< std::endl;
   std::cout << "KUB: " << num1*num1*num1 << std::endl<< std::endl;

   std::cout << "Zadaniye 8C" << std::endl << std::endl;
   std::cout << "a: " << (1.7+1)*(1.7+1)+3*(1.7+1) << std::endl;
   std::cout << "b: " << (3+1)*(3+1)+3*(3+1) << std::endl << std::endl;
   
   std::cout << "Zadaniye 9I" << std::endl << std::endl;

   std::cout << "Velichina v secundah: ";
   std::cin >>  num2;
   std::cout << "1-Nedela,2-Chas,3-Sutki: ";
   std::cin >>  num1;
   std::cout << std::endl;
   if(num1 == 1) {std::cout << "Iscomaya Velichina: " << num2/2604800 << std::endl<< std::endl;}
   if(num1 == 2) {std::cout << "Iscomaya Velichina: " << num2/60 << std::endl<< std::endl;}
   if(num1 == 3) {std::cout << "Iscomaya Velichina: " << num2/86400 << std::endl<< std::endl;}

   std::cout << "Zadaniye 12" << std::endl << std::endl;
   //Вводятся два целых числа. Проверить делится ли первое на второе. 
   //Вывести на экран сообщение об этом, а также остаток (если он есть) и частное (в любом случае).
   std::cout << "1 Chislo: ";
   std::cin >>  num1;
   std::cout << "2 Chislo: ";
   std::cin >>  num2;
   std::cout << std::endl;
   if(num1%num2 == 0) { std::cout << "Delitsya"<< std::endl; } else { std::cout << "Ne Delitsya"<< std::endl;  std::cout << "Ostatok" << num1%num2 << std::endl; }
   std::cout << std::endl;
   std::cout << "Raznost = " << num1-num2 << std::endl;

   std::getchar();
   std::getchar();
   return 0;
}

