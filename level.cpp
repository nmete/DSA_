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
  if(root == NULL)
  {
  	return;
  }

  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while(q.size() > 1)
  {
  	node *curr = q.front();
  	q.pop();

	  if(curr == NULL)
	  {
	  	cout<<endl;
	  	q.push(NULL);
	  	continue;
	  }
     
     cout<<curr->data<<" ";
     if(curr->left != NULL)
     {
     	q.push(curr->left);
     }

     if(curr->right != NULL)
     {
     	q.push(curr->right);
     }


}

}

int main()
{

    node *root;
    root= build();
    level(root);
	return  0 ;
}