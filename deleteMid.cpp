#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void deleteM(stack<int> &arr, int mid)
{
      if(mid == 1)
      {
      	  arr.pop();
      	  return;
      }
     
       int val = arr.top();;
       arr.pop();
       deleteM(arr,mid-1);
       arr.push(val);


}


void deleteMid(stack<int>&arr)
{
     
     int mid = arr.size()/2 +1;

     

     deleteM(arr,mid);
}


int main()
{
     stack<int>arr;

     int n, num;
     cin>>n;

     for(int i=0;i<n;i++)
     {  
     	cin>>num;
     	arr.push(num);
     }

     deleteMid(arr);

    cout<<endl<<endl;
     while(!arr.empty())
     {
      cout<<arr.top()<<endl;
      arr.pop();
     }
	return 0;
}