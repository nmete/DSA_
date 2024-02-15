#include<iostream>
using namespace std;
int jodep(int n, int k)
{
  if(n==1)
  {
  	return 0;
  }

  return ((jodep(n-1,k)+k)%n);
}
int main()
{
	int n,k;
	cin>>n>>k;
    cout<< jodep(n,k); 
	return 0;
}

