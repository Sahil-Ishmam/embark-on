#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
void insert_at_tail(Node*&head,int value)
{
    Node*newnode = new Node(value);
    if(head==NULL)
    {
        head = newnode;
        return ;
    }
    Node*temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

}
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            a = -1;
        }
        insert_at_tail(head,a);

    }
    {

//////displaying linear linked list
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->val;
            if(temp->next!=NULL)
            {
                cout<<" -> ";
            }
            temp = temp->next;
        }
        cout<<endl;

    }
    return 0;
}


