#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
//reversing a array using stacks;
main()
{	char a = '{';
if(a==123)
printf("%d",a);
	int n;
	cout << "Enter a array size: ";
	cin>>n;
	cout << "Now please enter the values: ";
	int* arr = new int[n];
	stack <int> S;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
		S.push(arr[i]);
	}
	cout <<"\n\n";
	cout << "Your entered array is: ";
	for(int i=0; i<n;i++)
	cout <<arr[i] << " ";
	cout << "\nNow reversing the array....." << endl;
	for(int i=0; i<n;i++)
	{
		arr[i] = S.top();
		S.pop();
		cout << arr[i] << " ";
	}
}
