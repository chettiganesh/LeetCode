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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = new ListNode(-1);
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            prev=slow;
            slow = slow->next;

        }
        ListNode* deleteNode = prev->next;
        prev->next=slow->next;
        delete deleteNode;
        
        return head;
        
    }
};