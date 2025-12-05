/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to check whether given character is Small or not.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Character.");
    }
    else
    {
       printf("It is not a Small Character."); 
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//c
//It is a Small Character.
//Enter the character :
//S
//It is not a Small Character.
////////////////////////////////////////////////////////////////////////////////////