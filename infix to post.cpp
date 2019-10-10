#include<iostream>
using namespace std;
#include<stack>
int pred(char);
int main()
{	
	int j=0;
	stack <char> S;
	char in[20] = "a/b*c-d*e+f";
	char post[20] ={0};
	for(int i=0; in[i] != NULL ; i++)
	{
		if( in[i]=='*' || in[i]=='/' || in[i]=='+' || in[i]=='-' )
		{
			if( !S.empty() && pred(in[i]) > pred(S.top()) )
			S.push(in[i]);
			
			else
			{	
				while( 	!S.empty() && pred(S.top()) >= pred(in[i]) )
				{
					post[j] = S.top();
					j++;
					S.pop(); 
				}
				S.push(in[i]);
			}
		}
		else
		{
			post[j] = in[i];
			j++;
		}
	}
	while(!S.empty())
	{
		post[j] = S.top();
		S.pop();
		j++;
	}
	post[j] = NULL;
	for(int i=0; post[i] != NULL ; i++)
	{
		cout << post[i] << " ";		
	}
}
int pred(char a)
{
	if( a=='*'||a=='/')
	return 2;
	if( a=='+' || a=='-')
	return 1;
}
