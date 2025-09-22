#include<stdio.h>
#define size 10
int n = 0;

void Insert(int arr[]){
	if (n==size){
		printf("\nArray is full\n");
		return;
	}
	int value;
	printf("\nEnter a element:");
	scanf("%d",&value);
	arr[n]= value;
	n++;
	printf("\nInsert %d Successfully...\n",value);	
}
void Delete(int arr[]){
	if (n==0){
		printf("\nArray is empty\n");
		return ;
	}
	int pos;
	printf("Delete Position 0 to %d :", n-1);
	scanf("%d",&pos); 
	
    if (pos < 0 || pos >= n) {
       printf("Invalid position!\n");
       return;
    }
	
	int deleted = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Deleted element %d: \n", deleted);
}
	


void Display(int arr[]){
		if (n==0){
		printf("\nArray is empty\n");
		return ;
	}
	    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main (){
	int arr[size];
	int ch;
	 
	do{
		printf("\n \t Main Menu \n");
		printf("\n 1. Insert \n");
		printf("\n 2. Delete \n");
		printf("\n 3. Display \n");
		printf("\n 4. Exit \n");
		
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: Insert(arr);
			break;
			case 2: Delete(arr);
			break;
			case 3: Display(arr);
			break;
			case 4:;
			break;
			default: printf("\n Invalid choice \n");
			break;
			
		}
		
	} while ( ch!=4);
return 0;
	
}

