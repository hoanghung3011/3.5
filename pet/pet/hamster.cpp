#include "hamster.h"



hamster::hamster()
{
}

void hamster::input()
{

	pet::input();
	cout << "Nhap mau long(0-xam tro,1-trang soc den,2-tra sua,3-khac):";
	cin >> maulong;
}

float hamster::tinhtienan()
{
	if (maulong == 0 || maulong == 2)
		tienan = (cannang + tuoi)*0.02;
	else
		tienan = cannang * 0.025;
	return tienan;
}

void hamster::output()
{
	pet::output();
	cout << "Mau long:";
	if (maulong == 0)
		cout << "Xam tro" << endl;
	if (maulong == 1)
		cout << "Trang soc den" << endl;
	if (maulong == 2)
		cout << "Tra sua" << endl;
	if (maulong == 3)
		cout << "Khac" << endl;
	cout << "Tien an:" << tienan;
}
hamster::~hamster()
{
}
