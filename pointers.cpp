#include<iostream>
using namespace std;

main()
{
	int a =5;
	int *q = &a;
	int *w = q;
	
	if(q==w)
	cout << "here i am";
}
