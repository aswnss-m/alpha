/* Matrix functions
 * Author : Aswin Lal
 * Experiment : XX
 * */
#include <stdio.h>

// Declaring necessary functions
void get_m(int m[][10],int x,int y);		//read matrix
void display_m(int m[][10], int x, int y);	// display matrix
void sum_m(int m1[][10],int m2[][10],int x,int y,int ans[][10]); // Add two matrix
void pro_m (int m1[][10], int m2[][10],int x,int y,int z,int ans[][10]); 	//multiply two matrix
void trans_m(int m[][10],int x,int y,int ans[][10]); 	//transpose of matrix

int main(){
	int matrix1[10][10], matrix2[10][10], ans[10][10];
	int opt,size1,size2,i,j;
	int run =1;	//flag variable to loop the menu
	printf("Welcome to Matrix Calc\n");

// getting the matrix 1 beforehand so all functions can be applied on it
	printf("\n\nEnter the size of Matrix One (m n) : ");
	scanf("%d%d",&size1,&size2);
	printf("\nEnter the Values in first matrix\n");
	get_m(matrix1,size1,size2);

// Looping starts
do{
	printf("1. Add Matrix\n");
	printf("2. Multiply two Matrices \n");
	printf("3. Find Transpose of Matrix\n");
	printf("4. Quit");
	printf("\n\n Enter the opt number (1-4) : ");
	scanf("%d",&opt);

	switch(opt){
		case 1:
			printf("\n\nMatrix Addition\n");
			printf("\nEnter the Values in second matrix\n");
			get_m(matrix2,size1,size2);
			sum_m(matrix1, matrix2,size1,size2,ans);
			printf("\nAnswer:\n");
			display_m(ans,size1,size2);
			break;
		case 2:
			printf("\nMatrix Multiplication\n");
			printf("Enter the size of Matrix Two (m n) : ");
			scanf("%d%d",&i,&j);
			if (size2==i){
				printf("\nEnter the Values in second matrix\n");
				get_m(matrix2,i,j);
				pro_m(matrix1, matrix2,size1,size2,j,ans);
				printf("\nAnswer\n");
				display_m(ans,size1,j);
			}
			else{
				printf("\nMatrix one and two cant be multiplied\n");
			}

			break;
		case 3:
			printf("\nTranspose of matrix\n");
			trans_m(matrix1,size1,size2,ans);
			printf("\nAnswer:\n");
			display_m(ans,size1,size2);
			break;
		case 4:
		// breaking menu loop
			printf("\n\nGood Bye\n");
			run = 0;
			break;
		default:
			printf("\nWrong Option\n");
		}
	} while(run==1);
	return 0;
}
void get_m(int m[][10],int x,int y){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
		printf("Enter value of a%d%d : ",i,j);
		scanf("%d",&m[i][j]);
		}
	}
}
void display_m(int m[][10],int x, int y){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
}
}
void sum_m(int m1[][10],int m2[][10],int x, int y,int ans[][10]){
	// both matrix is of same size
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			ans[i][j] = m1[i][j] + m2[i][j];
		}
	}

}
void pro_m(int m1[][10],int m2[][10], int x, int y, int z,int ans[][10]){
	// Axy * Byz = Cxz - matrix multiplication
	int i,j,k;

	// Rows of A
	for(i=0;i<x;i++){
		// Columns of B
		for(j=0;j<z;j++){
			ans[i][j] = 0;
			for(k=0;k<y;k++){
				ans[i][j] += (m1[i][k]*m2[k][j]);
			}
		}
	}
}

void trans_m(int m[][10],int x,int y,int ans[][10]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
		ans[j][i] = m[i][j];
		}
	}
}
