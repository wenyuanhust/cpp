#pragma once
#include "mypoint.h"
#include <iostream>
#include <string>

using namespace std;

class myPoD :
	public myPoint
{
public:
	myPoD(float a = 9, float b = 9):myPoint(a, b){//
		
	}
	~myPoD(void);

	void print(string s = "pod"){
		cout << "myPoD" << s;
	}
};

