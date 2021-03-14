#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Point
{
	double first, second;
public:
	Point();  //����������� ��� ���������(�� �������������)
	Point(double, double); //����������� �����������
	Point(const Point&);  //����������� ���������

	void SetFirst(double);
	void SetSecond(double);
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }

	Point& operator = (const Point&);  //�������� ���������
	operator string() const;     //��������� ������� �� �����

	friend ostream& operator << (ostream&, const Point&); //�������������� ������� ���������
	friend istream& operator >> (istream&, Point&); //�������������� ������� ��������

	void distance();  //����������� ������ �� ������������

	Point& operator++(); //�������������� �������� "����������"(��������� �����) - first
	Point& operator--(); //�������������� �������� "����������"(��������� �����) - second
	Point operator++(int); //�������������� �������� "����������" (���������� �����) - first
	Point operator--(int); //�������������� �������� "����������" (���������� �����) - second
};

