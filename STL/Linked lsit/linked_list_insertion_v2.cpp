#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *insertAtfirst(struct node *head, int data)
{
    struct node *ptr = new node;

    ptr->next = head;
    ptr->data = data;

    return ptr;
}

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = new node;

    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = new node;

    ptr->data = data;

    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node *insertafternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = new node;

    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;

    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // C++ memory allocation using new
    head = new node;
    second = new node;
    third = new node;

    head->data = 10;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 24;
    third->next = NULL;

    linkedlistTraversal(head);

    cout << "------------------after--------------" << endl;

    // head = insertAtIndex(head, 56, 1);

    // head = insertAtfirst(head, 33);

    // head = insertAtEnd(head, 25);

    head = insertafternode(head, second, 45);

    linkedlistTraversal(head);

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}