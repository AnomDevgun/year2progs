#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 long long int a,b,a1,b1,temp,l;
	 cin>>a>>b;
	 a1=a;
	 b1=b;
	 while(a!=0)
	 {
	  temp=a;
	  a=b%a;
	  b=temp;
	 }
	 cout<<b<<"\n";
	 l=(a1*b1)/b;
	 cout<<l<<"\n";
	}
	return 0;
}
