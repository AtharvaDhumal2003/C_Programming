/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  MultOdd  
//  Description:    It is used to calculate sum of digits of given numbers
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iSum=0;

    for(iCnt = 0; iCnt < iSize; iCnt++, iSum=0)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt]/10;

        }
        printf("%d\t",iSum);
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
//  Input: 6    Elements :8225 665 3 80 12 34       output:17 17 3 8 3 7
//
/////////////////////////////////////////////////////////////////////////////////////