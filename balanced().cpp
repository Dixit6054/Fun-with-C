#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
int pairq(int);
main()
{	int i=0,flag=0;
	stack <int> S;
	cout << "You have to write any expression: ";
	char arr[100];
	scanf("%s",arr);
	for (i=0 ; arr[i] !=NULL;i++)
	{	cout << "arr[i] " << arr[i]<<endl;
		if (arr[i]=='{' || arr[i]=='[' || arr[i]=='(' )
		S.push(arr[i]);
	
		if (arr[i]== '}' || arr[i]== ']' || arr[i]== ')' )	
		{	
			if(S.empty())							//you can also write it as if(!S.empty()) {.......rest in this if ;}
			{	
				flag=1;								//  flag is used to conquer the case in which input is just }  ; 
													//	here it breaks and prints that "your paranthesis are balanced" 
				break;
			}
			
			if( pairq(arr[i])== S.top() )
			S.pop();
			else
			{
				cout << "Something is wrong!!!\n";
				break;
			}
		}
	}
	if(S.empty()&&flag==0)
	cout << "Your paranthesis are balanced.";
	else
	cout << "You have messed it up somewhere";
	
}
int pairq(int a)			//using name pair gave an ambiguity error ;
{
	if (a==']')
	return '[';
	else if (a=='}')
	return '{';
	else if (a==')')
	return '(';
	return 0;
}
