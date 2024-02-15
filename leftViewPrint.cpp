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

void leftviewPrint(node * root , int level)
{

	// time complexity :O(N)
	// space complexity : O(H)
	static int maxlevel=0;
	if(root == NULL)
	{
		return NULL;
	}

	if(maxlevel < level)
	{
		cout<<root->data<<" ";
		maxlevel = level;
	}

	leftviewPrint(root->left,level+1);
	leftviewPrint(root->right,level+1);

}

int main()
{
    node *root;
    root=build();
    stack<int> st;

    leftviewPrint(root,1);

    while(!st.empty())
    {
    	cout<<st.top()<<" ";
    	st.pop();
    }

	return 0;
}

