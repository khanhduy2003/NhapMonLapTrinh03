#include <iostream>
#define max 100
using namespace std;

int main()
{
	int a=0;
	int n;
	cout << "Nhap so can tinh :" << endl;
	cin >> a;
	for (int i=1;i<=a;i++)
	n*=i;
	cout<<"Tong cac so tu 1 den "<<a<<" la : "<<n<<"\n";

	return 0;
}

