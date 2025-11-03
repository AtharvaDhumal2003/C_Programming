
/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  MultiplyThreeNumbers  
//  Description:    It is used to perform addition
//  Input:          int,int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
int MultiplyThreeNumbers(int iNo1,int iNo2,int iNo3)
{
    int iMult=0;

    if(iNo1==0)
    {
        iNo1=1;
    }
    
    if(iNo2==0)
    {
        iNo2=1;
    }
    
    if(iNo3==0)
    {
        iNo3=1;
    }

    iMult=iNo1*iNo2*iNo3;

    return iMult;
}
//Time Complexity:O(1)

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;

    printf("Plese Enter Three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=MultiplyThreeNumbers(iValue1,iValue2,iValue3);

    printf("\n%d",iRet);

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input:10    Input2 : 3    Input3:12   output:360
//  Input:5    Input2 : 0     Input3:0    output:5
//  Input:5    Input2 : 0     Input3:7    output:35
//  
/////////////////////////////////////////////////////////////////////////////