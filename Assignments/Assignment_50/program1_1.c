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
//  Function name:  MakeAbsolute
//  Description:    It use to replace the negative number in the linklist
//                  with its absolute value.
//  Input:          pointer
//  Author:         Atharva Sanjay Dhumal.
//  Date:           31/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void MakeAbsolute(PPNODE Head)
{
    PNODE temp = NULL;

    temp = *Head;

    printf("New Linklist:\n");
    while(temp != NULL)
    {
        if(temp -> data < 0)
        {
            temp->data = -(temp->data);
        }
        printf("|%d|->",temp->data);
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

    InsertFirst(&First,-21);
    InsertFirst(&First,-18);
    InsertFirst(&First,-15);
    InsertFirst(&First,14);
    InsertFirst(&First,-13);
    InsertFirst(&First,10);
    InsertFirst(&First,-9);

    printf("Original Linklist:\n");
    Display(First);

    MakeAbsolute(&First);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//Original Linklist:
//|-9|->|10|->|-13|->|14|->|-15|->|-18|->|-21|->NULL
//New Linklist:
//|9|->|10|->|13|->|14|->|15|->|18|->|21|->NULL
////////////////////////////////////////////////////////////////////////////////////

