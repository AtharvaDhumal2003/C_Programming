/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  CheckEvenOdd 
//  Description:    It checks whether input is  even or odd 
//  Input:          int
//  Output:         bool
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
bool ChkEvenOdd(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet=ChkEvenOdd(iValue);

    if(bRet == true)
    {
        printf("Number %d is Even",iValue);
    }
    else
    {
        printf("Number %d is Odd",iValue);
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 5     output:Number 5 is Even
//  Input: 12    output:Number 10 is Odd
//
/////////////////////////////////////////////////////////////////////////////