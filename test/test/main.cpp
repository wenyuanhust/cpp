#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int m, n;
	vector<vector<int>> nums;
	while(cin >> m >> n){
		vector<int> num;
		for(int i = m; i <= n; i++){
			int s = 0;
			for(int j = i; j > 0; j /= 10){
				s += pow((double)(j % 10), 3);
			}
			if(s == i) num.push_back(i);
		}
		nums.push_back(num);
	}

	for(int i = 0; i < nums.size(); i++){
		if(0 == nums[i].size()){
			cout << "no" << endl;
			continue;
		}
		for(int j = 0; j < nums[i].size() - 1; j++){
			cout << nums[i][j] << " ";
		}

		cout << nums[i][nums[i].size() - 1] << endl;
	}
    return 0;
}


/*
	int n, m;
	vector<double> r;
	while(cin >> n >> m){
		double s = 0;
		double dn = n;
		for(int i = 0; i < m; i++){
			s += dn;
			dn = sqrt(dn);
		}
		r.push_back(s);
	}
	
	for(int i = 0; i < r.size(); i++){
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<r[i]<<endl;
	}
bool isSu(int x){
	for(int i = 2; i < x; i++){
		if(x % i == 0) return false;
	}
	return true;
}

#include<stdio.h>
#include<math.h>
template<typename T>
void f(T a[], int n){
	T t = 0;
	for(int i = 0; i < n / 2; i++)
		t = a[i], a[i] = a[n - 1 - i], a[n - 1 - i] = t;
}

void main()
{
	int a[5] = {10 ,20, 34, 4, 50};
	double d[6] = {1.1, 2.1, 3.1, 4.1, 5.1};
	f(a, 5);
	f(d, 6);


}
	vector<int> a;
	int i;
	while(cin >> i){
		a.push_back(i);
	}

	vector<vector<int>> result(a.size(), vector<int>(2, 0));
	for(int i = 0; i < a.size(); i++){
		int x = a[i] / 2;
		int less = x;
		int more = (a[i] % 2 == 0) ? x : x + 1;
		for(int j = 0; j < x; j++){
			if(isSu(less - j) && isSu(more + j)){
				cout << less - j << " " << more + j << endl;
				break;
			}
		}
	}
	vector<vector<string>> strs;
	string str;
	while(getline(cin, str), str != "#"){
		vector<string> str2;
		str2.push_back(str);
		getline(cin, str);
		str2.push_back(str);
		strs.push_back(str2);
	}

	for(int i = 0; i < strs.size(); i++){
		vector<int> map(256, 0);
		for(int j = 0; j < strs[i][1].size(); j++){
			++map[strs[i][1][j]];
		}
		for(int k = 0; k < strs[i][0].size(); k++)
			cout << strs[i][0][k] << " " << map[strs[i][0][k]] << endl;
	}

int m, n;
	while(cin >> m >> n){
		int r = -1, c = -1, max = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				long long old_max = max > 0 ? max : -(long long)max;
				int now;
				cin >> now;
				long long now_abs = now > 0 ? now : -(long long)now;
				if(now_abs > old_max){
					max = now;
					r = i + 1;
					c = j + 1;
				}
			}
		}
		cout << r << " " << c << " " << max << endl;
	}
    double x1, y1;
	double x2, y2;
	double dis;
	while(cin>> x1 >> y1 >> x2 >> y2){
		double dx = x1 - x2;
		double dy = y1 - y2;
		dis = sqrt(pow(dx, 2) + pow(dy, 2));
		cout <<setiosflags(ios::fixed) << setprecision(2) << dis << endl;
	}
*/
/*
void outOfMem(){
	cerr << "Unable to satisfy request for memory\n";
	abort();
}
const string f(){
	return "hello";
}

string itos(int i){
	stringstream s;
	s << i;
	return s.str();
}

#ifdef _cplusplus
#define c 0
#else
#define c 1(size_t)
#endif


struct types{
	char a;
	short b;
	int c;
	long long d;
	double e;
} ;

#define offset(type, field) (&(((type*)0)->field))

int add2(int num,...){
	int *p = &num + 1;
	int sum = 0;
	for(int i = 0; i < num; i++, p++)
		sum += *p;

	return sum;
}
int sum(initializer_list){

}
extern int pppp;
*/

/*#include "conversion.h"
#include "Fred.h"
#include <string>
#include <iostream>
#include <sstream>
#include "myPoint.h"
#include "myPoD.h"
#include "p1_1000.h"
#include <vector>
#include <algorithm>
using namespace std;

void main(){
	 

	int end;
	cin >> end;
	
vector<string> words(10, "");
	words[0] = "fox";words[1] = "quick";words[2] = "red";words[3] = "fox";words[4] = "jumps";
	words[5] = "over";words[6] = "the";words[7] = "slow";words[8] = "red";words[9] = "turtle";
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
	//p1_1000::count = 0;
	char src[] = "123456789";
	char dest[] = "123";
	
	strcpy(dest, src);
	printf("%s\n%s\n", dest, src);
	p1_1000 ap[100];
	cout << endl << pppp;	unsigned int i = 3;
	unsigned int j = -3;
	//int s = add2(3, 1, 2, 3);
	unsigned int l = -27;
	unsigned int m = 4 * 4294967269;
	unsigned int k = (unsigned int)(-27) * 4;
	cout << i * (-1) << j;
	int x = -1;
	unsigned int y = 1;
	bool z;
	for(; ; x--, y++ ){
		int k = (x * (int)y);
		z = ((unsigned int)x) * y == ((unsigned int)k);
	}	printf("%d\n", offset(types, a));
	printf("%d\n", offset(types, b));
	printf("%d\n", offset(types, c));
	printf("%d\n", offset(types, d));
	printf("%d\n", offset(types, e));
	//printf("%d\n", offset(types, f));
	int a[2];
	int size = (char*)&a[1] - (char*)&a[0];	unsigned char *p1;
	unsigned long *p2;
	p1 = (unsigned char *)0x801000;
	p2 = (unsigned long *)0x810000;
	printf("%x\n", p1 + 5);
	printf("%x\n", p2 + 5);
	int *p;
	cout << sizeof(p);
	if(c) cout << "c";
	else cout << "c++";
	volatile int i = 10;
	int a = i;
	printf("i = %d\n", a);
	_asm{
		mov dword ptr[ebp - 4], 20h
	}
	int b = i;
	printf("i = %d\n", b);
	//return 0;

	//int i = 1000;
	string s = itos(i);
	cout << s;
	while(1){
		set_new_handler(outOfMem);
		int *bd = new int[100000000L];	
	}

	//int *p = (int *)malloc(1);
	myPoint* mp = new myPoint;//(0, 0)
	mp->print();

	mp = new myPoD;//(0, 0)
	mp->print();
	
	myPoint mpr = myPoint::rect(1, 2);
	myPoint mpp = myPoint::polar(1, 2);
	Fred fs[10];
	//Fred a[2] = {Fred(1, 2), Fred(3, 4)};
	Fred *pf = new Fred[3];
	std::string str;
	std::cout << str << endl;

	conversion l1;
	conversion l2(l1);
	std::cin >> str;
*/

}