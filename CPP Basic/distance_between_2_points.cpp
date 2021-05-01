#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main () {
	int x1, x2, y1, y2;
	cin>>x1>>x2;
	cin>>y1>>y2;
	float dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<fixed<<setprecision(2)<<dis;
	return 0;
}