#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
const int string_len = 3;

std::string arrcolor[10] = {"Black","Yellow", "Red", "White", "Green", "Pink", "Blue", "Purple", "Gray"};
std::string arrfuel[7] = {"Petrol", "Metan", "Holy_Power", "Water", "Cheese", "Wood", "Slaves"};

struct Engine
{
	string name;
	string fuel;
	
};

struct Car
{
	string name;
	string color;
	int wheel;
	Engine engine;
};

void randString(string &str, const int len){
	static const char alphabet[] =
        	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for(int i=0; i < str.length(); i++){
    	int r = rand() % (sizeof(alphabet)-1);
    	str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void showCar(const Car c){
    cout << c.name << "\t"
		 << c.color << "\t"
         << c.wheel << "\t"
		 << c.engine.name << "\t"
		 << c.engine.fuel << endl;
		
}

void showCharacteristick(const Car car[], const int len){
	cout << "name \t"
     	<< "color \t"
     	<< "wheel\t"
     	<< "engine.name "
     	<< "engine.fuel" << endl;

	for(int i=0; i<len; i++){
    	showCar(car[i]);
	}

	cout << endl;
}


void initCar(Car car[], const int len){
	for(int i=0; i<len; i++){
    	// Car
		randString(car[i].name, string_len);
    	car[i].color = arrcolor[rand() % 9];
    	car[i].wheel = 2*(rand() % 50);

    	// Engine
    	randString(car[i].engine.name, string_len);
		car[i].engine.fuel = arrfuel[rand() % 6];
	}
}

void writeTextFile(const Car car[], const int l){
	ofstream f;

	f.open("Week_9.txt");
	for(int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
    	  f << car[i].name<< " "
		    << car[i].color << "  "
      		<< car[i].wheel << "  "
			<< car[i].engine.name << "  "
			<< car[i].engine.fuel << endl;
	f.close();
}

void openTextFile(Car car[], const int l){
	ifstream f;

	f.open("Week_9.txt");
	for(int i = 0; i < l; i++)
    	f   >> car[i].name
		    >> car[i].color 
      		>> car[i].wheel 
			>> car[i].engine.name
			>> car[i].engine.fuel; 
	f.close();
}

int main()
{
	//Задание 1+
	//Объявить сущности 1 и 2. Описать их свойства. Включить одну сущность в другую. Объявить массив сущностей 1. +
	//Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно). +
	//компьютер, жёсткий диск +
	//Задание 2 +
	//Реализовать чтение и запись данных в текстовый файл +

	const int len = 20;
	const int Showmassive = 5;
	Car arrCar[len];

	cout << "First massive Car:\n";
	initCar(arrCar, len);
	writeTextFile(arrCar, len);
	showCharacteristick(arrCar, Showmassive);

	cout << "New massive Car:\n";
	initCar(arrCar, len);
	showCharacteristick(arrCar, Showmassive);

	cout << "Read massive Car:\n";
	openTextFile(arrCar, len);
	showCharacteristick(arrCar, Showmassive);
	

	std::getchar();
	std::getchar();
	return 0;
}


