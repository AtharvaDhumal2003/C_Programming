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
//  Function name:  CountPrime
//  Description:    It use to Count prime numbers in the  linklist.
//  Input:          pointer
//  Output:         Integer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountPrime(PNODE Head)
{
    int iCountX = 0;

    while(Head != NULL)
    {
        int i = 0,iCount=0;

        for(i=1; i <= (Head-> data); i++)
        {
            if((Head -> data) % i == 0)
            {
                iCount++;
            }
        }
        if(iCount <= 2)
        {
            iCountX++;
        }
        Head = Head -> next;
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


    InsertFirst(&First,27);
    InsertFirst(&First,17);
    InsertFirst(&First,14);
    InsertFirst(&First,13);
    InsertFirst(&First,10);

    iRet = CountPrime(First);

    printf("There are %d prime numbers.",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//There are 2 prime numbers.
//
////////////////////////////////////////////////////////////////////////////////////

