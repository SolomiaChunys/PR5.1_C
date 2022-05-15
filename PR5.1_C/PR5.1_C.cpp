#include <iostream>
#include <iomanip>
#include "Money_private.h"
#include "Money_public.h"
#include "Money.h"
#include <sstream>

using namespace std;

int main()
{
	Money_public l;
	Money_public m, k;
	k.Division(m, l);
	k.FracDivision(m, l);

	Money_private b;
	Money_private a, c;
	cin >> c;
	cin >> a;

	cout << "Division : " << Division(a, c) << endl;
	cout << "FracDivision: " << FracDivision(a, c) << endl;

	if (ComparisionGreat(a, c))
		cout << "FirstSum > SecondSum" << endl;
	if (ComparisionLess(a, c))
		cout << "FirstSum < SecondSum" << endl;
	if (ComparisionEqual(a, c))
		cout << "FirstSum = SecondSum" << endl;

	return 0;
}