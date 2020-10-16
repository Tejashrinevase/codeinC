/*problem statement: 
		accept radius from user and calculate its area
		*/

#include<stdio.h>

double AreaOfCircle(float fRadius)
{
		float fPi=3.14;
		double dArea=0.0;
		
		dArea=fPi*fRadius*fRadius;
		
		return dArea;
}

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("Enter the radius: ");
	scanf("%f",&fValue);
	
	dRet=AreaOfCircle(fValue);
	
	printf("Area of circle is :%lf",dRet);
	
	return 0;
}