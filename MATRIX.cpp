#include <stdio.h>
int main () {
	int A[2] [3] [4];	
	scanf("%d",&A[2] [3] [4]);
 
  int(*pA) [3] [4] =A ;
  int i, j, k;
  for ( i =0; i<2; i++) { 
    printf("The elements of A[%d] [j] [k] are given below.\n", i);
    for ( j =0; j <3; j++) {
      for ( k =0; k<4; k++)
        printf("%d\t", *(*(*(pA +i) + j) +k));
        printf ("\n");
    } 
  }
  printf ("\n");
   return 0;
}