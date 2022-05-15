#pragma once
#include "Money.h";

using namespace std;

class Money_public :
	public Money
{
public:
	Money_public();

	double Division(Money_public& n, Money_public& m);
	double FracDivision(Money_public& n, Money_public& m);
	friend bool ComparisionGreat(Money_public& n, Money_public& m);
	friend bool ComparisionLess(Money_public& n, Money_public& m);
	friend bool ComparisionEqual(Money_public& n, Money_public& m);
};

