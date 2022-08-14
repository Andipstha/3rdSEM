//bisectionMethod
#include<stdio.h>

float f(float x)
{
	return(x*x*x-4*-9);
}
void bisect(float *x,float a, float b, int *itr)
{
	*x=(a+b)/2;
	++(*itr);
	printf("iteration no. %3d x = %7.5\n",*itr,*x);
}

int main()
{
	int itr=0,maxitr;
	float x,a,b,aerr,x1;
	printf("Enter the value of a,b aloowed error, maximum iteration\n");
	scanf("%f%f%f%d",&a,&b,&aerr,&maxitr);
	bisect();

	
}
