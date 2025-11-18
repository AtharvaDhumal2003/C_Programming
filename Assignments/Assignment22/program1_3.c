/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////
//  Function name:  Checkeleven  
//  Description:    It is used to check given numbers contain 11 or not
//  Input:          int,int
//  Output:         bool
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

bool CheckEleven(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
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
    int iLength = 0, iCnt =0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter Number of Elemnets\n");
    scanf("%d",&iLength);

    ptr= (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
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

    bRet = CheckEleven(ptr,iLength);

    if(bRet == true)
    {
        printf("Eleven is Present.");
    }
    else
    {
        printf("Eleven is Absent.");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 7    Elements :85 66 3 80 93 88 90     output:Eleven is Absent
//  Input: 3    Elements :12 34 11                output:Eleven is present
//
/////////////////////////////////////////////////////////////////////////////