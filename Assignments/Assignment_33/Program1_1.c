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
//  Description:    It use to check whether given character is Alphabet or not.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' )
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
        printf("It is a Alphabet");
    }
    else
    {
       printf("It is not a Alphabet"); 
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//A
//It is a Alphabet
//C:\Users\athar\Desktop\LBA\Assignment34>myexe
//Enter the character :
//%
//It is not a Alphabet
////////////////////////////////////////////////////////////////////////////////////