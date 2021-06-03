#include "pet.h"
#include "dog.h"
#include "cat.h"
#include "hamster.h"

int main()
{
	pet *ptr;
	dog d;
	cat c;
	hamster h;
	ptr = &d;
	cout << "\nNhap thong tin cho:";
	ptr->input();
	cout << "\nTien an cua cho:" << ptr->tinhtienan();
	cout << "\nXuat thong tin cho:";
	ptr->output();
	ptr = &c;
	cout << "\nNhap thong tin meo:";
	ptr->input();
	cout << "\nTien an cua meo:" << ptr->tinhtienan();
	cout << "\nXuat thong tin meo:";
	ptr->output();
	ptr = &h;
	cout << "\nNhap thong tin chuot hamster:";
	ptr->input();
	cout << "\nTien an cua chuot hamster:" << ptr->tinhtienan();
	cout << "\nXuat thong tin chuot hamster:";
	ptr->output();
	system("pause");
	return 0;
}