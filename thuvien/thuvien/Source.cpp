#include "sach.h"
#include "bao.h"
#include "tailieu.h"
#include "tapchi.h"

int main()
{
	tailieu *ptr;
	sach s;
	bao b;
	tapchi t;
	ptr = &s;
	cout << "\nNhap thong tin sach:";
	ptr->input();
	cout << "\nXuat thong tin sach:";
	ptr->output();
	ptr = &b;
	cout << "\nNhap thong tin bao:";
	ptr->input();
	cout << "\nXuat thong tin bao:";
	ptr->output();
	ptr = &t;
	cout << "\nNhap thong tin tap chi:";
	ptr->input();
	cout << "\nXuat thong tin tap chi:";
	ptr->output();
	system("pause");
	return 0;
}