#include<iostream>
#include<stack>
using namespace std;


void insert(stack<int>&arr, int val)
{
    if(arr.size()==0)
    {
    	arr.push(val);
    	return;
    }

    int temp = arr.top();
    arr.pop();

    insert(arr,val);
    arr.push(temp);

}
void reverse(stack<int> & arr )
{
       if(arr.size() == 0)
       {
       	return;
       }

       int val = arr.top();
       arr.pop();

       reverse(arr);

       insert(arr,val);
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

     reverse(arr);


     while(!arr.empty())
     {
      cout<<arr.top()<<endl;
      arr.pop();
     }
	return 0;
}