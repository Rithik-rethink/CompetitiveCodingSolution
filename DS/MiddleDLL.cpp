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
};

int main(){
    Node* head;
    Node* tail;
    Node* prev;
    int n;
    cin>>n;
    int i ;
    cin>>i;
    head = new Node(i);
    tail = head;
    int N = n;
    n -= 1;
    while(n){
        cin>>i;
        Node* temp;
        temp = new Node(i);
        tail->right = temp;
        tail->left = prev;
        prev = tail;
        tail = temp;
        n -= 1;
    }
    Node* cur = head;
    int mid= N / 2;
    mid -= 1;
    while(mid){
        cur = cur->right;
        mid -= 1;
    }
    cout<<cur->data<<endl;
}