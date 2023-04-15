#include<bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int val;
    doublyNode*prev;
    doublyNode*next;
    doublyNode(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

struct get_duplicate
{
    int ar[1000];

};
void insert_at_tail(doublyNode*&head, int val)
{
    doublyNode*newnode = new doublyNode(val);
    if(head==NULL)
    {
        head = newnode;
        return ;
    }
    doublyNode *temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void insert_at_head(doublyNode*&head, int val)
{
    doublyNode *newnode = new doublyNode(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void display(doublyNode *n)
{
    while(n!=NULL)
    {
        cout<<n->val;
        if(n->next!=NULL)
        {
            cout<<" -> ";
        }
        n = n->next;
    }
}
int count_length(doublyNode *n)
{
    int cnt = 0;
    while(n!=NULL)
    {
        cnt++;
        n = n->next;
    }
    return cnt;
}
void insert_at_specific_position(doublyNode*&head,int val,int pos)
{
    int cnt = 0;
    doublyNode *temp = head;
    if(pos==1)
    {
        insert_at_head(head,val);
        return;
    }
    for(int i=0;i<pos-2;i++)
    {
        temp = temp->next;
    }
    doublyNode *newnode = new doublyNode(val);
    newnode->next  =temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    return;

}
int search_a_value_unique_list(doublyNode *&head, int searh_value)
{

//    if(head->val==searh_value) return 0;
    doublyNode*temp = head;
    int cnt = 0;
    if(head==NULL)
    {
        return -1;
    }
    while(temp!=NULL)
    {
        if(temp->val==searh_value)
        {

            return cnt;
        }
        cnt++;
        temp = temp->next;
    }
    return -1;

}
void Insertion_after_a_specific_value_Unique_List(doublyNode*head,int search_value,int val)
{
    int index = search_a_value_unique_list(head,search_value);

    if(index==-1)
    {
        cout<<"element not found!"<<endl;
    }
    else
    {
        if(index==0)
        {
            insert_at_specific_position(head,val,index+2);
        }
        else
        {
            insert_at_specific_position(head,val,index+2);

        }

    }
}
void Search_a_value_Duplication_enabled_List(doublyNode*&head,int search_value)
{
    int n_size = count_length(head);
    int position[n_size+1],k=1;
    int cnt = 1;
    doublyNode *temp = head;
    int flag = 0;
    while(temp!=NULL)
    {
        if(temp->val==search_value)
        {
            position[k] = cnt;
            k++;
            flag = 1;
        }
        temp = temp->next;
        cnt++;
    }
    if(flag==0)
    {
        cout<<"item not found in the linked list!!";
        return ;
    }
    else
    {
        position[0] = k;
        cout<<"position where the item found are: ";
        for(int i=1;i<position[0];i++)
        {
            cout<<position[i];
            if(i<position[0]-1) cout<<", ";
        }
        cout<<endl;
    }
    cout<<endl;

}
void deletion_at_head(doublyNode*&head)
{
    if(head==NULL)
    {
        return;
    }
    doublyNode *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next  =NULL;
    delete temp;
}
void deletion_at_tail(doublyNode *&head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        doublyNode *newnode = head;
        newnode->prev = NULL;
        delete newnode;
        return;
    }
    doublyNode *temp  = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
//    doublyNode *newnode = temp;
    doublyNode *next_node = temp->next;
    next_node->prev =NULL;
    delete next_node;
    temp->next = NULL;

}
int find_mid(Node*&head)
{

}


int main()
{
    doublyNode *head = NULL;
    int value, position;
    cout<<"choice 1: insertion at head"<<endl;
    cout<<"choice 2: insertion at tail"<<endl;
    cout<<"choice 3: countlength"<<endl;
    cout<<"choice 4: display"<<endl;
    cout<<"choice 5: insertion at specific position: "<<endl;
    cout<<"choice 6: Search a value (unique list)"<<endl;
    cout<<"Choice 7: insertion after a specific value "<<endl;
    cout<<"choice 8: Search a value duplicate enabled list :"<<endl;
    cout<<"choice 9: deletion at head:"<<endl;
    cout<<"choice 10: deletion at tail"<<endl;
    cout<<"choice 11: find mid "<<endl;
    cout<<">>- ";
    cout<<"next choice:";
    int choice;
    cin>>choice;
    while(choice!=0)
    {
        switch(choice)
        {
        case 1:
            cout<<"enter the value :";
            cin>>value;
            insert_at_head(head,value);
            break;
        case 2:
            cout<<"enter the value :";
            cin>>value;
            insert_at_tail(head,value);
            break;
        case 3:
            cout<<"length of the linked list :";
            cout<<count_length(head)<<endl;
            break;
        case 4:
            cout<<"Linked list: ";
            display(head);
            break;
        case 5:
            int pos;
            cout<<"enter the value :";
            cin>>value;
            cout<<"enter the position :";
            cin>>pos;
            insert_at_specific_position(head,value,pos);
            break;
        case 6:
            {
            int search_value;
            cout<<"enter value to search :";
            cin>>search_value;
            int index = search_a_value_unique_list(head,search_value);
            if(index!=-1) cout<<"value found at index :"<<index<<endl;
            else cout<<"Element not found "<<endl;
            break;
            }
        case 7:
            {
                cout<<"enter value to insert :";
                cin>>value;
                cout<<"enter value which after the insertion would occur:";
                int search_val;
                cin>>search_val;
                Insertion_after_a_specific_value_Unique_List(head,search_val,value);
                break;
            }
        case 8:
            {
                int search_value;
                cout<<"enter value to search :";
                cin>>search_value;
                Search_a_value_Duplication_enabled_List(head,search_value);
                break;

            }
        case 9:
            deletion_at_head(head);
            break;

        case 10:
            deletion_at_tail(head);
            break;
        case 11:
            find_mid(head);



        default:
            break;
        }
        cout<<endl;
        cout<<"next choice: ";
        cin>>choice;

    }


    return 0;
}


