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
//  Description:    It use to check whether given character is special 
//                  symbol or not.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
BOOL ChkSpecial(char ch)
{
    if((ch == '!') ||( ch == '@') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Cahracter");
    }
    else
    {
       printf("It is not a Special Cahracter"); 
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//^
//It is Special Cahracter
//Enter the character :
//d
//It is not a Special Cahracter
////////////////////////////////////////////////////////////////////////////////////