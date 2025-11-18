/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountNo 
//  Description:    It is used to count frequency of No in given numbers.
//  Input:          int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountNo(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0,iRet = 0, iCnt =0,iValue = 0;
    int *ptr = NULL;

    printf("Enter Number of Elemnets\n");
    scanf("%d",&iLength);

    printf("Enter the Number");
    scanf("%d",&iValue);

    ptr= (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountNo(ptr,iLength,iValue);


    printf("Number of times %d occoured is :%d",iValue,iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :85 66 3 80 23 12  No:12     output:Number of times 12 occoured is 1 
//  Input: 5    Elements :12 34 11 23 34    No:34     output:Number of times 34 occoured is 2
//
///////////////////////////////////////////////////////////////////////////////////////////////