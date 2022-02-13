//
//  main.cpp
//  q6-Delete a given Node when a node is given.(0(1) solution)
//
//  Created by vatsal nanda on 13/02/22.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp=node->next;
        node->val=node->next->val;
        node->next=temp->next;
        delete(temp);
            
    }
};
