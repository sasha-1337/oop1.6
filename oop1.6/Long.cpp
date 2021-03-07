#include "Long.h"

void Long::Init(Pair pair) { SetPair(pair); }

void Long::Display(Pair& p1, Pair& p2)
{
	pair.Display(p1, p2);

	cout << " (" << p1.GetFirst() << "," << p2.GetFirst() << ") - (" << p1.GetSecond() << "," << p2.GetSecond() << ") = ";
	cout << "(" << p1.GetFirst() << " - " << p1.GetSecond() << " , " << p2.GetFirst() << " - " << p2.GetSecond() << ")" << endl << endl;
	cout << "( " << Diff_1(p1) << " , " << Diff_2(p2) << " )" << endl;

	cout << " (" << p1.GetFirst() << "," << p2.GetFirst() << ") * (" << p1.GetSecond() << "," << p2.GetSecond() << ") = ";
	cout << "(" << p1.GetFirst() << " * " << p1.GetSecond() << " , " << p2.GetFirst() << " * " << p2.GetSecond() << ")" << endl << endl;
	cout << "( " << pair.ToString(Multiply_1(p1.GetFirst(), p1.GetSecond())) << " , " << pair.ToString(Multiply_2(p2)) << " )" << endl;
}

void Long::Read()
{
	Pair z, p1, p2;
	z.Read(p1, p2);
	Display(p1, p2);
	Init(z);
}

int Long::Diff_1(Pair& p1) { return p1.GetFirst() - p1.GetSecond(); }

int Long::Diff_2(Pair& p2) { return p2.GetFirst() - p2.GetSecond(); }

int Long::Multiply_1(int a, int b) { return a * b; }

int Long::Multiply_2(Pair& p2) { return p2.GetFirst() * p2.GetSecond(); }

void Long::Pair::Init(int F, int S)
{
	SetFirst(F);
	SetSecond(S);
}

void Long::Pair::Read(Pair& p1, Pair& p2)
{
	cout << " a = ? "; cin >> p1.first;
	cout << " b = ? "; cin >> p2.first;
	Init(p1.first, p2.first);

	cout << " c = ? "; cin >> p1.second;
	cout << " d = ? "; cin >> p2.second;
	Init(p1.second, p2.second);
}

void Long::Pair::Display(Pair& p1, Pair& p2)
{
	cout << endl;
	cout << " a = " << p1.first << "  " << " b = " << p2.first << endl << endl;
	cout << " c = " << p1.second << "  " << " d = " << p2.second << endl << endl;

	cout << " (a,b) + (c,d) = (a + c , b + d) " << endl;

	cout << " (" << p1.first << "," << p2.first << ") + (" << p1.second << "," << p2.second << ") = ";
	cout << "(" << p1.first << " + " << p1.second << " , " << p2.first << " + " << p2.second << ")" << endl << endl;
	cout << "( " << ToString(Sum_1(p1.first, p1.second)) << " , " << ToString(Sum_2(p2)) << " )" << endl;
}

int Long::Pair::Sum_1(int a, int b) { return a + b; }

int Long::Pair::Sum_2(Pair& p2) { return p2.first + p2.second; }

string Long::Pair::ToString(int value) const
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}