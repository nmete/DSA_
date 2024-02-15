#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;

	node(int d){
		data = d;
		left =NULL;
		right= NULL;
	}

};

node *buildTree(node *root)
{
	int d;
	cin>>d;

	if(d == -1)
	{
		return NULL;
	}

	root = new node(d);
	root->left =buildTree(root->left);
	root->right =buildTree(root->right);

	return root;
}

void print(node *root)
{
    if(root == NULL)
    {
    	return;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main()
{

    node *root;

    root = buildTree(root);
    print(root);
	return 0;
}