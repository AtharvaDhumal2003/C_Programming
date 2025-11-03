/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  OddFactorial 
//  Description:    It is used to display odd factorials of given number
//  Input:          int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iCnt =0;
    int iFact=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=iNo,iFact=1;iCnt>0;iCnt--)
    {
        if((iCnt%2)!=0)
        {
            iFact=iFact*iCnt;
        }
    }

    return iFact;
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

    iRet=OddFactorial(iValue);

    printf("Odd factorial of number:%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input:5          output:15
//  Input:-5         output:15
//
/////////////////////////////////////////////////////////////////////////////