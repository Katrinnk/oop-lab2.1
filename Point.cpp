#include "Point.h"
#include <iostream>
Point::Point()    //����������� ��� ���������(�� �������������)
{
	first = 0;
	second = 0;
}
Point::Point(double first = 0, double second = 0)     //����������� �����������
{
	this->first = first;
	this->second = second;
}
Point::Point(const Point& k)      //����������� ���������
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
Point& Point::operator = (const Point& k)    //�������� ���������
{
	first = k.first;
	second = k.second;
	return *this;
}
istream& operator>>(istream& in, Point& k)   //�������������� ������� ��������
{
	cout << "vvedit x:"; in >> k.first;
	if (fabs(k.first) >= 100)
		cout << "vvedene nepravylne znachennia x!" << endl;
	cout << "vvedit y:"; in >> k.second;
	if (fabs(k.second) >= 100)
		cout << "vvedene nepravylne znachennia y!" << endl;
	return in;
} 
ostream& operator <<(ostream& out, const Point& k)    //�������������� ������� ���������
{
	out << string(k);
	return out;
}
Point::operator string() const     //��������� ������� �� �����
{
	stringstream ss;
	ss << "znachennia x:" << first << endl;
	ss << "znachennia y:" << second << endl;
	return ss.str();
}
void Point::distance()     //����������� ������ �� ������������
{
	cout << endl;
	cout << "distance: " << sqrt(fabs(first) * fabs(first) + fabs(second) * fabs(second)) << endl;
}
Point& Point::operator++()   //�������������� �������� "����������"(��������� �����) - first
{
	++first;
	++second;
	return *this;
}
Point& Point::operator--()    //�������������� �������� "����������"(��������� �����) - second
{
	--first;
	--second;
	return *this;
}
Point Point::operator++(int)    //�������������� �������� "����������" (���������� �����) - first
{
	Point l(*this);
	first++;
	second++;
	return l;
}
Point Point::operator--(int)   //�������������� �������� "����������" (���������� �����) - second
{
	Point l(*this);
	first--;
	second--;
	return l;
}