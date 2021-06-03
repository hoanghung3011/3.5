#include "pet.h"



pet::pet()
{
}

void pet::setCannang(float a)
{
	cannang = a;
}

void pet::setTuoi(float a)
{
	tuoi = a;
}

float pet::getCannang()
{
	return cannang;
}

float pet::getTuoi()
{
	return tuoi;
}

void pet::input()
{
	cout << "\nNhap ten:";
	cin.getline(ten, 20);
	cout << "Nhap tuoi:";
	cin >> tuoi;
	cout << "Nhap can nang:";
	cin >> cannang;

}

void pet::output()
{
	cout << "\nTen:" << ten << endl;
	cout << "Tuoi:" << tuoi << endl;
	cout << "Can nang:" << cannang << endl;
}

float pet::tinhtienan()
{
	cout << "\nTien an:";
	return 0;
}
pet::~pet()
{
}
