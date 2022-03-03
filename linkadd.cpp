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
    //int item[5]= {1,2,3,4,5};
    //char name[5]= {'BIRIANI','CHICKEN KICURI','TEHERI','PEPSI','7UP'};
    int price[5]= {120,150,200,20,50};

    head=NULL;

     for(int i=0; i<5; i++)
        {
            temp=new(struct food);
            cin>>temp->data;
            temp->next=NULL;

            if(head==NULL)
            {
                head=temp;
                cout<<head;
            }
            else
            {
                ptr->next=temp;
            }
            ptr=NULL;
        }
}

