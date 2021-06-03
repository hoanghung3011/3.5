#pragma once
#include "pet.h"
class cat :public pet
{
private:
	char loai[10];

public:
	cat();
	void input();
	void output();
	float tinhtienan();
	~cat();
};

