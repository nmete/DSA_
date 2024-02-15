#include<bits/stdc++.h>

using namespace std;

void subsets(string s, string op,set<string>& ans)
{

	
      if(s.length()==0)
      {
      	ans.insert(op);
      	return;
      }
      
      if(isalpha(s[0]))
      {
              subsets(s.substr(1),op+((char)tolower(s[0])),ans);
              subsets(s.substr(1),op+(char)toupper(s[0]),ans);

      }
      else
      {

            subsets(s.substr(1),op+s[0],ans);
      }
}
int main()
{
    string str;
    set<string> ans;

    cin>>str;

    subsets(str,"",ans);
    cout << endl;
     
    for (auto itr = ans.begin(); itr != ans.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
	return 0;
}