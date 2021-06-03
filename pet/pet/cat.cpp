#include "cat.h"



cat::cat()
{
}

void cat::input()
{
	cin.ignore();
	pet::input();
	cout << "Nhap loai meo:";
	cin.ignore();
	cin.getline(loai, 20);
}

float cat::tinhtienan()
{
	tienan = (cannang - 1)*0.04;
	return tienan;
}

void cat::output()
{
	pet::output();
	cout << "Loai meo:" << loai << endl;
	cout << "Tien an:" << tienan << endl;
}

cat::~cat()
{
}
