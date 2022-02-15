//
//  main.cpp
//  q5-Add 2 numbets
//
//  Created by vatsal nanda on 15/02/22.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* trav;
       int sum=0,k=0;
        while(l1!=NULL || l2!=NULL || k!=0 ){
            sum=0;
         if(l1!=NULL){
            sum =sum+l1->val;
             l1=l1->next;
         }
         if(l2!=NULL){
            sum=sum+l2->val;
            l2=l2->next;
         }
            cout<<sum;
            sum+=k;
            int n=sum%10;
            k=sum/10;
            ListNode* temp=new ListNode;
            temp->val=n;
            temp->next=NULL;
            if(head==NULL){
                head=temp;
                trav=temp;
            }
            else{
                trav->next=temp;
                trav=trav->next;
            }
    }
        cout<<sum<<k;
        return head;
    }
};
