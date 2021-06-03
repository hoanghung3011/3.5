#include "vanphong.h"



vanphong::vanphong()
{
}

void vanphong::input()
{
	CNhanVien::input();
	cout << "Nhap so ngay lam viec:";
	cin >> ngaylamviec;
}

int vanphong::tinhluong()
{
	luong = ngaylamviec * 100000;
	return luong;
}

void vanphong::output()
{
	CNhanVien::output();
	cout << "So ngay lam viec:" << ngaylamviec << endl;
	cout << "Muc luong:" << tinhluong();
}


vanphong::~vanphong()
{
}
