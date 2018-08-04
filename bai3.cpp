#include <iostream>

using namespace std;

main()
{
	int a,b,c;
    cout << "Nhap lan luot 3 so nguyen a b c";
	cin >> a >> b >> c;
	if (a>b&&c)
	{
		cout << "a la so lon nhat";
	}
	else if (b>c)
	{
		cout << "b la so lon nhat";
	}
	else 
	{
		cout << "c la so lon nhat";
	}
}
