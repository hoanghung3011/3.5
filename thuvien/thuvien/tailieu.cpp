#include "tailieu.h"



tailieu::tailieu()
{
}

void tailieu::input()
{
	cout << "\nNhap ma:";
	cin.ignore();
	cin.getline(ma, 20);
	cout << "Nhap ten:";
	fflush(stdin);
	cin.getline(ten, 20);
	cout << "Nhap ten nha xuat ban:";
	fflush(stdin);
	cin.getline(nxb, 20);
	cout << "Nhap so ban phat hanh:";
	cin >> banph;
}

void tailieu::output()
{
	cout << "\nMa:" << ma << endl;
	cout << "Ten:" << ten << endl;
	cout << "Ten nha xuat ban:" << nxb << endl;
	cout << "So ban phat hanh:" << banph;
}

tailieu::~tailieu()
{
}
