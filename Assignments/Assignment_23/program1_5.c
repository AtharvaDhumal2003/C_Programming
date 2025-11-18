/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  MultOdd  
//  Description:    It is used to calculate multiplication of odd numbers
//  Input:          int,int,int
//  output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

int MultOdd(int Arr[], int iSize)
{
    int iCnt = 0, iMult = 0;

    for(iCnt = 0,iMult = 1; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0 )
        {
            iMult = iMult * Arr[iCnt];
        } 
    }

    if(iMult > 1)
    {
        return iMult;
    }
    else
    {
        return 0;
    }

}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0,iRet = 0, iCnt = 0;
    int *ptr = NULL;


    printf("Enter number of elements\n");
    scanf("%d",&iLength);

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

    iRet = MultOdd(ptr,iLength);

    printf("Product is :%d",iRet);

    free(ptr);
    

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 4    Elements :85 66 3 80       output:255 
//  Input: 3    Elements :12 34 11         output:11
//  Input: 5    Elements :11 34 11 22 12   output:121
//
/////////////////////////////////////////////////////////////////////////////////////