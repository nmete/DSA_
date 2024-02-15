#include<bits/stdc++.h>

using namespace std;

void subsets(string s, string op, int i,set<string>& ans)
{

	
      if(i>=s.length())
      {
      	ans.insert(op);
      	return;
      }

      subsets(s,op,i+1,ans);
      subsets(s,op+s[i],i+1,ans);
}
int main()
{
    string str;
    set<string> ans;

    cin>>str;

    subsets(str,"",0,ans);
    cout << endl;
     
    for (auto itr = ans.begin(); itr != ans.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
	return 0;
}