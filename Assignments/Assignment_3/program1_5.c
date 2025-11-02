/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0 

/////////////////////////////////////////////////////////////////////////////
//  Function name:  ChkVowel  
//  Description:    It is used to take character input checks if it
//                  is vowel 
//  Input:          char
//  output:         bool
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char Ch)
{

    if(Ch == 'a'||Ch == 'A'||Ch == 'e'||Ch == 'E' ||Ch == 'i'||Ch == 'I' ||Ch == 'o'||Ch == 'O'||Ch == 'u'||Ch == 'U')
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
    char  cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");

    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: i   output:It is a vowel
//  Input: s   output:It is a not vowel
/////////////////////////////////////////////////////////////////////////////