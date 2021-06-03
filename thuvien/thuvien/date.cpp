#include "date.h"



date::date()
{
}

void date::input()
{
	cout << "Nhap ngay phat hanh:";
	cin >> ngay;
	cout << "Nhap thang phat hanh:";
	cin >> thang;
	cout << "Nhap nam phat hanh:";
	cin >> nam;
}

void date::output()
{
	cout << "\nThoi gian phat hanh:" << ngay << "/" << thang << "/" << nam << endl;
}
date::~date()
{
}
