#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include "windows.h"


using namespace std;
const int string_len = 3;

std::string arrcolor[10] = { "Black","Yellow", "Red", "White", "Green", "Pink", "Blue", "Purple", "Gray" };
std::string arrfuel[7] = { "Petrol", "Metan", "Holy_Power", "Water", "Cheese", "Wood", "Slaves" };

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

void randString(string& str, const int len) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	str.clear();
	str.append(len, ' ');

	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showCar(const Car c) {
	cout << c.name << "\t"
		<< c.color << "\t"
		<< c.wheel << "\t\t"
		<< c.engine.name << "\t\t\t"
		<< c.engine.fuel << endl;

}

void showCharacteristick(const Car car[], const int len) {
	cout << "Имя \t"
		<< "Цвет \t"
		<< "Кол-во колес\t"
		<< "Назваине двигателя\t"
		<< "Топливо двигателя" << endl;

	for (int i = 0; i < len; i++) {
		showCar(car[i]);
	}

	cout << endl;
}

void initCar(Car car[], const int len) {
	for (int i = 0; i < len; i++) {
		// Car
		randString(car[i].name, string_len);
		car[i].color = arrcolor[rand() % 9];
		car[i].wheel = 2 * (rand() % 50);

		// Engine
		randString(car[i].engine.name, string_len);
		car[i].engine.fuel = arrfuel[rand() % 6];
	}
}

void writeTextFile(const Car car[], const int l) {
	ofstream f;

	f.open("Week_9.txt");
	for (int i = 0; i < l; i++)  // Âñå àòðèáóòû struct  â îäíîé ñòðîêå
		f << car[i].name << " "
		<< car[i].color << "  "
		<< car[i].wheel << "  "
		<< car[i].engine.name << "  "
		<< car[i].engine.fuel << endl;
	f.close();
}

void openTextFile(Car car[], const int l) {
	ifstream f;

	f.open("Week_9.txt");
	for (int i = 0; i < l; i++)
		f >> car[i].name
		>> car[i].color
		>> car[i].wheel
		>> car[i].engine.name
		>> car[i].engine.fuel;
	f.close();
}

void writeBinFile(Car car[], const int l) {
	// in-function WRITE code
	fstream f;
	f.open("Week9.bin.txt", ios::out | ios::binary);
	f.write((char*)car, sizeof(Car) * l);
	f.close();
}

void openBinFile(Car car[], const int l) {
	fstream f;
	f.open("Week9.bin.txt", ios::in | ios::binary);
	f.read((char*)car, sizeof(Car) * l);
	f.close();
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(static_cast<unsigned int>(time(0)));

	const int len = 20;
	const int Showmassive = 5;
	Car arrCar[len];

	cout << "Первый массив:\n";
	initCar(arrCar, len);
	writeTextFile(arrCar, len);
	writeBinFile(arrCar, len);
	showCharacteristick(arrCar, Showmassive);

	cout << "Новый массив:\n";
	initCar(arrCar, len);
	showCharacteristick(arrCar, Showmassive);

	cout << "Считывание txt файла:\n";
	openTextFile(arrCar, len);
	showCharacteristick(arrCar, Showmassive);
	cout << "Считывание bin файла:\n";
	openBinFile(arrCar, len);
	showCharacteristick(arrCar, Showmassive);
	std::getchar();
	std::getchar();
	return 0;
}
