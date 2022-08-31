#include<stdio.h>

int main(){

    int i,j,nofrows,nofcols;
    int A[3][4] ,B[3][4], C[10][10];


    printf("Enter the number of rows and columns:");
    scanf("%d %d" ,&nofrows,&nofcols);

    printf("enter elements for A mateix: \n ");

    for(i=0; i<nofrows;i++)
    {
        for(j=0;j<nofcols;j++)
        {
          printf("A[%d][%d]=",i,j);
          scanf("%d", &A[i][j]);


        }
        printf("\n");

    }


    printf("A= ");
    for(i=0; i<nofrows;i++)
    {
        printf("\t");
        for(j=0;j<nofcols;j++)
        {
          printf("%d ", A[i][j]);

        }
        printf("\n");




}
 printf("enter elements for B mateix: \n ");

    for(i=0; i<nofrows;i++)
    {
        for(j=0;j<nofcols;j++)
        {
          printf("B[%d][%d]=",i,j);
          scanf("%d", &B[i][j]);


        }
        printf("\n");

    }


    printf("B= ");
    for(i=0; i<nofrows;i++)
    {
        printf("\t");
        for(j=0;j<nofcols;j++)
        {
          printf("%d ", B[i][j]);

        }
        printf("\n");

}
//adding two matrix

    for(i=0; i<nofrows;i++)
    {

        for(j=0;j<nofcols;j++)
        {

            C[i][j] = A[i][j] + B[i][j];
        }

}

  printf("\n");

        printf("A+B= ");
    for(i=0; i<nofrows;i++)
    {
        printf("\t");
        for(j=0;j<nofcols;j++)
        {
          printf("%d ", C[i][j]);

        }
        printf("\n");

}



}
