#include <stdio.h>
float simInt(int p, int r, int t)
{
	float si;
	si = (p*r*t)/100.0;
	return si;
	
}
int main (){

int p,r,t;
printf("Enter Principle:");
scanf("%f",&p);

printf("Enter Rate:");
scanf("%f",&r);

printf("Enter Time:");
scanf("%f",&t);

float result;
result = simInt(p,r,t);
printf("\nResult is %f",result);
}
