#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << endl << "Арифметические действия:" << endl;
	int a = 10, b = 5;

	// + 
	cout << "10 + 5 = " << 10 + 5 << endl;
	cout << "2.5 + 3.7 = " << 2.5 + 3.7 << endl;
	cout << "a + b = " << a + b << endl;
	cout << "-5 + 12 = " << -5 + 12 << endl;

	// - 
	cout << "10 - 5 = " << 10 - 5 << endl;
	cout << "7.2 - 1.8 = " << 7.2 - 1.8 << endl;
	cout << "a - b = " << a - b << endl;
	cout << "0 - 3 = " << 0 - 3 << endl;

	//++
	cout << "--a = " << --a << endl;
	cout << "++a = " << ++a << endl; //Префиксный инкремент
	cout << "a = " << a << endl;
	cout << "a++ = " << a++ << endl; //Постфиксный инкремент
	cout << "a-- = " << a-- << endl;


	// Задание 2
	cout << endl << "Операторы сравнения:" << endl;

	// == 
	cout << "10 == 10: " << (10 == 10) << endl;
	cout << "5 == 7: " << (5 == 7) << endl;
	cout << "a == b: " << (a == b) << endl;
	cout << "-3 == -3: " << (-3 == -3) << endl;

	// < 
	cout << "5 < 10: " << (5 < 10) << endl;
	cout << "10 < 5: " << (10 < 5) << endl;
	cout << "a < b: " << (a < b) << endl;
	cout << "-4 < -2: " << (-4 < -2) << endl;


	// Задание 3
	cout << endl << "Логические операторы:" << endl;
	a = 10, b = 5;
	int c = 0;

	// ! 
	cout << "!(a == b): " << (a != b) << endl; // a не равно b, true
	cout << "!(a > b): " << !(a > b) << endl; // a больше b, false
	cout << "!(c != 0): " << !(c != 0) << endl; // c не равно 0, true 
	cout << "!(a % 2 == 0): " << !(a % 2 == 0) << endl; // a делится на 2,. false

	// && 
	cout << "(a > b) && (b > c): " << ((a > b) && (b > c)) << endl; // true && true
	cout << "(a < b) && (b > c): " << ((a < b) && (b > c)) << endl; // false && true
	cout << "(c == 0) && (a % 2 == 0): " << ((c == 0) && (a % 2 == 0)) << endl; // true && true
	cout << "(a < b) && (c != 0): " << ((a < b) && (c != 0)) << endl; // false && false

	// || 
	cout << "(a > b) || (b > c): " << ((a > b) || (b > c)) << endl; // true || true
	cout << "(a < b) || (b > c): " << ((a < b) || (b > c)) << endl; // false || true
	cout << "(c == 0) || (a % 2 == 0): " << ((c == 0) || (a % 2 == 0)) << endl; // true || true
	cout << "(a < b) || (c != 0): " << ((a < b) || (c != 0)) << endl; // false || false 

	return 0;

}