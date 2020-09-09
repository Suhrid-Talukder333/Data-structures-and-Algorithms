#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
}*first,*second,*last_1,*last_2;

void insrt_1(int value)
{
	node *t=new node;
	t->data=value;

		if(first==0)
		{
			last_1=t;
			first=t;
			t->next=0;
			return;
		}
		else
		{
			if(value>last_1->data)
			{
				last_1->next=t;
				t->next=0;
				last_1=t;
				return;
			}
			else if(value<first->data)
			{
				t->next=first;
				first=t;
				return;
			}
			else
			{
				node *p;
				p=first;
				while(p)
				{
					if(value<=(p->next)->data)
					{
						t->next=p->next;
						p->next=t;
						return;
					}
					else
					{
						p=p->next;
					}
				}
			}
		}

}
void insrt_2(int value)
{
	node *t=new node;
	t->data=value;

		if(second==0)
		{
			last_2=t;
			second=t;
			t->next=0;
			return;
		}
		else
		{
			if(value>last_2->data)
			{
				last_2->next=t;
				t->next=0;
				last_2=t;
				return;
			}
			else if(value<second->data)
			{
				t->next=second;
				second=t;
				return;
			}
			else
			{
				node *p;
				p=second;
				while(p)
				{
					if(value<=(p->next)->data)
					{
						t->next=p->next;
						p->next=t;
						return;
					}
					else
					{
						p=p->next;
					}
				}
			}
		}

}

void concate(node *p,node *f)
{
    p->next=f;
}

void display(node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main()
{
	insrt_1(1);
	insrt_1(0);
	insrt_1(12);
	insrt_1(10);
	insrt_1(4);
	insrt_2(3);
	insrt_2(9);
	insrt_2(6);
	insrt_2(7);

	display(first);
	cout<<endl;
	display(second);
	cout<<endl;
    concate(last_1,second);
	display(first);
	return 0;
}
