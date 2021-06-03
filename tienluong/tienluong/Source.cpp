#include "CNhanVien.h"
#include "sanxuat.h"
#include "vanphong.h"

int main()
{
	CNhanVien *ptr;
	vanphong vp;
	sanxuat sx;
	ptr = &vp;
	cout << "\nNhap thong tin nhan vien van phong:";
	ptr->input();
	cout << "Luong nhan vien van phong:" << ptr->tinhluong() << endl;
	cout << "Xuat thong tin nhan vien van phong:";
	ptr->output();
	ptr = &sx;
	cout << "\nNhap thong tin nhan vien san xuat:";
	ptr->input();
	cout << "Luong nhan vien san xuat la:" << ptr->tinhluong() << endl;
	cout << "Xuat thong tin nhan vien san xuat:";
	ptr->output();
	system("pause");
	return 0;

	
}