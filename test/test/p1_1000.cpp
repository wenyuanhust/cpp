#include "p1_1000.h"
#include <iostream>
using namespace std;

p1_1000::p1_1000(void)
{
	count++;
	cout << count;
}


p1_1000::~p1_1000(void)
{
}
int p1_1000::count = 0;
//static 
int pppp = 0;