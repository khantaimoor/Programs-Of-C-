#include<iostream>
using namespace std;
 
class Node {

    public:
    int data,height;
    Node *left, *right;

    Node (int value )
    {
      data = value;
      height = 1;
      left = right = NULL;
    }


};

int getHeight (Node *root )
{
    if (!root)
    return 0;
    else 
    return root->height;
}
 
 int  getBalance(Node *root)
 {
    return getHeight(root->left) - getHeight(root->right);
 }
  
   //RIGHT ROTATION
   Node* rightRotation (Node *root)
  {
     Node *child =root->left;
     Node *childRight = child-> right;

    child->right = root;
    root->left = childRight;

    //UPdATE the Height
    root->height =1+  max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;


  }   
    
      
   //LEFT  ROTATION
   Node* leftRotation (Node *root)
  {
      Node *child = root->right;
      Node *childleft = child-> left;

      child->left = root;
      root->right = childleft;

      root->height =1+  max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
  }

Node* insert (Node *root,int key)
{
    //dose not exist
    if (!root)
    return new Node (key);
      
      //IF EXIST
      if (key <root->data)   //Left side 
      root->left = insert(root->left,key);

      else if (key > root->data)   // right sidee
      root->right= insert(root->right,key);

      else 
      return root; // DUPLICATE ELEMENTS ARE NOT ALLOWED

   //UPDATE HEIGHT

   root-> height = 1+ max(getHeight(root->left ) , getHeight ( root->right));
   
      //BALANCING CHECK
   int balance = getBalance(root);

   //LEFT LEFT CASE
   if (balance>1 && key<root->left->data)
    return rightRotation(root);

   //RIGHT RIGHT CASE 
  else if (balance <-1 && root->right->data<key)
   return leftRotation(root);

  //LEFT RIGHT CASE 
  else if (balance >1 && key>root->left->data)
{
     root->left = leftRotation(root->left);
   return rightRotation(root);

}    
  //RIGHT LEFT CASE
  else if (balance <-1 && root->right->data>key)
   {
    root-> right = rightRotation(root->right);
    return leftRotation(root);
   }
  //NO BALANCING 
  else 
  return root;



}

void preorder ( Node *root)
{
  if (!root)
  return ;

  cout << root->data<<endl;
  preorder(root->left);
  preorder(root->right);
}

void InOrder(Node *root)
{
  if (!root)
  return ;

  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);


}


int main()
{
  Node *root = NULL;

 root = insert (root,10);
 root = insert (root,20);
 root = insert (root,30);
 root = insert (root,50);
 root = insert (root,70);
 root = insert (root,5);
 root = insert (root,100);
  root = insert (root,95);

  cout << "PreOrder"<<endl;
  preorder(root);

   cout << "InOrder"<<endl;
   InOrder(root);


}


