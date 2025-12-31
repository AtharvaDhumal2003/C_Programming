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
//  Function name:  Search
//  Description:    It use to search given elements in the linkedlist.
//  Input:          pointer,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////
bool Search(PNODE Head,int no)
{
    bool bflag = false;

    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
            bflag = true;
        }
        Head = Head -> next;
    }
    
    return bflag;
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;
    int iValue = 0;
    bool bRet = false;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    printf("Enter the number you want to Check:\n");
    scanf("%d",&iValue);

    bRet = Search(First,iValue);

    if(bRet == true)
    {
        printf("Number is present Linkedlist.\n");
    }
    else
    {
        printf("Number is not present in Linkedlist.\n");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Enter the number you want to Check:
//31
//Number is not present in Linkedlist.
//
//Enter the number you want to Check:
//21
//Number is present Linkedlist.
//
////////////////////////////////////////////////////////////////////////////////////
