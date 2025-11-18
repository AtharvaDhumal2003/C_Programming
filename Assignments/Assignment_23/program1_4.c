/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Range  
//  Description:    It is used to display numbers between given range 
//  Input:          int,int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize,int iNo1,int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>iNo1 && Arr[iCnt]<iNo2)
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
    int iLength = 0,iCnt = 0,iStart = 0, iEnd = 0;
    int *ptr = NULL;


    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter Range Starting point");
    scanf("%d",&iStart);

    printf("Enter Range Ending point");
    scanf("%d",&iEnd);
    
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

    Range(ptr,iLength,iStart,iEnd);


    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
// Elements:5 Start:15 End:40 Input:12 34 56 23 34   output:34 23 34
// Elements:6 Start:60 End:90 Input:85 66 3 76 93 88 output:66 76 88
//
///////////////////////////////////////////////////////////////////////////////////////////////