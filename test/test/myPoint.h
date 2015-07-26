#pragma once
#include <iostream>
#include <string>
using namespace std;

class myPoint
{
public:
	//myPoint(void);
	myPoint::myPoint(float x = 0, float y = 0)
	{
		this->x = x;
		this->y = y;
	}

	virtual ~myPoint(void);
	static myPoint rect(float x, float y);
	static myPoint polar(float x, float y);

	virtual void print(string s = "base"){// 
		cout << x << y;
		cout << s << endl;
	}
	int d;
private:
	float x;
	float y;
};

