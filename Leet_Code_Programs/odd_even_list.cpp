#include<iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode *next;
};
class Solution {
	private:
		
	ListNode *head = NULL,*tail = NULL;
	
	public:
	Solution() {}
	
	ListNode* get_head()
	{
		return head;
	}
	
	void insert(int val)
	{
		ListNode *temp = new ListNode;
		temp->val = val;
		temp->next = NULL;
		if(head==NULL)
		{
			head = temp;
			tail =  temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *odd = head,*even = head;
        ListNode *cur = head;
        ListNode *after = head;
        ListNode *firsteven = NULL;
        int count = 0;
        while(cur!=NULL)
        {
            count++;
            after = cur->next;
            if(count%2==0&&firsteven==NULL)
            {
                firsteven = even = cur;
            }
            if(count%2==0)
            {
                even->next = cur;
                even = even->next;
            }
            else
            {
                odd->next = cur;
                odd = odd->next;
            }
            cur = after;
        }
        odd->next = firsteven;
        even->next = NULL;
        return head;
        
    }
    
    void print(ListNode *head)
    {
    	ListNode *temp = head;
    	while(temp!=NULL)
    	{
    		cout<<temp->val<<ends;
    		temp = temp->next;
		}
	}
};


int main()
{
	int n;
	cin>>n;
	Solution s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	ListNode *head = s.oddEvenList(s.get_head());
	s.print(head);
}
