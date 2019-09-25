#include<stdio.h>
#include<iostream>
using namespace std;
//assas
int main()
{
	int x=20,y=35;
	x = y++ + x++;
	y = ++y + ++x;
	cout << "x: " << x << "\ny: "<< y;
	
	
	return 0;
		
}
