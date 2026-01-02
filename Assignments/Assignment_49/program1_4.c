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
//  Function name:  CountDivByFive
//  Description:    It use to count elements in the linklist which are 
//                  divisible by 5.
//  Input:          pointer
//  Output:         Integer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountDivByFive(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if((Head -> data) % 5 == 0)
        {
            iCount++;
        }
        Head = Head -> next;
    }
    
    return iCount;
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

    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,15);
    InsertFirst(&First,14);
    InsertFirst(&First,13);
    InsertFirst(&First,10);
    InsertFirst(&First,5);

    iRet = CountDivByFive(First);

    printf("There are %d elements divisible by five.",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//There are 4 elements divisible by five.
//
////////////////////////////////////////////////////////////////////////////////////

