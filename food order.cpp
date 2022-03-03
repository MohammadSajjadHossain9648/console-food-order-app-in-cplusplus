#include<bits/stdc++.h>
using namespace std;
#define array[30][30]

struct food *head, *ptr, *temp;

struct food
{
    int data;
    struct food* next;
};

int display()
{
    int num=0;
    int item[5]= {1,2,3,4,5};
    char name[5]= {'BIRIANI','CHICKEN KICURI','TEHERI','PEPSI','7UP'};

    cout<<"****FOOD MENU****\n";

    temp=head;

    for(int i=0; temp!=NULL; i++){
        cout<<item[i]<<":"<<name[i]<<"->"<<temp->data<<"/=\n";
        temp=temp->next;
    }

    cout<<endl;

}

int main()
{
    int opt;

    cout<<"Welcome to Online Food Court\n";
    cout<<"Have An Order\n";
    cout<<"1.Yes 2.No\n";
    cin>>opt;


    if(opt==1)
    {
        string a;
        cout<<"Please Give Your Name First\n";
        cin>>a;


        //linklist create here
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
    else if(opt==2)
    {
        cout<<"Thank You for Visiting\n";
    }
    else
    {
        cout<<"Invalid Choose and Press 1/2\n";
    }

    return 0;
}
