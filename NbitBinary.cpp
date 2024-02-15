#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(int n, int z,int o,vector<string>&arr,string op){
    
      if( o+z == n)
      {
        arr.push_back(op);
        return;
      }

        if(o != n)
        {
      	    solve(n,z,o+1,arr,op+'1');
        }
        
        if(z <= o)
      	  solve(n,z+1,o,arr,op+'0');
    

}
int main()
{
    vector<string>arr;

     int n, num;
     cin>>n;


     solve(n, 0,0,arr,"");
     
     for(int i=0;i<arr.size();i++)
     {
     	cout<<arr[i]<<" ";
     }


	return 0;
}