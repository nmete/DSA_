#include<iostream>
#include<vector>
using namespace std;

struct node{
			int  data;
			node *left;
			node *right;

			node(int d)
			{
			    data = d;
            }
};

node * buildTree()
{
	int d;
	cin>>d;

	if(d == -1)
	{
		return NULL;
	}

	node *root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}


void serializeHelp(node *root,vector<int> &serialize)
{
	if(root == NULL)
	{
		
		return;
	}

	serializeHelp(root->left,serialize);
    serialize.push_back(root->data);
	serializeHelp(root->right,serialize);

}

node * deserialize(vector<int> serialize , int & index)
{

       if(serialize.size() == index)
       {
       	return NULL;
       }

       int val = serialize[index++];

       if(val == -1)
       {
       	return NULL;
       }

       node *root = new node(val);
       root->left = deserialize(serialize,index);
       root->right = deserialize(serialize,index);

       return root;

}

void inorder(node *root)
{
   if(root==NULL)
   {
   	return;
   }

   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

int main()
{
    node * root;
    vector<int> serialize;
    root= buildTree();

   serializeHelp(root,serialize);

    cout<<"serialised o/p \n";
    for(int i=0;i<serialize.size();i++)
    {
    	cout<<serialize[i]<<" ";
    }
    cout<<endl;
    
    node *root1;
    int index=0;

    root1 = deserialize(serialize, index);
     inorder(root);



	return 0 ;
}