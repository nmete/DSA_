#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(int c,int o,vector<string>&arr,string op){
    
      if(o ==0 && c == 0)
      {
      	arr.push_back(op);
      	return;
      }

        if(o != 0)
        {
      	    solve(c,o-1,arr,op+'(');
        }
        
        if(o < c)
      	  solve(c-1,o,arr,op+')');
    

}
int main()
{
    vector<string>arr;

     int n, num;
     cin>>n;


     solve(n,n,arr,"");
     
     for(int i=0;i<arr.size();i++)
     {
     	cout<<arr[i]<<" ";
     }


	return 0;
}