#include <stdio.h>

// Function to read a matrix from the console
void read_matrix(int matrix[][100], int rows, int cols)
{
    printf("Enter the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix to the console
void print_matrix(int matrix[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiply_matrices(int a[][100], int b[][100], int c[][100], int rows1, int cols1, int rows2, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int choice, rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    read_matrix(a, rows1, cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    read_matrix(b, rows2, cols2);

    if (cols1 != rows2)
    {
        printf("The number of columns in the first matrix must be the same as the number of rows in the second matrix for multiplication.\n");
    }else{
        multiply_matrices(a, b, c, rows1, cols1, rows2, cols2);
    }

    printf("Result of multiplication:\n");
    print_matrix(c, rows1, cols2);

    return 0;
}