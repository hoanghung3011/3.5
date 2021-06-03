#include "tapchi.h"



tapchi::tapchi()
{
}

void tapchi::input()
{
	tailieu::input();
	cout << "Nhap so phat hanh:";
	cin >> soph;
	cout << "Nhap thang phat hanh:";
	cin >> thangph;
}

void tapchi::output()
{
	tailieu::output();
	cout << "\nSo phat hanh:" << soph << endl;
	cout << "Thang phat hanh:" << thangph << endl;
}
tapchi::~tapchi()
{
}
