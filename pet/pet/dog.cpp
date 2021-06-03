#include "dog.h"



dog::dog()
{
}

void dog::setChieudai(float a)
{
	chieudai = a;
}

void dog::setChieucao(float a)
{
	chieucao = a;
}

float dog::getChieucao()
{
	return chieucao;
}

float dog::getChieudai()
{
	return chieudai;
}

void dog::input()
{
	pet::input();
	cout << "Nhap chieu cao:";
	cin >> chieucao;
	cout << "Nhap chieu dai:";
	cin >> chieudai;
}
float dog::tinhtienan()
{
	tienan = cannang * 0.05;
	return tienan;

}
void dog::output()
{
	pet::output();
	cout << "Chieu cao:" << chieucao << endl;
	cout << "Chieu dai:" << chieudai << endl;
	cout << "Tien an:" << tienan << endl;
}

dog::~dog()
{
}
