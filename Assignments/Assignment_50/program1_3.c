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
//  Function name:  CheckSorted
//  Description:    It use to check whether elements in the linklist are 
//                  sorted or not;
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

bool CheckSorted(PNODE Head)
{
    int i = 0, j = 0;
    bool bFlag = false;

    while(Head -> next != NULL)
    {
        i = Head->data;
        j = Head->next->data;

        if(i<j)
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
            break;
        }
        Head = Head -> next;
    }

    return bFlag;
       
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;
    bool bRet = false;


    InsertFirst(&First,101);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,11);

    bRet = CheckSorted(First);

    if(bRet == true)
    {
        printf("Linklist is sorted.\n");
    }
    else
    {
        printf("Linklist is not sorted.\n");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Linklist is not sorted.
////////////////////////////////////////////////////////////////////////////////////

