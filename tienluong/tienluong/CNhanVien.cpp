#include "CNhanVien.h"



CNhanVien::CNhanVien()
{
}

void CNhanVien::input()
{
	cout << "\nNhap ho va ten:";
	cin.getline(ten, 50);
	cout << "Nhap ngay thang nam sinh:";
	cin >> ngaysinh >> thangsinh >> namsinh;
}

void CNhanVien::output()
{
	cout << "\nHo va ten nhan vien:" << ten << endl;
	cout << "Ngay thang nam sinh:" << ngaysinh << "/" << thangsinh << "/" << namsinh << endl;
}

int CNhanVien::tinhluong()
{
	cout << "\nLuong cua nhan vien la:";
	return 0;
}
CNhanVien::~CNhanVien()
{
}
