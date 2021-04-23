#include<iostream>
#include<algorithm>
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int n){
        data = n;
        left=NULL;
        right=NULL;
    }
};

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return std::max(lh,rh)+1;
}

bool isBalanced(Node* root){
    if(root == NULL)
        return true;
    if(isBalanced(root->left) == false)
        return false;
    if(isBalanced(root->right) == false)
        return false;
    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <=1){
        return true;
    }else{
        return false;
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
  //  root->left->left = new Node(4);
  //  root->left->left->left = new Node (5);

    std::cout<<"root is :"<<root->data<<"\n";
    std::cout<<"root left is :"<<root->left->data<<"\n";
    std::cout<<"root right is :"<<root->right->data<<"\n";

    if(isBalanced(root)){
        std::cout<<"Balanced Tree"<<"\n";
    }else{
        std::cout<<"unbalaced Tree"<<"\n";
    }

    return 0;
}
