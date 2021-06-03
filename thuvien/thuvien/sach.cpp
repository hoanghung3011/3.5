#include "sach.h"



sach::sach()
{
}

void sach::input()
{
	tailieu::input();
	cout << "Nhap so trang:";
	cin >> trang;
	cout << "Nhap ten tac gia:";
	cin.ignore();
	cin.getline(tacgia, 20);
}

void sach::output()
{
	tailieu::output();
	cout << "\nSo trang:" << trang << endl;
	cout << "Ten tac gia:" << tacgia << endl;
}
sach::~sach()
{
}
