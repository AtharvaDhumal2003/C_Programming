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
//  Description:    It use to check whether given string contains vowel or not.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
BOOL chkVowels(char str[])
{
    BOOL bFalag = FALSE; 
    while(*str != 0)
    {
       if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
        (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bFalag = TRUE;
        }
        str++;
    }

    return bFalag;
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////


int main()
{
    char Arr[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = chkVowels(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowel.");
    }
    else
    {
       printf("Ther is no vowel."); 
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter String :
//Demo
//It contains vowel.
//Enter String :
//xyz
//Ther is no vowel.
//Enter String :
//Marvllous
//It contains vowel.
////////////////////////////////////////////////////////////////////////////////////