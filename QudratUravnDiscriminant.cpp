#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, c, D, x1, x2; 
	
	cout<<"a - ";          //���� a
	cin>>a;

	cout<<"b - ";          //���� b
	cin>>b;
	
	cout<<"c - ";          //���� c
	cin>>c;
	
	D= pow(b, 2)-4*a*c;
	
	cout<<"������������ - "<<D<<endl;
	
	if (D > 0) {
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		
		cout<<"x1 - "<<x1<<endl;
		cout<<"x2 - "<<x2<<endl;
	} 
	else if (D == 0) {
		x1 = (-b+sqrt(D))/(2*a);
		
		cout<<"x1 - "<<x1<<endl;
	}
	else {
		cout<<"��� ������"<<endl;
	}
	
	return 0;
}
