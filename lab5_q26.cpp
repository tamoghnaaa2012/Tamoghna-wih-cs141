#include<iostream>
using namespace std;
// introduce the main function
int main ()
{
	cout<<"lets get started, we will be finding out to print all odd numbers between 1 to 100"<<endl;
// declare the variable,	
	int i=1;
	
	while (i<=100)
	{
	if (i==2) {cout<<"All odd numbers between 1 to 100 are listed below-"<<endl;}
		if (i%2==0){
				i++;}
		else {cout<<i<<endl;
			i++;}
	}
// return the main function
	return 0;
}
