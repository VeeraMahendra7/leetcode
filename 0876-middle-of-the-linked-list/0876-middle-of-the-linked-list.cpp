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
        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        if(cnt%2 == 0){
            while(fast != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
        }else{
            while(fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        return slow;
        
    }
};