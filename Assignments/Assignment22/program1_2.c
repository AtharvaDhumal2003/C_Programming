/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountEven  
//  Description:    It is used to calculate difference between frequency of 
//                   even  and odd numbers.
//  Input:          int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

int DifferenceEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iECount = 0, iOCount = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iECount++;
        }
        else
        {
            iOCount++;
        }
    }

    iDiff = iECount-iOCount;

    return iDiff;
}

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter thr number of Elements:\n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("unable to alloacate memory");
        return -1;
    }

    printf("Enter %d elements:",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = DifferenceEvenOdd(ptr, iLength);

    printf("%d",iRet);

    free(ptr);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 7    Elements :85 66 3 80 93 88 90     output:1
//
/////////////////////////////////////////////////////////////////////////////