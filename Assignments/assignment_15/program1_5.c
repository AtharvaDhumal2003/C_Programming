/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountRange
//  Description:    It is used to calculate difference between sum of even   
//                  digits and sum of odd digits in the input
//  Input:          int 
//  output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iESum = 0;
    int iOSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if((iDigit%2)==0)
        {
          iESum=iESum+iDigit;  
        }
        if((iDigit%2)!=0)
        {
            iOSum=iOSum+iDigit;
        }
        iNo=iNo / 10;
    }

    iDiff=iESum-iOSum;

    return iDiff;
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
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:2395                  output:-15
//  Input1:2434                  output:7
//
/////////////////////////////////////////////////////////////////////////////