/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  FactorialDiff  
//  Description:    It is used to calculate diifference between evenfactorial
//                  and odd factorial
//  Input:          int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt =0;
    int iEFact=0;
    int iOFact=0;
    int iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo,iOFact=1,iEFact=1;iCnt>0;iCnt--)
    {
        if((iCnt%2)==0)
        {
            iEFact=iEFact*iCnt;
        }
        else
        {
            iOFact=iOFact*iCnt;
        }
    }

    iDiff=iEFact-iOFact;

    return iDiff;
}
//Time complexity:O(N)


/////////////////////////////////////////////////////////////////////////////
//  Entry point Function for given application
/////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial Difference is:%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input:5         output:-7
//
/////////////////////////////////////////////////////////////////////////////