
#include <stdio.h>
int main(){
	int number, answer, i;
	printf("Enter the Number:");
	scanf("%d",&number);
	printf("Table:\n");
	for(i=1; i<=10; i++){
		answer=number*i;
		printf(" %d\n",answer);
	}

	return 0;
}
