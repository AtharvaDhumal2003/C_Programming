/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  MultDigits
//  Description:    It is used to calculate multiplication of digits in 
//                  given input number.
//  Input:          int 
//  output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    iMult=1;
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit==0)
        {
            iDigit=1;
        }
        iMult=iMult*iDigit;
        iNo=iNo / 10;
    }

    return iMult;
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

    iRet=MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:2395                  output:270
//  Input1:2434                  output:96
//
/////////////////////////////////////////////////////////////////////////////