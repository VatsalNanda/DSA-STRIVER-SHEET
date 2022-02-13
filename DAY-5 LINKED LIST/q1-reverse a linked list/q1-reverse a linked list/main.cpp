//
//  main.cpp
//  q1-reverse a linked list
//
//  Created by vatsal nanda on 13/02/22.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=NULL;
        ListNode* nex=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL)
        {
            nex = curr->next;
  
            
            curr->next = prev;
  
            
            prev = curr;
            curr = nex;
            
        }
        
        head=prev;
        
        return head;
        
    }
};
