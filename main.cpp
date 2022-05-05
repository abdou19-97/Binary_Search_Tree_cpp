//main.cpp
#include <iostream>
#include "BST.h"
using namespace std;
int main()
{ 
   BST b;
   int arr[] = {6, 17, 20, 41, 45, 52, 57, 65, 71, 76, 79, 87, 92, 95, 99};
   int size = sizeof(arr)/sizeof(arr[0]);   //size of the array
   BST *root = b.createBST(arr, 0, size-1);
   cout << "Blanced Binary Search Tree: "<<endl;
   b.Inorder(root);
   int k; 
  
   cout<<"\nEnter k: " <<endl;
   cin>>k;
   while(k)
  { 
     if(k < 0 || k > size){                   //check if the user input is greater or less than the size
       cout << "Out of range, try again" <<endl; 
       cin>>k;                            
     
   } else{
      b.printSmallestKth(root, k);       //call the k-smallest element 
      break;
    }
  }
  delete root;  //freeing the memory    
  
 return 0; 
}
