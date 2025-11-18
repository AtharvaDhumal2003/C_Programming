/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Maximum  
//  Description:    It is used to give the largest number from given numbers
//  Input:          int,int
//  output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////
int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax =0,i = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }

    return iMax;
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

    iRet = Maximum(ptr,iLength);

    printf("Largest Number is:%d",iRet);


    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 4    Elements :85 66 3 80       output:85
//  Input: 3    Elements :12 34 11         output:34
//  Input: 5    Elements :11 34 11 22 12   output:34
//
/////////////////////////////////////////////////////////////////////////////////////