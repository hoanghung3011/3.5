#pragma once
#include "pet.h"
using namespace std;
class dog : public pet
{
private:
	float chieucao;
	float chieudai;
	//float tienan;
public:
	dog();
	void setChieucao(float);
	void setChieudai(float);
	float getChieudai();
	float getChieucao();
	void input();
	void output();
	float tinhtienan();
	~dog();
};

