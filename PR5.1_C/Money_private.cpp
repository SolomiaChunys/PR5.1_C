#include "Money_private.h"
#include <iostream>
#include <sstream>

using namespace std;

class Error
{
	string message;
public:
	Error(string message)
		: message(message)
	{}
	string What() { return message; }
};

class E : public exception
{
	string message;
public:
	E(string message)
		: message(message)
	{}
	string What() { return message; }
};


Money_private::Money_private()
{
	sethrn500(1);
	sethrn200(0);
	sethrn100(0);
	sethrn50(0);
	sethrn20(0);
	sethrn10(0);
	sethrn5(0);
	sethrn2(0);
	sethrn1(0);
	setkop50(0);
	setkop25(0);
	setkop10(0);
	setkop5(0);
	setkop2(0);
	setkop1(0);
}

double Division(Money_private& n, Money_private& m)
{
	try
	{
		if (m.sum() == 0)
		{
			throw Error("The second sum is zero,and zero can`t be divided)");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	return n.sum() / m.sum();
}

double FracDivision(Money_private& n, Money_private& m)
{
	double N = 0;
	try
	{
		if (N == 0)
		{
			throw Error("The number can`t be zero(");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	double d = n.sum() + m.sum();
	d /= N;
	return d;
}

bool ComparisionGreat(Money_private& n, Money_private& m)
{
	return n.sum() > m.sum();
}
bool ComparisionLess(Money_private& n, Money_private& m)
{
	return n.sum() < m.sum();
}
bool ComparisionEqual(Money_private& n, Money_private& m)
{
	return n.sum() == m.sum();
}

ostream& operator <<(ostream& out, const Money_private& a)
{
	out << string(a) << endl;
	return out;
}

istream& operator >>(istream& in, Money_private& a)
{
	int hrn500, hrn200, hrn100, hrn50, hrn20, hrn10, hrn5, hrn2, hrn1, kop50, kop25, kop10, kop5, kop2, kop1;
	cout << "Enter SUM:" << endl;
	cout << " 500  -  "; in >> hrn500;
	try
	{
		if (hrn500 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn500 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 200  -  "; in >> hrn200;
	try
	{
		if (hrn200 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn200 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 100  -  "; in >> hrn100;
	try
	{
		if (hrn100 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn100 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 50   -  "; in >> hrn50;
	try
	{
		if (hrn50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 20   -  "; in >> hrn20;
	try
	{
		if (hrn20 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn20 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 10   -  "; in >> hrn10;
	try
	{
		if (hrn10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 5    -  "; in >> hrn5;
	try
	{
		if (hrn5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 2    -  "; in >> hrn2;
	try
	{
		if (hrn2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 1    -  "; in >> hrn1;
	try
	{
		if (hrn1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.50 -  "; in >> kop50;
	try
	{
		if (kop50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.25 -  "; in >> kop25;
	try
	{
		if (kop25 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop25 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.10 -  "; in >> kop10;
	try
	{
		if (kop10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.05 -  "; in >> kop5;
	try
	{
		if (kop5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.02 -  "; in >> kop2;
	try
	{
		if (kop2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << " 0.01 -  "; in >> kop1;
	try
	{
		if (kop1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	cout << endl;
	a.sethrn500(hrn500);
	a.sethrn200(hrn200);
	a.sethrn100(hrn100);
	a.sethrn50(hrn50);
	a.sethrn20(hrn20);
	a.sethrn10(hrn10);
	a.sethrn5(hrn5);
	a.sethrn2(hrn2);
	a.sethrn1(hrn1);
	a.setkop50(kop50);
	a.setkop25(kop25);
	a.setkop10(kop10);
	a.setkop5(kop5);
	a.setkop2(kop2);
	a.setkop1(kop1);

	return in;
}

Money_private::operator string() const
{
	stringstream ss;
	ss << endl;
	return ss.str();
}
