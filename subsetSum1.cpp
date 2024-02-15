#include<iostream>
using namespace std;

int subsetsum(int *arr, int n , int sum)
{
	if(n==0)
     return sum==0? 1: 0;

     return subsetsum(arr,n-1,sum)+subsetsum(arr,n-1,sum-arr[n-1]);
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
    cout<<subsetsum(arr,n,sum);

}