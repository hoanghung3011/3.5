#pragma once
#include <iostream>
using namespace std;
class pet
{
protected:
	char ten[20];
	float tuoi;
	float cannang;
	float tienan;
public:
	pet();
	void setCannang(float);
	void setTuoi(float);
	float getCannang();
	float getTuoi();
	virtual void input();
	virtual void output();
	virtual float tinhtienan();
	~pet();
};

