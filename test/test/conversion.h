#pragma once
#include <string>
using namespace std;

class conversion
{
public:
	conversion(int i = 7, bool b = false, string str = "goto"):i(i), b(b), str(str){
		
	}

	operator string(){
		return str;
	}

	~conversion(void);

private:
	int i;
	bool b; 
	string str;
};

