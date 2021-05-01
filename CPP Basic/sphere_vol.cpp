#include<iostream>
#include<iomanip>
using namespace std;
int main () {
	int rad1;
	cin>>rad1;
	
	double vol = (4*3.14*rad1*rad1*rad1)/3;
	cout<<fixed<<setprecision(2)<<vol;
	
	return 0;
}

//we use double here in vol instead of float because

//Double is same as float but it has double precision than float like float has precision upto 6-7decimal places  and double has double precision so after rounding off a value of double datatype answer we get is more precise/accurate