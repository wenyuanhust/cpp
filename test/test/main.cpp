#include "conversion.h"
#include "Fred.h"
#include <string>
#include <iostream>
#include "myPoint.h"
#include "myPoD.h"
void outOfMem(){
	cerr << "Unable to satisfy request for memory\n";
	abort();
}

void main(){
	while(1){
		set_new_handler(outOfMem);
		int *bd = new int[100000000L];	
	}

	int *p = (int *)malloc(1);
	myPoint* mp = new myPoint;//(0, 0)
	mp->print();

	mp = new myPoD;//(0, 0)
	mp->print();
	/**/
	myPoint mpr = myPoint::rect(1, 2);
	myPoint mpp = myPoint::polar(1, 2);
	Fred fs[10];
	Fred a[2] = {Fred(1, 2), Fred(3, 4)};
	Fred *pf = new Fred[3];
	std::string str;
	std::cout << str << endl;

	conversion l1;
	conversion l2(l1);
	std::cin >> str;


}