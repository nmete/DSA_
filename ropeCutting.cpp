#include<iostream>

using namespace std;


int rop(int n, int a,int b, int c)
{
	// base  case
	if(n == 0)
	{
           return 0;
	}

	if(n<=-1)
	{
		return -1;
	}
    
    int res = max(rop(n-a,a,b,c),max((n-b,a,b,c),(n-c,a,b,c)));
    
    if(res == -1)
    {
    	return -1;
    }

    return res+1;

}


int main()
{
    int n,a,b,c;
    
    cin>>n>>a>>b>>c;

    cout<<rop(n,a,b,c);
	return 0;
}