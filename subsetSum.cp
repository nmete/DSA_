#include<iostream>
using namespace std;
int ct=0;

void subsetsum(int *arr, int n,int sum, int op)
{
	if(n==1)
	{
        if(sum==op)
        {
        	ct++;
        }
        return ;
	}
    subsetsum(arr,n-1,sum,op+arr[n-1]);
    subsetsum(arr,n-1,sum,op);
}

int main()
{
    int arr[100];
     int n , sum=0;
     cin>>n;
     cin>>sum;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    subsetsum(arr,arr.size(),sum,op);

    cout<<ct;
	return 0;
}