/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////////////////////
//  Function name:  InsertFirst
//  Description:    It use to insert the element at  first position in 
//                  the linkedlist.
//  Input:          pointer,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)   
    {
        *Head = newn;
    }
    else               
    {
        newn -> next = *Head;
        *Head = newn; 
    }
}
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to Display elements in the linkedlist.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////////////////////////
//  Function name:  MultiplyByTwo
//  Description:    It use to multiply  each element in the linklist by 2.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void MultiplyByTwo(PPNODE Head)
{
    PNODE temp = NULL;

    temp = *Head;
    printf("Linklist after multiplication:\n");
    while(temp != NULL)
    {
        temp -> data = (temp ->data) * 2;
        printf("|%d|->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");

    
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;


    InsertFirst(&First,15);
    InsertFirst(&First,14);
    InsertFirst(&First,13);
    InsertFirst(&First,12);
    InsertFirst(&First,11);

    printf("Original linklist is:\n");
    Display(First);

    MultiplyByTwo(&First);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Original linklist is:
//|11|->|12|->|13|->|14|->|15|->NULL
//Linklist after multiplication:
//|22|->|24|->|26|->|28|->|30|->NULL
//
////////////////////////////////////////////////////////////////////////////////////

