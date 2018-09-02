#include<iostream>
using namespace std;

// introduce the main function
int main ()
{

	cout<<" we will find out to print all even numbers between 1 to 100"<<endl;
// declare the variable,	
	int i=1;
	cout<<"let's get started "<<endl;

	while (i<=100)
	{
	if (i==2) {cout<<"All even numbers between 1 to 100 are listed below-"<<endl;}
		if (i%2==0){
		cout<<i<<endl;
		i++;}
		else {i++;}
	}
// return the main function
return 0;
}
