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
//  Function name:  Count
//  Description:    It use to Count elements in the linkedlist.
//  Input:          pointer
//  Output:         Integer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }

    return iCount;
}
/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountTwoDigit
//  Description:    It use to count two digits elements in the linklist.
//  Input:          pointer
//  Output:         Integer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountTwoDigit(PNODE Head)
{
    int iCount = 0,iCountX = 0;

    while(Head != NULL)
    {
        iCount = 0;

        while(Head->data != 0)
        {
            iCount++;
            Head->data = (Head->data) / 10;
        }

        if(iCount == 2)
        {
            iCountX++;
        }

        Head =Head->next;
    }
    
    return iCountX;
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,300);
    InsertFirst(&First,90);
    InsertFirst(&First,30);
    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,10);

    iRet = CountTwoDigit(First);

    printf("There are %d two digit numbers.",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//There are 4 two digit numbers.
//
////////////////////////////////////////////////////////////////////////////////////

