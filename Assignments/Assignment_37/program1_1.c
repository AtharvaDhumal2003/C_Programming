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
//  Function name:  chkChar
//  Description:    It use to check given character is present in string or 
//                  not.
//  Input:          char
//  Output:         BOOL
//  Author:         Atharva Sanjay Dhumal.
//  Date:           03/12/2025
//
/////////////////////////////////////////////////////////////////////////////

BOOL chkChar(char str[],char ch)
{
    BOOL bFlag = FALSE;  

    while(*str != '\0')
    {
        if(*str == ch)
        {
           bFlag = TRUE;
           break;
        }
        else
        {
            bFlag =  FALSE;
        }
        str++;
    }


    return bFlag;

}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    bRet = chkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found.");
    }
    else
    {
        printf("Character not found.");
    }
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter String :
//Marvellous
//Enter the character:e
//Character Found.
////////////////////////////////////////////////////////////////////////////////////