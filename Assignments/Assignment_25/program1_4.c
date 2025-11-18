/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display 
//  Description:    It is used to give the numbers which are divisible by 5 
//                  and 3 from given numbers.
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           17/11/2025
//
/////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0)
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
    int iLength = 0,iCnt =0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d:\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

  
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 6    Elements :85 66 3 80 15 88       output:15
//
/////////////////////////////////////////////////////////////////////////////////////