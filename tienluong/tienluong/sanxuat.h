#pragma once
#include "CNhanVien.h"
class sanxuat :public CNhanVien
{
private:
	int luongcb;
	int sosp;
	int luong;
public:
	sanxuat();
	void input();
	void output();
	int tinhluong();
	~sanxuat();
};

