

// Add two numbers


 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	
        static int carry = 0;
        ListNode *l3 = new ListNode;
        if( l1==NULL && l2==NULL )
        {
            if(carry == 1)
                l3->val = carry;
            else return NULL;
        }
        else if(l1==NULL||l2==NULL)
        {
            if(l1==NULL)
            {
                l3->val = (l2->val+carry) % 10;
                carry = (l2->val+carry) / 10;
                l3->next = addTwoNumbers(l1,l2->next);
            }
            else
            {
                l3->val = (l1->val+carry) % 10;
                carry = (l1->val+carry) / 10;
                l3->next = addTwoNumbers(l1->next,l2);
            }
        }
        
        else 
        {
            l3->val = (l1->val+l2->val+carry) % 10;
            carry = (l1->val+l2->val+carry) / 10;
            l3->next = addTwoNumbers(l1->next,l2->next);
        }
    
        return l3;
    }