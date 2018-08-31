#include <iostream>
using namespace std;

int main()
{
	signed long n1 = 0;
	cout << "check wheather a number is positive,negative or zero:";
	cout << "input a number :";
	cin >> n1;
	if(n1 > 0)
	{
	   cout  << " the entered number is positive ";
	}
	else if (n1 < 0)
	{ 
	   cout << " the entered number is negative ";
	}
	else 
	{
	   std::cout << " The number is zero ";
	}
	return 0;
}
