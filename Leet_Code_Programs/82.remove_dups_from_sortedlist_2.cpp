class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *cur= head->next;
        if(head->val==cur->val)
        {
            while(cur!=NULL&&head->val==cur->val)
                cur = cur->next;
            head = cur;
            return deleteDuplicates(head);
        }
        else
            head->next = deleteDuplicates(cur);
        return head;
    }
};