#include<bits/stdc++.h>
using namespace std;

struct node *new_node,*head,*tail,*temp,*current;

struct node
{
    int data;
    struct node *next;
};

int add(){
    int size=3;
    head=NULL;
    temp = (struct node *)malloc(sizeof(struct node));
	for (int i=0 ; i<size ; i++){
        temp=new(struct node);
        cin>>temp->data;
	    if (head == NULL){
            head=temp;
            temp->next = NULL;
	    }
	    else{
	        temp=temp;
	        temp->next = NULL;
	    }
	}
}
void display()
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
    int option;
    while(1)
    {
        cout<<"MENU :"<<endl;
        cout<<"1.  Add"<<endl;
        cout<<"2.  Display"<<endl;
        //cout<<"9.  Search An Item"<<endl;
        cout<<"3. EXIT"<<endl;


        cin>>option;
        if(option==1)
            add();
        if(option==2)
             display();
        /*if(option==9)
            search_data();*/
        else if(option==3)
            return 0;

    }
    return 0;
}
