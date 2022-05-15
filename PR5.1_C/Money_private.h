#pragma once
#include "Money.h";

using namespace std;

class Money_private :
	private Money
{
public:
	Money_private();
	Money_private(int hrn_500, int hrn_200, int hrn_100, int hrn_50,
		int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1,
		int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1);
	friend double Division(Money_private& n, Money_private& m);
	friend double FracDivision(Money_private& n, Money_private& m);
	friend bool ComparisionGreat(Money_private& n, Money_private& m);
	friend bool ComparisionLess(Money_private& n, Money_private& m);
	friend bool ComparisionEqual(Money_private& n, Money_private& m);

	friend ostream& operator << (ostream&, const Money_private&);
	friend istream& operator >>(istream&, Money_private&);
	operator string() const;

};


