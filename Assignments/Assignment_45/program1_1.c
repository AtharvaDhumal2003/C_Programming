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
//  Function name:  DisplayOdd
//  Description:    It use to dispaly Odd elements in the linkedlist.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////
void DisplayOdd(PNODE Head)
{
    while(Head != NULL)
    {
        if((Head -> data) % 2 != 0)
        {
            printf("%d\t",Head -> data);
        }

        Head = Head -> next;
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,100);
    InsertFirst(&First,101);
    InsertFirst(&First,60);
    InsertFirst(&First,51);
    InsertFirst(&First,40);
    InsertFirst(&First,21);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    DisplayOdd(First);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//11      21      51      101
//
////////////////////////////////////////////////////////////////////////////////////
