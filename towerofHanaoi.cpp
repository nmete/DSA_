#include<iostream>
using namespace std;

void tower(int n ,char a , char b, char c , int 
  &count)
{
           count++;
           if(n==1)
           {
           	cout<<"1 "<<a<<" ->"<<c<<"\n";
           	return;
           }

           tower(n-1,a,c,b,count);
           cout<<""<<n<< " "<<a<<" -> "<<c<<"\n";
           tower(n-1,b,a,c,count);
}
int main()
{
	int n;
  int count=0;
	cin>>n;

    tower(n,'A','B','C', count);

    cout<<count;
	return 0;
}