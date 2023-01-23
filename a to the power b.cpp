#include<iostream>
using namespace std;
main()
{
	int a,b;
	cin>>a>>b;
	int product=1;
	for(int i=1;i<=b;i++)
	{
		product=product*a;
	}
	cout<<product;
}
