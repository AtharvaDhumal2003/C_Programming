/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  chkEqual  
//  Description:    It is used to check input numbers are equal or not
//  Input:          int,
//  Output:         bool
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Time Complexity:O(1)

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Enter two numbers:");
    scanf("%d%d",&iValue1,iValue2);

    bRet=(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 10    Input2 : 3     output:Not equal
//  Input:-10    Input2 : 10     output:Not equal
//  Input:10    Input2 : 10     output:Equal
//
/////////////////////////////////////////////////////////////////////////////