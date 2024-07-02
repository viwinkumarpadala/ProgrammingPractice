// Question: Linked List of strings forms a palindrome

// Given a linked list with string data, check whether the combined string formed is palindrome. If the combined string is palindrome then return true otherwise return false.

// Example:

// Input:
// a->bc->d->dcb->a
// Output : true
// Explanation: As string "abcddcba" is palindrome the function should return true.

// Input:
// a->bc->d->ba
// Output : false
// Explanation: As string "abcdba" is not palindrome the function should return false.

// Approach:
// 1) Traverse the linked list and store the string in a variable.
// 2) Check if it is a palindrome

// T.C:O(N)
// S.C:O(N)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

bool checkPalindrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    bool compute(Node* head) {
        // Your code goes here
        string s="";
        while(head){
            s+=head->data;
            head=head->next;
        }
        
        return checkPalindrome(s);
    }