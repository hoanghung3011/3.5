#pragma once
#include <iostream>
using namespace std;
class tailieu
{
protected:
	char ma[20];
	char ten[20];
	char nxb[20];
	int banph;
public:
	tailieu();
	virtual void input();
	virtual void output();
	~tailieu();
};

