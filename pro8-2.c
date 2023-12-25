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
void ak(){
	int a[5][5];
	int *p,i,j,n;
	
	
	printf("enter any number :- ");
	scanf("%d",&n);
	

		p = &a;	


	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter array element :- ");
				scanf("%d",&a[i][j]);
	}
}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d  ",(*(p+a[i][j]))*(*(p+a[i][j]))*(*(p+a[i][j])),(p+a[i][j]));
		}
		printf("\n");
	}
}
void main(){
	ak();
	
	
}
