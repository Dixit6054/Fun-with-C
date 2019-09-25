#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int* a ,int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int piv(int* arr, int start, int end)		//i am taking the last element as the pivot
{
	int i,v,j = start;
	int pivot = arr[end];				//you want to put all stuff less than the pivot to one side
	for(i=start;i<=end;i++)		//start and end is the area in which you can work
	{
		if ( arr[i] < pivot )				//Now let me explain you. mycodeschool video makes a program for a caase when pivot is in last
		{									//this is for random pivot chocie
			swap(&arr[i],&arr[j]);
			j++; 
		}
		else if(arr[i] == pivot)
		{	
			swap(&arr[i],&arr[j]);
			v = j;
			j++;
		}
	
	}
	j--;
	swap(&arr[v],&arr[j]);
									//to get the pivot at the right place
	return j;
}


void quick_sort(int*arr,int start ,int end)
{
	if (start > end )return ;			//base condition
	int p = piv(arr,start,end);			//divide
	quick_sort(arr,start,p-1);			// conquer
	quick_sort(arr,p+1,end);
										//no combining step required
	
}


main()
{
	cout << "Enter the sise of a array: ";
	int n;
	cin>>n;
	int* arr = new int[n];
	cout << "Enter the elements: ";
	for(int i=0 ; i<=n-1 ; i++)
	cin>>arr[i];
/*	int i,j=999997,flag;
	// i have to fing the smallest postive absent in this array;
	quick_sort(arr,0,n-1);
	for(i=0 ; i<=n-1;i++)
	{
		if(arr[i-1] <=0 && arr[i] >0)
		{
			j=1;
			flag =1;
		}
		if(arr[i] > j)
		break;
		j++;
	}
	if (flag != 1)
	cout << "Here is your answer: "<<i+1;
	else
	cout << "Here is your answer: "<<j;
*/	
	int i=1;
	while(1)								//for (int i=0 ; i<= n-1 ; i++)
{	
	if(i==n-1)
	break;
	if (arr[i] > 0 && arr[i] < n-1)
	{
		if(arr[i]==i)
		i++;
		swap(&arr[i] , &arr[arr[i]] );
	}
	else
	{
		i++;
	}
	
}
int ans=1100;

for ( int i=1 ; i <= n-1 ; i++ )
if(arr[i] != i)
ans = i;

for ( int i=0 ; i <= n-1 ; i++ )
cout <<ans;	
	
	
	
	
	
	
	
	
	
	
}

