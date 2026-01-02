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
//  Function name:  ReplaceOdd
//  Description:    It use to replace Odd nubers in the linklist with 0.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void ReplaceOdd(PPNODE Head)
{
    PNODE temp = NULL;

    temp = *Head;
    printf("Replaced Linklist:\n");
    while(temp != NULL)
    {
        if((temp -> data)%2 !=0)
        {
            temp -> data = 0;
        }
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

    InsertFirst(&First,17);
    InsertFirst(&First,16);
    InsertFirst(&First,15);
    InsertFirst(&First,14);
    InsertFirst(&First,13);
    InsertFirst(&First,12);
    InsertFirst(&First,11);

    printf("Original linklist is:\n");
    Display(First);

    ReplaceOdd(&First);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Original linklist is:
//|11|->|12|->|13|->|14|->|15|->|16|->|17|->NULL
//Replaced Linklist:
//|0|->|12|->|0|->|14|->|0|->|16|->|0|->NULL
//
////////////////////////////////////////////////////////////////////////////////////

