#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;

void create(int a)
{
    head = new node;
    head->data = a;
    head->next = NULL;
}

void insert(int a)
{
    node *temp,*temp1;
    temp=new node;
    temp->data = a;
    temp->next = NULL;
    temp1= head->next;
    while(temp1->next) {
        temp1=temp1->next;
    }
    temp1->next = temp;
}

void display()
{
    node *temp;
    temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    create(5);
    insert(4);
    insert(3);
    display();
}