//the cpp file
#include <iostream>
#include "BST.h"
using namespace std;

//this function allocate the nodes

BST* BST::Tnode(int data)
{
   BST* root = new BST();
   root->data = data;
   root->left = NULL;
   root->right = NULL;
   return root;
}

//this function build the binary tree
BST* BST::createBST(int arr[], int start, int end)
{
    //check if start > end
    if(start>end)
       return NULL; 
    //calculate the median of the array using 
    //the below formula 
    int mid = (start + end)/2;
    
    //store the value in the heap
    BST* root = Tnode(arr[mid]);
    //recursively set the left butree
    root->left = createBST(arr, start, mid - 1);
   //recursivly set the right subtree
    root->right = createBST(arr, mid + 1, end);

    return root;
}

//printing the tree inorder from the left subtree
//to the right subtree
void BST::Inorder(BST* node)
{
   if(!node)
      return;
   //recursivly print the left subtree
   Inorder(node->left);
  
   cout <<node->data<<" ";
   //recursivly print the right sub tree
   Inorder(node->right);
}  

//this function find the k-th smallest element
BST* BST::kSmallest(BST* root, int &k) //using &k to remember whatever changes are made by recursion call 
{
   //base case
  if(!root)
     return 0;
   
    //search in the left subtree
  left = kSmallest(root->left, k); 
    
  if(left)   //if the smallest k-th element in the left return left
     return left;
   
  k -= 1;           //decrease by 1
   
  if(k == 0)           //if k is zero return the root
     return root;   

  //otherwise go to the right subtree
  right = kSmallest(root->right, k);     
  return right;
}

//this function print the k-th smallest element   
void BST::printSmallestKth(BST* node, int k)
{
   
    BST* root = kSmallest(node, k);
   cout<<"K-th smallest is : " << root->data;
}
  
