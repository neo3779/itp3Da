#include <stdio.h>
#include <stdlib.h>

typedef struct listnode{
int idata;
struct listnode *next;
}LISTNODE;

LISTNODE *makenewitem(int i);
void printlist(LISTNODE *head);
LISTNODE *append(int i,LISTNODE *head);
void insert(int i, LISTNODE *head);

int i;

int main(int argc, char **argv)
{
	LISTNODE *listhead,*listend,*newitem;
	//create the head of the list
	listhead=makenewitem(0);
	//with no other items in the list,
	//the head is the end!
	listend=listhead;
	listend=append(1,listhead);
	printlist(listhead);
	listend=append(2,listhead);
	printlist(listhead);

	for (i = 0; i = 100; i++)
	{
		listend=append(i,listhead);
	}
	printlist(listhead);
	
	return 1;
}

LISTNODE *makenewitem(int i){
	LISTNODE *tnewitem;
	tnewitem=(LISTNODE *)malloc(sizeof(LISTNODE));
	tnewitem->idata=i;
	tnewitem->next=NULL;
	return tnewitem;
}
void printlist(LISTNODE *head){
	LISTNODE *counter;
	
	for(counter=head;counter!=NULL;counter=counter->next)
	{
	printf("idata=%d\n",counter->idata);
	}

	getchar();
}
LISTNODE *append(int i,LISTNODE *head)
{
	LISTNODE *counter,*tnewitem;
	tnewitem=makenewitem(i);

	for(counter=head;counter->next!=NULL;counter=counter->next);

	counter->next=tnewitem;

	return counter->next;
}


