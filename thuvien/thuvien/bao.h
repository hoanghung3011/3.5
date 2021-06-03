#pragma once
#include "tailieu.h"
#include "date.h"
class bao :public tailieu, public date
{

public:
	bao();
	void input();
	void output();
	~bao();
};

