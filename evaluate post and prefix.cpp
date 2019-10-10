#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
#include<stdlib.h>
//this is to tell you value of the poost or pre fix expression you write
int action(int ,int, int);
main()
{
	stack <int> S;
	char arr[100] ;
	int n,i,flag=1,a;
	cout<<"You want to write in prefix or postfix?(press 1 or 2 respectively): ";
	scan: cin>>n;
	if(n==2)
	{
		cout << "Enter your postfix expression: \n";
		scanf("%[^\n]",arr);							// GOD HELP THIS SHOULD WORKKKKKKKK 
		printf("%s",arr);										//the problem is that it senses 34 as 3 and 4 not as 34
		for(i=0 ; arr[i]!=NULL;i++)
		{	
			if(arr[i]==' ')
			{
				flag=1;
			}
		
			else if( arr[i]=='*' || arr[i]=='/' || arr[i]=='+' || arr[i]=='-' )
			{
				if(S.empty())break; 
				int b = S.top();
				S.pop();
				if(S.empty())break;
				int a = S.top();
				S.pop();
				S.push( action(a,b,arr[i]) );
				flag=1;												
			}														//char to int conversion
			else 
			{	
				if(flag==0)								// This is for getting more than one digit number 
				{
					a = S.top();
					S.pop();
					S.push(10*a + (arr[i] - '0'));
				}
				else 
				S.push(arr[i]-'0');							//CHECK THIS OUT PLEASE -'0' THING IT IS IMPORTANT	
				flag=0;
			}
			
		}
		if(S.empty())
		{
			cout << "Your expression is wrong.";
			return 1;
		}
		a = S.top();S.pop();										//to get the 234* condition
		if(S.empty())
		cout << a;
		else
		cout << "Your expression is wrong"; 
	}
	
	
	
	
	
	else if (n==1)
	{
		cout << "Enter your prefix expression: ";
		scanf("%s,",arr);					//the problem is that it senses 34 as 3 and 4 not as 34
		for(i=0 ; arr[i]!=NULL;i++);
		while(i!=-1)
		{
			if( arr[i]=='*' || arr[i]=='/' || arr[i]=='+' || arr[i]=='-' )
			{
				if(S.empty())break;
				int a = S.top();						//Check int a and int b they are opp. of postfix 
				S.pop();
				if(S.empty())break;					//these are to check your entered expression
				int b = S.top();
				S.pop();
				S.push( action(a,b,arr[i]) );				//CHECK THIS OUT PLEASE -'0' THING IT IS IMPORTANT		
			}														//char to int conversion
			else
			{	
				
				S.push(arr[i]-'0');
			}
			i--;
		}
		if(S.empty())
		{
			cout << "Your expression is wrong.";
			return 1;
		}
		a = S.top();
		if(S.empty())
		cout << a;
		else
		cout << "Your expression is wrong";
	}




	else
	{
		cout << "What the fuck are you entering.\n";
		cout << "Retry: ";
		goto scan;
	}
}
int action(int a, int b,int arr)
{
	if(arr=='*')
	return a*b;
	else if (arr=='-')
	return a-b;
	else if (arr=='+')
	return a+b;
	else if (arr=='/')
	return a/b;
}

bool check_post(int * arr)
{
	
}



