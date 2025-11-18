/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  CountEven  
//  Description:    It is used to count even numbers
//  Input:          int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////
int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
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
    int iSize = 0, iRet = 0, iCnt = 0;

    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element  %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr, iSize);

    printf("Even Elments in given numbers are:%d",iRet);

    free(ptr);



    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :85 66 3 80 93 88      output:3
//
/////////////////////////////////////////////////////////////////////////////