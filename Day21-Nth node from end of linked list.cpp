#include<bits/stdc++.h>
using namespace std;

//problen=m link 
//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1



 struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
      Node*cur=head;
      Node *cur2=head;
      int t=0;
      while(n>t){
          t++;
          if(cur==0){
              return -1;
          }
          cur=cur->next;
      }
      while(cur){
          cur2=cur2->next;
          cur=cur->next;
      }
      return cur2->data;
}