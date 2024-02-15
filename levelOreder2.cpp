#include<iostream>
#include<queue>
using namespace std;

struct node {
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
     root->right=build();

     return root;
}


void level(node *root)
{

  // time O(n)
  // space O(n)
  if(root == NULL)
  {
  	return;
  }

  queue<node *> q;
  q.push(root);

  while(q.empty() == false)
  {
     int n= q.size();


     for(int i=0;i<n;i++)
     {
           node *curr = q.front();
           q.pop();
 
        cout<<curr->data<<" ";
        if(curr->left != NULL)q.push(curr->left);
        if(curr->right != NULL)q.push(curr->right);
     }

     cout<<endl;
  }
}

int main()
{

    node *root;
    root= build();
    level(root);
	return  0 ;
}