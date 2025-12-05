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
//  Description:    It use to check whether given character is capital or not.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z' )
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a capital Cahracter");
    }
    else
    {
       printf("It is not a capital Cahracter"); 
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//A
//It is a capital Cahracter
//Enter the character :
//a
//It is not a capital Cahracter
////////////////////////////////////////////////////////////////////////////////////