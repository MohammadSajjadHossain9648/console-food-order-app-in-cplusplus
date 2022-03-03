#include<bits/stdc++.h>
using namespace std;

struct food
{
    int item;
    char type;
    int price;
    struct food* next;
};

int add()
{
    struct food *head, *ptr;

    int item[5]= {1,2,3,4,5};
    char type[5]= {'BIRIANI','CHICKEN KICURI','TEHERI','PEPSI','7UP'};
    int price[5]= {120,150,200,20,50};

    cout<<"item no: type -> price \n";

    for (int i=0; i<5; i++)
    {
        cout<<item[i]<<": "<<type[i]<<" -> "<<price[i]<<"/="<<"\n";
    }

    head = (struct food*)malloc(sizeof(struct food));
    ptr = (struct food*)malloc(sizeof(struct food));

    for(int i=0; i<5; i++)
    {
        if (head==NULL)
        {
            head->item = item[i];
            head->type = type[i];
            head->price = price[i];
            head->next = ptr;
        }
        else
        {
            ptr=new(struct food);
            ptr->item = item[i];
            ptr->type = type[i];
            ptr->price = price[i];
            ptr->next = NULL;
            cout<<ptr->price<<"\n";
        }
    }

    //cout<<head->item<<" : "<<head->type<<" ->"<<head->price<<"\n";

}
int main()
{
    int option;
    while(1)
    {
        cout<<"MENU :"<<endl;
        cout<<"1.  Add"<<endl;
        //cout<<"2.  Display"<<endl;
        //cout<<"3.  Search An Item"<<endl;
        cout<<"4. EXIT"<<endl;

        cin>>option;
        if(option==1)
            add();
        /*if(option==2)
            display();
        if(option==9)
            search_data();*/
        else if(option==4)
            return 0;

    }
    return 0;
}
