#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct food *head, *ptr;
struct food
{
    int item;
    char *name;
    int price;
    struct food* next;
};

int main()
{
    head = (struct food*)malloc(sizeof(struct food));

    char foodname[] = "bi";
    head->name=malloc(strlen(foodname)+1);

    head->name="biriani";
    head->item = 1;
    head->price = 15;
    head->next = NULL;

    ptr = (struct food*)malloc(sizeof(struct food));

    char foodname2[] = "te";
    ptr->name=malloc(strlen(foodname2)+1);

    ptr->name="te";
    ptr->item =2;
    ptr->price = 17;
    ptr->next = NULL;

    head->next=ptr;
    printf("head name: %s, next name: %s\n", head->name, ptr->name);
    printf("head item: %d and head price: %d",head->item,head->price);

    return 0;
}
