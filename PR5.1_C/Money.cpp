#include "Money.h"
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

Money::Money()
{
	sethrn500(1);
	sethrn200(1);
	sethrn100(1);
	sethrn50(1);
	sethrn20(1);
	sethrn10(1);
	sethrn5(1);
	sethrn2(1);
	sethrn1(1);
	setkop50(1);
	setkop25(1);
	setkop10(1);
	setkop5(1);
	setkop2(1);
	setkop1(1);
}

Money::Money(int hrn_500, int hrn_200, int hrn_100, int hrn_50,
	int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1,
	int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1)
{
	try
	{
		if (hrn_500 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_500 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_200 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_200 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_100 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_100 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_20 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_20 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (hrn_1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			hrn_1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_50 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_50 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_25 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_25 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_10 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_10 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_5 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_5 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_2 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_2 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	try
	{
		if (kop_1 < 0)
		{
			throw Error("The value can`t be negative!");
		}
		else
		{
			kop_1 = 0;
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	sethrn500(hrn_500);
	sethrn200(hrn_200);
	sethrn100(hrn_100);
	sethrn50(hrn_50);
	sethrn20(hrn_20);
	sethrn10(hrn_10);
	sethrn5(hrn_5);
	sethrn2(hrn_2);
	sethrn1(hrn_1);
	setkop50(kop_50);
	setkop25(kop_25);
	setkop10(kop_10);
	setkop5(kop_5);
	setkop2(kop_2);
	setkop1(kop_1);
}

Money::Money(Money& t)
{
	hrn500 = t.hrn500;
	hrn200 = t.hrn200;
	hrn100 = t.hrn100;
	hrn50 = t.hrn50;
	hrn20 = t.hrn20;
	hrn10 = t.hrn10;
	hrn5 = t.hrn5;
	hrn2 = t.hrn2;
	hrn1 = t.hrn1;
	kop50 = t.kop50;
	kop25 = t.kop25;
	kop10 = t.kop10;
	kop5 = t.kop5;
	kop2 = t.kop2;
	kop1 = t.kop1;
}

Money::~Money()
{ }

double Money::sum()
{
	return (hrn500 * 500. + hrn200 * 200. + hrn100 * 100. + hrn50 * 50. + hrn20 * 20. + hrn10 * 10. + hrn5 * 5. + hrn2 * 2. + hrn1 * 1. + kop50 * 0.50 + kop25 * 0.25 + kop10 * 0.1 + kop5 * 0.05 + kop2 * 0.02 + kop1 * 0.01);
}

ostream& operator <<(ostream& out, const Money& a)
{
	out << string(a) << endl;
	return out;
}

istream& operator >>(istream& in, Money& a)
{
	cout << "Enter SUM:" << endl;
	cout << " 500  -  "; in >> a.hrn500;
	cout << " 200  -  "; in >> a.hrn200;
	cout << " 100  -  "; in >> a.hrn100;
	cout << " 50   -  "; in >> a.hrn50;
	cout << " 20   -  "; in >> a.hrn20;
	cout << " 10   -  "; in >> a.hrn10;
	cout << " 5    -  "; in >> a.hrn5;
	cout << " 2    -  "; in >> a.hrn2;
	cout << " 1    -  "; in >> a.hrn1;
	cout << " 0.50 -  "; in >> a.kop50;
	cout << " 0.25 -  "; in >> a.kop25;
	cout << " 0.10 -  "; in >> a.kop10;
	cout << " 0.05 -  "; in >> a.kop5;
	cout << " 0.02 -  "; in >> a.kop2;
	cout << " 0.01 -  "; in >> a.kop1;
	cout << endl;

	return in;
}

Money::operator string() const
{
	stringstream ss;
	ss << "Sum=" << hrn500 * 500. + hrn200 * 200. + hrn100 * 100. + hrn50 * 50. + hrn20 * 20. + hrn10 * 10. + hrn5 * 5. + hrn2 * 2. + hrn1 * 1. + kop50 * 0.50 + kop25 * 0.25 + kop10 * 0.1 + kop5 * 0.05 + kop2 * 0.02 + kop1 * 0.01 << endl;
	return ss.str();
}