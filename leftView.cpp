#include<iostream>
#include<stack>
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

void leftview(node * root, int level,stack<int> &st)
{
     if(root==NULL)
     {
     	return;
     }

     if(level == st.size())
     {
     	st.push(root->data);
     }

     leftview(root->left,level+1, st);
     leftview(root->right,level+1,st);
}

int main()
{
    node *root;
    root=build();
    stack<int> st;

    leftview(root,0,st);

    while(!st.empty())
    {
    	cout<<st.top()<<" ";
    	st.pop();
    }

	return 0;
}

