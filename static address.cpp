#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i < 5;i++)
	{
		static int z=0;
		cout << &i<< endl;
		cout << &z << endl;
	}
	
	
	for(int i=0;i < 5;i++)
	{
		static int z;
		z = 0;
		z++;
		cout << &z << '\t' << z << endl;
	
	
	
	
}

return 0;
}
