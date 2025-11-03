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
//  Function name:  ChkZero
//  Description:    It is used to check whether given input contains zero  
//  Input:          int
//  Output:         int(bool) 
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    
    while(iNo != 0)
    {
        iDigit=iNo%10;
        if(iDigit == 0)
        {
            return TRUE;
            break;
        }
        iNo=iNo/10;
    }
}
//Time Complexity:O(Log N)

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:2395                  output:There is no zero
//  Input1:-1080                 output:It contains zero
//
/////////////////////////////////////////////////////////////////////////////