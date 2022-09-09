#include <iostream>
using namespace std;

int main()
{
	int a;
	float phi=3.14;
	float L;
	
	cout<<"Masukkan jari jari lingkaran = ";
	cin>>a;
	L=phi * a * a;
	cin.ignore(0,'\n');
	
	cout<<"Luas lingkaran adalah : "<< L <<endl;
	
	
	return 0;
}
