/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0;
    int result,sum;

    struct ListNode* head=NULL;
    struct ListNode* tail=NULL;

    int digit1=0;
    int digit2=0;

    while(l1!=NULL||l2!=NULL)
    {
        if(l1!=NULL)
        digit1=l1->val;
        else
        digit1=0;

        if(l2!=NULL)
        digit2=l2->val;
        else
        digit2=0;

        sum=digit1+digit2+carry;
        result=sum%10;
        carry=sum/10;

        struct ListNode* newNode=malloc(sizeof(struct ListNode));

        newNode->val=result;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }

        if(l1!=NULL)
           l1=l1->next;
        
        if(l2!=NULL)
           l2=l2->next;

    }
    if(carry>0)
    {
        struct ListNode* newNode=malloc(sizeof(struct ListNode));
        newNode->val=carry;
        newNode->next=NULL;

        tail->next=newNode;
        tail=newNode;
    }
    return head;
}