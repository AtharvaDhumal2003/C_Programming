/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  CheckDivisibleby5  
//  Description:    It is used to check given number divisible by 5 or not
//  Input:          int
//  Output:         bool
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
bool CheckDivisibleby5(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter number");
    scanf("%d",&iValue);

    bRet =CheckDivisibleby5(iValue);

    if(bRet == true)
    {
        printf("Divaisible by 5");
    }
    else
    {
        printf("Not Divaisible by 5");
    }

    return 0;

}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 15        output:Divisible by 5
//  Input: 14        output:Not Divisible by 5
/////////////////////////////////////////////////////////////////////////////