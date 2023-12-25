/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2


enter array element :- 5
enter array element :- 5
enter array element :- 5
enter array element :- 5


 cube of = 125   cube of = 125
 cube of = 125   cube of = 125
*/

#include<stdio.h>

void main(){
	
	int a[5][5];
	int *ptr,i,j,c;
	
	
	printf("enter any number :- ");
	scanf("%d",&c);
	
		ptr = &a;	

	for(i=0; i<c; i++){
		for(j=0; j<c; j++){
			printf("enter array element :- ");
				scanf("%d",&a[i][j]);
	}
}

	for(i=0; i<c; i++){
		for(j=0; j<c; j++){
			printf(" cube of = %d  ",(*(ptr+a[i][j]))*(*(ptr+a[i][j]))*(*(ptr+a[i][j])),(ptr+a[i][j]));
		}
		printf("\n");
	}
	
}
