// Problem: Remove all occurences of duplicates in a linked list

// Given a sorted linked list, delete all nodes that have duplicate numbers (all occurrences), leaving only numbers that appear once in the original list, and return the head of the modified linked list. 

// Examples:

// Input: Linked List = 23->28->28->35->49->49->53->53
// Output: 23 35
// Explanation: The duplicate numbers are 28, 49 and 53 which are removed from the list.

// Input: Linked List = 11->11->11->11->75->75
// Output: Empty list
// Explanation: All the nodes in the linked list have duplicates. Hence the resultant list would be empty.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ size(list) ≤ 10^5

// Approach:
//  Use 3 pointers approach
//  if head is null or head->next is null then return head
//  create 3 pointers: prev=null, curr=head, next =next
//  traverse so that while next is not null compare and do operations
//  while curr data and next data is equal keep moving the next pointer
//  now compare if prev is still aty the starting position, if it is then move it
//  and also in the else block just keep moving
// finally return head

// T.C: O(n)
// S.C: O(1)

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};


Node* removeAllDuplicates(struct Node* head) {
        // code here
        if(head==NULL or head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* next=head->next;
        while(next!=NULL){
            if(curr->data==next->data){
                while(next!=NULL and curr->data==next->data){
                    next=next->next;
                }
                if(prev==NULL){
                    head=curr=next;
                }
                else{
                    prev->next=next;
                    curr=next;
                }
            }
            else{
                prev=curr;
                curr=next;
            }
            if(next!=NULL){
                next=next->next;
            }
        }
        return head;
    }