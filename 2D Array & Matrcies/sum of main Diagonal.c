#include <stdio.h>

#define N 100

void sum_main_diagonal(int r,int c, int m1[][N]){
  if (r != c) { // Must be squaare Matrix
    printf("sorry can't preform this opertion\nWrong Dimensions!");
    return;
  }

  int sum = 0;
  for (int i = 0; i < r; i++)
    sum += m1[i][i];

  printf ("sum of main diagonal = %d", sum);
 
}
int main () {
  int mat1[N][N], r, c;
 
  printf("please enter rows and coulmns of first matrix: ");
  scanf("%d%d",&r,&c);
  
  printf ("enter the first matrix %d X %d", r, c);
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d",&mat1[i][j]);
 
  sum_main_diagonal(r,c,mat1);

  return 0;
}

/* 
  sample input:

  3 3
  1 2 3
  4 5 6
  7 8 9

 */
