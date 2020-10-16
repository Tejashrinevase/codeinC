/*problem statement:
					accept range from user and return addition of all number 
					in that range */
					
#include<stdio.h>
int AdditionOfRange(int iStart,int iEnd)
{
	int iCnt=0;
	int iDigit=0;
	if(iStart>iEnd)
	{
		printf("invalid input:\n");
		
	}
	if(iStart<0||iEnd<0)
	{
		printf("invalid Range");
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iDigit=iDigit+iCnt;
	}
		return iDigit;
}

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	
	printf("Enter the Starting point:");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending point:");
	scanf("%d",&iValue2);
	
	iRet=AdditionOfRange(iValue1,iValue2);
	printf("Addion of range %d ", iRet);
	
	return 0;
}
	
	
	
	