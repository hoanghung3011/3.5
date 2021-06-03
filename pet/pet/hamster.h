#pragma once
#include "pet.h"
class hamster :public pet
{
private:
	int maulong;
public:
	hamster();
	void input();
	void output();
	float tinhtienan();
	~hamster();
};

