#pragma once
#include <iostream>
#include <ctime>
using namespace std;
#define dateWindows 1

class Date
{
	int year;
	int month;
	int day;
public:
	//--------- КОНСТРУКТОРИ та ДЕСТРУКТОРИ ---------
	Date(); // За замовчуванням - поточна дата
	Date(int year, int month, int day); // З параметрами - задана дата	

	bool isLeapYear()const; //Перевірка на високосний рік
	int monthDays()const; //Кількість днів за місяцем
	void nextDate(); // Наступна дата
	void prevDate(); // Попередня дата

	//--------- АКСЕСОРИ ---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;

	void showDate()const;
	bool valid()const; // Перевірка дати на коректність
	//--------- ОПЕРАТОРИ ПОРІВНЯННЯ ---------
	bool operator == (const Date& obj)const&;
	bool operator != (const Date& obj)const&;
	bool operator > (const Date& obj)const&;
	bool operator < (const Date& obj)const&;
	bool operator >= (const Date& obj)const&;
	bool operator <= (const Date& obj)const&;

	//--------- ОПЕРАТОРИ ПРИСВОЄННЯ ---------	
	Date& operator += (int days); // додати days днів до дати
	Date& operator -= (int days); // відняти days дні від дати
	Date& operator += (float months); // додати months місяців до дати
	Date& operator -= (float months); // відняти months місяці від дати
	Date& operator += (long years); // додати years років до дати
	Date& operator -= (long years); // відняти years років від дати

	//--------- АРИФМЕТИЧНІ ОПЕРАТОРИ ---------
	Date operator + (int days)const&;
	Date operator - (int days)const&;
	Date operator + (float months)const&;
	Date operator - (float months)const&;
	Date operator + (long years)const&;
	Date operator - (long years)const&;

	Date& operator -- ()  // prefix
		{
		this->prevDate();
		return *this;
		}
	Date operator -- (int)//postfix
	{
		Date tmp = *this;
		this->prevDate();
		return tmp;
	}
	Date& operator ++ () {
		this->nextDate();
		return *this;
	}
	Date operator ++ (int) {
		Date tmp = *this;
		this->nextDate();
		return tmp;
	}

	// Friends
	friend Date operator + (int days, const Date& a);
	friend Date operator - (int days, const Date& a);

	friend Date operator + (float months, const Date& a);
	friend Date operator - (float months, const Date& a);

	friend Date operator + (long years, const Date& a);
	friend Date operator - (long years, const Date& a);


	friend ostream& operator << (ostream& os, const Date& t);
	friend istream& operator >> (istream& is, Date& t);
};

