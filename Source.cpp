#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Point l;
	cin >> l;
	cout << l;
	l.distance();
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l; cout << l;;
	l.distance();
	cout << endl;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; cout << l;
	l.distance();
	cout << endl;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; cout << l;
	l.distance();
	cout << endl;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; cout << l;
	l.distance();
	return 0;
}