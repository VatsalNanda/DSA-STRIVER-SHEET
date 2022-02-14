//
//  main.cpp
//  q2-Detect a cycle in a linked list
//
//  Created by vatsal nanda on 14/02/22.
//

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode * slow=head;
        ListNode * fast=head;
        
        while(fast!=NULL &&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
                return true;
        }
        
        return false;
    }
};
