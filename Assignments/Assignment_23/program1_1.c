/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Check  
//  Description:    It is used to check does No is present in given numbers 
//                  or not.
//  Input:          int,int,int
//  Output:         BOOL
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0,iValue = 0;
    int *ptr = NULL;
    BOOL bRet = 0;


    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter number");
    scanf("%d",&iValue);
    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iLength,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present.");
    }
    else
    {
        printf("Number is not present.");
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :85 66 3 80 23 12  No:12     output:Number is Present. 
//  Input: 5    Elements :12 34 11 23 34    No:22     output:Number is not Present.
//
///////////////////////////////////////////////////////////////////////////////////////////////