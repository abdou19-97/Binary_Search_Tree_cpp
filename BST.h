//BST header file
#ifndef  BST_B_EXISTS
#include <iostream>
using namespace std;

class BST
{
 //private members of the class
  private:
    int data;
    BST* left;
    BST* right;
  
  public:
    //function that store the blanced tree
    BST* Tnode(int data);

   //function that create the binary search tree
    BST* createBST(int arr[], int start, int end);
    
    //function that print the array inorder
    void Inorder(BST* node);
   
   //function that return k-th smallest
    BST* kSmallest(BST* root, int &k);
    
  //function that print k-th smallest
   void printSmallestKth(BST* node, int k);

};
#endif
