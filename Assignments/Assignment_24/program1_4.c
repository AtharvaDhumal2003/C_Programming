/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Digits 
//  Description:    It is used to give the three digits number in given 
//                  numbers
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt]< 1000)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    int iLength = 0, iRet = 0, iCnt = 0,iValue = 0;

    int *ptr = 0;

    printf("Enter number of Elements:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to alloacate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Number%d:\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr,iLength);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :8225 665 3 76 953 858       output:665 953 858
//
/////////////////////////////////////////////////////////////////////////////////////