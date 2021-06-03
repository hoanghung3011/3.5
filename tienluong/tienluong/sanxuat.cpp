#include "sanxuat.h"



sanxuat::sanxuat()
{
}

void sanxuat::input()
{
	cin.ignore();
	CNhanVien::input();
	cout << "Nhap luong can ban:";
	cin >> luongcb;
	cout << "Nhap so san pham:";
	cin >> sosp;
}

int sanxuat::tinhluong()
{
	luong = luongcb + sosp * 5000;
	return luong;
}

void sanxuat::output()
{
	CNhanVien::output();
	cout << "Luong can ban:" << luongcb << endl;
	cout << "So san pham:" << sosp << endl;
	cout << "Muc luong:" << tinhluong() << endl;
}



sanxuat::~sanxuat()
{
}
