#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct node{
 int data;
 node *left;
 node *right;

 node(int d)
 { 
      data = d;
 }
};


node * build()
{
	int d;
	cin>>d;

	if(d == -1)
	{
		return NULL;
	}

	node *root = new node(d);
	root->left = build();
	root->right = build();

}

// iterative solutions 
void leftviewPrint(node * root)
{
    if(root == NULL)
    {
    	return;
    }

    queue<node *> q;
    q.push(root);

    while(q.empty() == false)
    {
    	int n = q.size();

          for(int i=0;i<n;i++)
          {
          	  node * cur = q.top();
              q.pop();

          	    if(i == 0)
          	    {
          	    	cout<<cur->data<<" ";
          	    }

          	    if(root->left != NULL) q.push(root->left);
          	    if(root->right != NULL) q.push(root->right);
          }
    }

}




int main()
{
    node *root;
    root=build();
    stack<int> st;

    leftviewPrint(root);

    while(!st.empty())
    {
    	cout<<st.top()<<" ";
    	st.pop();
    }

	return 0;
}

