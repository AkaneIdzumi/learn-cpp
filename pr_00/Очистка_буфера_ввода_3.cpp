// Очистка_буфера_ввода_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#// C ++ код, объясняющий, как "cin >> ws"
// сбрасывает входной буфер вместе с
// начальные пробелы строки

  
#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
using namespace std;



int main()

{

	int a;
	string s;
	
  	
	cin >> a;
    
	// Сбрасывает входной буфер и
	// начальные пробелы строки
	cin >> ws;
	// Получить ввод от пользователя -
	getline(cin, s);
	// выполнит pri;nt a и s
	cout.fill('r');
	cout <<setw(10)<<a << endl;
	cout << s << endl;
	
	return 0;

}