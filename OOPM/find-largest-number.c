#include<stdio.h>
int main(){
	int var1,var2,var3;
	printf("Enter three values");
	scanf("%d %d %d",&var1, &var2, &var3);
	
	if (var1>var2){
		if (var1>var3){
			printf("Var1 is large %d",var1);	
		}
		else {
			printf("Var3 is large %d",var3);
		}
	}
	else if(var2>var3){
		printf("Var2 is large %d",var2);
	}
	else {
		printf("Var3 is large %d",var3);
	}
	return 0;
}
