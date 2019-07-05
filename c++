#include<iostream>
using namespace std;
void main() {
	float c,f;//c=celsius f=fahrenheit
	cout << "enter celsius :";
	cin >> c;
	f = (1.8*c) + 32;
	cout << c << " celsius" << " = " << f << " fahrenheit" << endl;
	cout<<"The weather is"<<((f > 70) == 0 ? " cool" : " hot") << endl;
	



}
