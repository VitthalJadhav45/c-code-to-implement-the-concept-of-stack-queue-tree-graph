#include<iostream>
using namespace std;

class node{
    public:
      int data;
      node* left;
      node* right;
};

node* insert(){
    node* tree=new node();
    
      cout<<"Enter the value of data or \ntype -1 for no insertion :"<<endl;
      int val;
      cin>>val;
      if(val==-1){
         return 0;
      }
      tree->data=val;


      cout<<"Enter left child of "<<val<<endl;
      tree->left=insert();
      cout<<"Enter right child of "<<val<<endl;
      tree->right=insert();

      return tree;
}
 void preorder(node* tree){
    if(tree!=NULL){
       cout<<tree->data<<" ";
       preorder(tree->left);
       preorder(tree->right);
    }
 }
void postOrder(node* tree){
  if(tree!=NULL){
    postOrder(tree->left);
    postOrder(tree->right);
    cout<<tree->data<<" ";
  }
}
void inOrder(node* tree){
  if(tree!=NULL){
    inOrder(tree->left);
    cout<<tree->data<<" ";
    inOrder(tree->right);
  }
}
int rangeSumBST(node* root, int low, int high) {
          if(root==NULL){
              return -1;
          }
         
        static int sum1=0;

          if(root->data >= low && root->data <= high){
              sum1+=root->data;
          }

          rangeSumBST(root->left,low,high);
          rangeSumBST(root->right,low,high);

          return sum1;
    }
int main(){
    node* p=NULL;
     p=insert();

    //  preorder(p);
    //  cout<<endl;
    //  postOrder(p);
    //  cout<<endl;
    //  inOrder(p);
    //  cout<<endl;

     cout<<rangeSumBST(p,6,10)<<endl;

    return 0;
}