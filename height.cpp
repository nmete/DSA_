#include<iostream>
using namespace std;


struct node{
  int d;
  node *left;
  node *right;
  node(int d)
  {
  	this->d = d;
  }
};

node *build()
{
    int d;
    cin>>d;
    if(d == -1)
    {
    	return NULL;
    }

    node *root = new node(d);
    root->left= build();
    root->right = build();

    return root;
}

void inorder(node *root)
{

	 // time complexity :O(n)
	// space complecity :O(h)
     if(root == NULL)
     {
     	return;
     }
     inorder(root->left);
     cout<<root->d<<" ";
     inorder(root->right);

}
 

int height(node *root)
{

	 // time complexity :O(n)
	// space complecity :O(h) 


    if(root==NULL)
    {
    	return 0;
    }

    return max(height(root->left), height(root->right))+1;

}


void printNodeAtKth(node *root , int k)
{

	// space O(h)
	// Best case O(1)
	// worst case O(n)
	if(root == NULL)
	{
		return;
	}
    if(k ==0)
    {
    	cout<<root->d<<" ";
    }
    printNodeAtKth(root->left, k-1);
    printNodeAtKth(root->right,k-1);
}
int main()
{
    node *root;
    int k;


    root= build();
    inorder(root);
    //cout<<height(root);
    cin>>k;

    cout<<endl;

    printNodeAtKth(root,k);
	return 0;
}