#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct food
{
    int item;
    char name;
    int price;
    struct food* next;

};
void display()
{
    struct food *head, *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%c\n",ptr);
        ptr=ptr->next;
    }
}

int main()
{
    int i;
    struct food *head, *ptr;

    int item[5]= {1,2,3,4,5};
    char name[5]= {'BIRIANI','CHICKEN KICURI','TEHERI','PEPSI','7UP'};
    int price[5]= {120,150,200,20,50};

    /*for (i=0; i<5; i++)
    {
        printf("item no : ");
        printf("%d\n",item[i]);
        printf("name :");
        printf("%c\n",name[i]);
        printf("price :");
        printf("%d\n\n",price[i]);
    }*/

    head = (struct food*)malloc(sizeof(struct food));

    head->name=malloc(strlen(name));

    head->item = item[0];
    head->name=name[0];
    head->price = price[0];
    head->next = NULL;

    printf("item no : ");
    printf("%d\n",head->item);
    printf("name :");
    printf("%c\n",head->name);
    printf("price :");
    printf("%d\n\n",head->price);


    ptr = (struct food*)malloc(sizeof(struct food));

    head->next=ptr;

    for(i=1; i<5; i++)
    {
        ptr->name=malloc(strlen(name));

        ptr->item =item[i];
        ptr->name=name[i];
        ptr->price = price[i];
        ptr->next = NULL;

        printf("item no : ");
        printf("%d\n",ptr->item);
        printf("name :");
        printf("%c\n",ptr->name);
        printf("price :");
        printf("%d\n\n",ptr->price);
    }

    display();

    return 0;
}

