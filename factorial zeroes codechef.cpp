#include <iostream>
using namespace std;

int main() 
{
    int n,x,c,sum=0;
    cin>>n;
    long int* arr = new long int[n];
    for(int i=0; i<n ; i++)
    {
        cin>>x;
        sum=0;
        int a=5;
        do
        {
            c = x/a;
            sum = sum + c;
            a = a*5;
        }
        while(c!=0);
        arr[i] = sum;
    }
    for(int i=0; i<n ; i++)
    cout << arr[i] << endl;
	return 0;
}

