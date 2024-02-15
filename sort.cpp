#include<iostream>
#include<vector>
using namespace std;


void insert(vector<int> &arr, int temp)
{
      if(arr.size()==0 || arr[arr.size()-1] <= temp)
      {
      	  arr.push_back(temp);
      	  return;
      }
     
       int val = arr[arr.size()-1];
       arr.pop_back();
       insert(arr,temp);
       arr.push_back(val);


}


void sort1(vector<int>&arr)
{
     
     if(arr.size() == 1)
     {
     	return;
     }

     int temp = arr[arr.size()-1];
     arr.pop_back();
     sort1(arr);

     insert(arr,temp);
}


int main()
{
     vector<int>arr;

     int n, num;
     cin>>n;

     for(int i=0;i<n;i++)
     {  
     	cin>>num;
     	arr.push_back(num);
     }

     sort1(arr);


     for(int i=0;i<n;i++)
     {  
     	
     	cout<<arr[i]<<" ";
     }
	return 0;
}