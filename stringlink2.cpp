#include<bits/stdc++.h>
using namespace std;
#define n 30

struct food *head, *ptr, *temp;

struct food
{
    int data;
    struct food* next;
};

int display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    int price[5]= {120,150,200,20,50};

    head=NULL;

     for(int i=0; i<5; i++)
        {
            temp=new(struct food);
            temp->data=price[i];
            temp->next=NULL;

            if(head==NULL)
            {
                head=temp;
                ptr=temp;
            }
            else
            {
                ptr->next=temp;
                ptr=temp;
            }
        }
        display();
}

