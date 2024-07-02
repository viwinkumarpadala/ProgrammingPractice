// Question: Make Binary Tree From Linked List

// Given a Linked List Representation of Complete Binary Tree. The task is to construct the Binary tree and print the level order traversal of the Binary tree. 
// Note: The complete binary tree is represented as a linked list in a way where if the root node is stored at position i, its left, and right children are stored at position 2*i+1, and 2*i+2 respectively. H is the height of the tree and this space is used implicitly for the recursion stack.

// Examples:

// Input: n = 5, k = 1->2->3->4->5
// Output: 1 2 3 4 5
// Explanation: The tree would look like
//       1
//     /   \
//    2     3
//  /  \
// 4   5
// Now, the level order traversal of
// the above tree is 1 2 3 4 5.
// Input: n = 5, k = 5->4->3->2->1
// Output: 5 4 3 2 1
// Explanation: The tree would look like
//      5
//    /  \
//   4    3
//  / \
// 2   1
// Now, the level order traversal of
// the above tree is 5 4 3 2 1.

// Approach: 
// 1 : Create an array by traversing the linked list elements and build a tree.
// T.C: O(N), S.C:O(N)
// 2. use a queue, everytime enqueue a element, dequeue the top, and add children to it, and then enqueue the children
// repeat until the queue is empty
// T.C: O(N), S.C:O(N)

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

// Approach 1

TreeNode* Build(vector<int>&arr, int ind){
    
    if(ind>=arr.size()){
        return NULL;
    }
    TreeNode* node=new TreeNode(arr[ind]);
    node->left=Build(arr,2*ind+1);
    node->right=Build(arr,2*ind+2);
    return node;
    
}

// Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    // Your code here
    vector<int>arr;
    while(head->next!=NULL){
        arr.push_back(head->data);
        head=head->next;
    }
    arr.push_back(head->data);
    root=Build(arr,0);
    return;
}

// Approach 2

void convert2(Node *head, TreeNode *&root) {
   queue<TreeNode*>q;

    if(head==NULL){
        root=NULL;
        return;
    }
    else{
        root=new TreeNode(head->data);
        q.push(root);
        head=head->next;
    }
    while(head){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* left=NULL;
        TreeNode* right=NULL;
        left=new TreeNode(head->data);
        head=head->next;
        q.push(left);
        if(head){
            right=new TreeNode(head->data);
            head=head->next;
            q.push(right);
        }
        temp->left=left;
        temp->right=right;
    }
}