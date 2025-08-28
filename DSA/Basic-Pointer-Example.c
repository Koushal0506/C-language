#include <stdio.h>

int main(){
	int i = 5;
	int *p;
	p=&i;
	printf("\n Value of i=%d",i);
	printf("\n Address of i=%d",&i);
	printf("\n Address of i=%d",p);
	printf("\n Value of i=%d",*p);

	return 0;
}
