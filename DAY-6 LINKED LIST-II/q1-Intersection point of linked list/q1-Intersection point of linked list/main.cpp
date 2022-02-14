//
//  main.cpp
//  q1-Intersection point of linked list
//
//  Created by vatsal nanda on 14/02/22.
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode * curr1 = headA;
        ListNode * curr2 = headB;
       
        
         while(curr1!=curr2)
        {
            curr1=curr1? curr1->next: headB;
            curr2=curr2? curr2->next: headA;
             
             
        }
                
            
        
        return curr1;
        
    }
};
