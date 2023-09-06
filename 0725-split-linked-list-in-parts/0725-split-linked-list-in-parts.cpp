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
    int getSize(ListNode* head){
        if(!head)   return 0;
        return 1+getSize(head->next);
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size=getSize(head);    
        int partSize = size/k, extra = size%k;
        vector<ListNode*> ans(k,NULL);
        ListNode* node=head, *temp;
        for(int i=0; node and i<k; i++, extra--){
            ans[i] = node;
            for(int j=0;node and j<partSize+(extra>0);j++){
                temp=node;
                node=node->next;
            }
            temp->next=NULL;
        }
        return ans;
    }
};