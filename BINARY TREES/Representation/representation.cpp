#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node (int val){
        data = val;
        left = right = nullptr;
    }
};
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(8);

    cout << root->data;
    return 0;
}