#pragma once
#include "CNhanVien.h"
class vanphong :public CNhanVien
{
private:
	int ngaylamviec;
	int luong;
public:
	vanphong();
	void input();
	void output();
	int tinhluong();
	~vanphong();
};

