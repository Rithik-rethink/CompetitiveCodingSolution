#include<bits/stdc++.h>
using namespace std;

class Node {
    public: int data;
            Node* left;
            Node* right;
            Node(int info){
                data = info;
                left = NULL;
                right = NULL;
            }
            ~Node(){
                delete left;
                delete right;
            }
};

int size(Node* root , int height){
    if(root == NULL){
        return height;
    }
    height += 1;
    int a = size(root->left , height);
    int b = size(root->right , height);
    // cout<<a<<" "<<b<<endl;
    return a;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int height = 0;
    height = size(root,height);
    cout<<"Max height of tree = "<<height<<endl;
}