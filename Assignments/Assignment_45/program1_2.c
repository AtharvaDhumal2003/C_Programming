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
//  Function name:  FirstOccurance
//  Description:    It use to give the index of given number in the linkedlist.
//  Input:          pointer
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////
int FirstOccurance(PNODE Head,int no)
{
    int iCount = 0,index=0;

    while(Head != NULL)
    {
        iCount++;

        if((Head -> data) == no)
        {
            index = iCount;
            break;
        }
        Head = Head -> next;
    }

    return index;
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&First,100);
    InsertFirst(&First,101);
    InsertFirst(&First,60);
    InsertFirst(&First,51);
    InsertFirst(&First,40);
    InsertFirst(&First,21);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet =FirstOccurance(First,iValue);

    if(iRet == 0)
    {
        printf("There is no such number.");
    }
    else
    {
        printf("The number is at index:%d",iRet);
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Enter the number:
//21
//The number is at index:3
//
//Enter the number:
//102
//There is no such number.
////////////////////////////////////////////////////////////////////////////////////
