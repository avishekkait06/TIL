#include <bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr){
   while(ptr != NULL){
    printf("Element: %d \n",ptr->data);
    ptr = ptr->next ;}
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    head->data = 11000;
    head->next =second;

    second->data = 23;
    second->next = third;

    third->data = 24;
    third->next = NULL;


linkedlistTraversal(head);


    return 0;
}