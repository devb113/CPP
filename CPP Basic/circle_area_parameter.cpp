#include<iostream>
#include<iomanip>
using namespace std;
int main () {
	int d;
	cin>>d;
	double par = 3.14 * d;
	double area = (3.14 * d *d) / 4;
	
	cout<<fixed<<setprecision(2)<<par<<endl<<area;
	
	return 0;
}