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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> h1;
        stack<ListNode*> h2;
        ListNode* temp1=headA;
        ListNode* temp2 = headB;
        while(temp1!=nullptr){
            h1.push(temp1);
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            h2.push(temp2);
            temp2=temp2->next;
        }
        ListNode* ans =nullptr;
        while(!h1.empty()&&!h2.empty()){
            if(h1.top()==h2.top()){
                ans = h1.top();
                h1.pop();
                h2.pop();
            }else{
                break;
            }
        }
        return ans;
    }
};