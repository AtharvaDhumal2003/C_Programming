/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Counteleven  
//  Description:    It is used to count frequency of eleven in given numbers
//  Input:          int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountEleven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iLength = 0,iRet = 0, iCnt =0;
    int *ptr = NULL;

    printf("Enter Number of Elemnets\n");
    scanf("%d",&iLength);

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

    iRet = CountEleven(ptr,iLength);


    printf("Number of times 11 occoured is :%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 4    Elements :85 66 3 80       output:Number of times 11 occoured is 0 
//  Input: 3    Elements :12 34 11         output:Number of times 11 occoured is 1
//  Input: 5    Elements :11 34 11 22 12   output:Number of times 11 occoured is 2
//
/////////////////////////////////////////////////////////////////////////////////////