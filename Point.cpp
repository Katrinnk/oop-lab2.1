#include "Point.h"
#include <iostream>
Point::Point()    //конструктор без аргументів(за замовчуванням)
{
	first = 0;
	second = 0;
}
Point::Point(double first = 0, double second = 0)     //конструктор ініціалізації
{
	this->first = first;
	this->second = second;
}
Point::Point(const Point& k)      //конструктор копіювання
{
	first = k.first;
	second = k.second;
}
void Point::SetFirst(double first)
{
	this->first = first;
}
void Point::SetSecond(double second)
{
	this->second = second;
}
Point& Point::operator = (const Point& k)    //операція присвоєння
{
	first = k.first;
	second = k.second;
	return *this;
}
istream& operator>>(istream& in, Point& k)   //перевантаження функції введення
{
	cout << "vvedit x:"; in >> k.first;
	if (fabs(k.first) >= 100)
		cout << "vvedene nepravylne znachennia x!" << endl;
	cout << "vvedit y:"; in >> k.second;
	if (fabs(k.second) >= 100)
		cout << "vvedene nepravylne znachennia y!" << endl;
	return in;
} 
ostream& operator <<(ostream& out, const Point& k)    //перевантаження функції виведення
{
	out << string(k);
	return out;
}
Point::operator string() const     //виведення значень на екран
{
	stringstream ss;
	ss << "znachennia x:" << first << endl;
	ss << "znachennia y:" << second << endl;
	return ss.str();
}
void Point::distance()     //знаходження відстані між координатами
{
	cout << endl;
	cout << "distance: " << sqrt(fabs(first) * fabs(first) + fabs(second) * fabs(second)) << endl;
}
Point& Point::operator++()   //перевантаження операції "інкременту"(префіксна форма) - first
{
	++first;
	++second;
	return *this;
}
Point& Point::operator--()    //перевантаження операції "дикременту"(префіксна форма) - second
{
	--first;
	--second;
	return *this;
}
Point Point::operator++(int)    //перевантаження операції "інкременту" (постфіксна форма) - first
{
	Point l(*this);
	first++;
	second++;
	return l;
}
Point Point::operator--(int)   //перевантаження операції "дикременту" (постфіксна форма) - second
{
	Point l(*this);
	first--;
	second--;
	return l;
}