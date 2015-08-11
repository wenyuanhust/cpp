#pragma once
class CwithFri
{
public:

	CwithFri(void)
	{
	}

	~CwithFri(void)
	{
	}

	friend void friFun(CwithFri cf){
		cf.i = 3;
	}

	void fun(){
		i = 1;
	}
private:
	int i;
};

