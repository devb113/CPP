#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b, c;
	cin>>a>>b>>c;
	int test = b * b -(4 * a * c);
	if(test == 0){
		cout<<"Real and Equal"<<endl<<(-b + sqrt(b*b -(4 * a * c)))/2 * a <<' '<<(-b - sqrt(b*b -(4 * a * c)))/2 * a;

	}else if(test > 0){
        cout<<"Real and Distinct"<<endl;
        int root1 = (-b + sqrt(b * b -(4 * a * c))) / 2 * a;
        int root2 = (-b - sqrt(b * b -(4 * a * c))) / 2 * a;
        if(root1 < root2){
            cout<<root1<<" "<<root2;
        }else{
            cout<<root2<<" "<<root1;
        }
    }else{
        cout<<"Imaginary";
    }

	return 0;
}