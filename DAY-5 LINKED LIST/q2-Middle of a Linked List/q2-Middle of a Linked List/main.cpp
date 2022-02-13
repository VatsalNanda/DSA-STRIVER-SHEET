//
//  main.cpp
//  q2-Middle of a Linked List
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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
         while(fast!=NULL&&fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
         }
        
        return slow;
        
    }
};
