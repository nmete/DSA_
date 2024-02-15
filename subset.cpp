#include<bits/stdc++.h>

using namespace std;

void subsets(string s, string op, int i)
{

	
      if(i>=s.length())
      {
      	cout<<op<<" ";
      	return;
      }

      subsets(s,op,i+1);
      subsets(s,op+s[i],i+1);
}
int main()
{
    string str;

    cin>>str;

    subsets(str,"",0);

	return 0;
}