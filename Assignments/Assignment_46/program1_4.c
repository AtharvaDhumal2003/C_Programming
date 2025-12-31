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
//  Function name:  ReplaceNegative
//  Description:    It use to replace nrgative element by 0.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void ReplaceNegative(PPNODE Head)
{
    PNODE temp = NULL;

    temp = *Head;
    printf("Replaced Linklist is:\n");
    while(temp != NULL)
    {
       if((temp -> data) < 0)
       {
          temp -> data = 0;
       }
       printf("|%d|->",temp -> data);
       temp = temp -> next;
    }
    printf("NULL");
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,60);
    InsertFirst(&First,-51);
    InsertFirst(&First,40);
    InsertFirst(&First,-21);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    printf("Original linklist is:\n");
    Display(First);

    ReplaceNegative(&First);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Original linklist is:
//|11|->|20|->|-21|->|40|->|-51|->|60|->|101|->NULL
//Replaced Linklist is:
//|11|->|20|->|0|->|40|->|0|->|60|->|101|->NULL
////////////////////////////////////////////////////////////////////////////////////

