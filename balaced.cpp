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

int height(node *root)
{
	if(root == NULL)
	{
		return -1;
	}

	return max(height(root->left), height(root->right))+1;

}
bool balanced(node *root)
{

	// time complexity : O(n)
	// space complexity : O(h)
      if(root == NULL)
      {
      	return true;
      }
      int lefth,righth;

      if(root->left != NULL)
      {
      	  lefth = height(root->left); 
      }

      if(root->right != NULL)
      {
      	righth = height(root->right);
      }

      if(lefth == righth || abs(lefth-righth)==1 )
      {
      	return true;
      }

      return false;
}

int balacedEfficient(node *root)
{
    
    // time O(n)

     if(root == NULL)
     {
      return 0;
     }

     int lh = balacedEfficient(root->left);
     if(lh == -1)
     {
      return -1;
     }

      int rh = balacedEfficient(root->right);
      if(rh == -1)
      {
        return -1;
      }

      if(abs(rh-lh) > 1)
      {
        return -1;
      }

      return max(lh,rh)+1;
    
}

int main()
{
    node *root;
    root=build();
    stack<int> st;

    cout<<balacedEfficient(root);

    while(!st.empty())
    {
    	cout<<st.top()<<" ";
    	st.pop();
    }

	return 0;
}

