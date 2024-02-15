#include<iostream>
using namespace std;
string sol[100];
bool ratMaize(int i , int j  , int r ,int c ,int arr[10][10])
{
        if(i == r-1 && j == c-1 && arr[i][j] == 1)
        {
        	sol[i][j]=1;
        	return true;
        }

        if(i <r && j <c && arr[i][j] == 1)
        {
         sol[i][j]=1;
        if(ratMaize(i+1,j,r,c,arr)){return true;}
        if(ratMaize(i,j+1,r,c,arr)){return true;}
        sol[i][j]=0;

        //return false;
        }

        return false;

}
int main()
{
    
    int r,c;
    cin>>r>>c;

    int arr[10][10];

    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
    	{
    		cin>>arr[i][j];
    	}
    }

    cout<<ratMaize(0,0,r,c,arr);

    cout<<endl;

    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
    	{
    		cout<<sol[i][j]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}