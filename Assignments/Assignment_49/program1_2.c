/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
//  Function name:  CheckAllPositive
//  Description:    It use to check if all elements in the linklist are 
//                  positive or not.
//  Input:          pointer
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

bool CheckAllPositive(PNODE Head)
{
    int iCnt = 0,iCount = 0;

    iCount = Count(Head);

    while(Head != NULL)
    {
        if(Head -> data > 0)
        {
            iCnt++;
        }

        Head = Head -> next;
    }

    if(iCnt == iCount)
    {
        return true;   
    }
    else
    {
        return false;
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
    bool bRet = 0;

    InsertFirst(&First,-17);
    InsertFirst(&First,16);
    InsertFirst(&First,15);
    InsertFirst(&First,14);
    InsertFirst(&First,13);
    InsertFirst(&First,12);
    InsertFirst(&First,11);

    bRet = CheckAllPositive(First);
    
    if(bRet == true)
    {
        printf("All elements are Positive");
    }
    else
    {
        printf("All elements are not Positive");
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//All elements are not Positive
//
////////////////////////////////////////////////////////////////////////////////////

