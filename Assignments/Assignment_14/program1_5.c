/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountLessthanSix
//  Description:    It is used to count frequency of digits that are less 
//                  than 6
//  Input:          int 
//  output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountLessthanSix(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit < 6)
        {
            iFrequency++;
        }
        iNo=iNo / 10;
    }

    return iFrequency;
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

    iRet=CountLessthanSix(iValue);

    printf("%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:2395                  output:2
//  Input1:2434                  output:4
//
/////////////////////////////////////////////////////////////////////////////