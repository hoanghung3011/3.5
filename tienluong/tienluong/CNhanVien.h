#pragma once
#include <iostream>
using namespace std;
class CNhanVien
{
private:
	char ten[50];
	int ngaysinh;
	int thangsinh;
	int namsinh;
public:
	CNhanVien();
	virtual void input();
	virtual void output();
	virtual int tinhluong();
	~CNhanVien();
};

