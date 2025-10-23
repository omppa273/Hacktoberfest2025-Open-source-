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
    ListNode* oddEvenList(ListNode* head) 
    {
         if (!head || !head->next) return head;

       ListNode *temp=head;
       vector<int> arr;
       while(temp!=NULL && temp->next!=NULL)
       {
          arr.push_back(temp->val);
          temp=temp->next->next;
       }    
       if(temp)arr.push_back(temp->val);

       temp=head->next;
       while(temp!=NULL && temp->next!=NULL)
       {
        arr.push_back(temp->val);
        temp=temp->next->next;
       }
       if(temp) arr.push_back(temp->val);

       int n=arr.size();
       temp=head;
       for(int i=0;i<n;i++)
       {
        temp->val=arr[i];
        temp=temp->next;
       }
       return head;
    }
};
