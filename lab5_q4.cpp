#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<" n enter the nuber;";
	cin>>n;
	if ((n%5==0)&&(n%11==0))
	{
	 cout<< "n its divisible by 5 and 11";
	}
	else 
	{
	 cout<< "n its not divisible by 5 and 11";
	}
	return 0;
}
