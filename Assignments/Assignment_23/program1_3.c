/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  LastOcc  
//  Description:    It is used to give index of last occorance of No 
//  Input:          int,int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////


int LastOcc(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iMatch = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iMatch = iCnt;
        } 
    }

    if(iMatch > 0)
    {
        return iMatch;
    }
    else
    {
        return -1;
    }

}

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////


int main()
{
    int iLength = 0,iRet = 0, iCnt = 0,iValue = 0;
    int *ptr = NULL;


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

    iRet = LastOcc(ptr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such Number.");
    } 
    else
    {
        printf("The number occource at index:%d",iRet);
    }
    

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :85 66 3 80 23 12  No:24     output:There is no such number 
//  Input: 5    Elements :12 34 11 12 34    No:12     output:The number occource at index:3
//
///////////////////////////////////////////////////////////////////////////////////////////////