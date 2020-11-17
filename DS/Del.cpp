#include<bits/stdc++.h>
using namespace std;

class Node {
    public: int data;
            Node* next;
            Node(int info){
                data = info;
                next = NULL;
            }
};
int main(){
    int n;
    cin>>n;
    Node* head;
    Node* tail;
    int i ;
    cin>>i;
    head = new Node(i);
    tail = head;
    int N= n;
    n -= 1;
    while(n){
        Node* temp;
        cin>>i;
        temp = new Node(i);
        tail->next = temp;
        tail = temp;
        n -= 1;
    }
    Node* cur;
    cur = head;
    Node* prev;
    int mid = N/2;
    mid -= 1;
    while(mid){
        prev = cur;
        cur = cur->next;
        mid -= 1;
    }
    prev->next = cur->next;
    cur = head;
    while(cur != NULL){
        cout<<cur->data<<endl;
        cur=cur->next;
    }
    return 0;
}