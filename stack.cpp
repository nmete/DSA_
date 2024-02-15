#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void insert(stack<int> &arr, int temp)
{
      if(arr.size()==0 || arr.top() <= temp)
      {
      	  arr.push(temp);
      	  return;
      }
     
       int val = arr.top();;
       arr.pop();
       insert(arr,temp);
       arr.push(val);


}


void sort1(stack<int>&arr)
{
     
     if(arr.size() == 1)
     {
     	return;
     }

     int temp = arr.top();
     arr.pop();
     sort1(arr);

     insert(arr,temp);
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

     sort1(arr);


     while(!arr.empty())
     {
      cout<<arr.top()<<endl;
      arr.pop();
     }
	return 0;
}