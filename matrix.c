#include <stdio.h>


void read(int mat[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}


void display(int mat[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}


void add(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}


void multiply(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j, k;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void transpose(int A[3][3], int T[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            T[j][i] = A[i][j];
        }
    }
}

int main()
{
    int A[3][3], B[3][3], C[3][3], T[3][3];

    printf("Enter elements of Matrix A:\n");
    read(A);

    printf("Enter elements of Matrix B:\n");
    read(B);
    
    add(A, B, C);
    printf("\nMatrix Addition:\n");
    display(C);
    
    multiply(A, B, C);
    printf("\nMatrix Multiplication:\n");
    display(C);
    
    transpose(A, T);
    printf("\nTranspose of Matrix A:\n");
    display(T);

    return 0;
}