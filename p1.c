#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;
    int choice;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
commit
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)commit
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n--- Matrix Operations ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (r1 != r2 || c1 != c2)
            {
                printf("\nAddition is not possible.\n");
            }
            else
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        C[i][j] = A[i][j] + B[i][j];
                    }
                }

                printf("\nMatrix Addition:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", C[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

        case 2:
            if (r1 != r2 || c1 != c2)
            {
                printf("\nSubtraction is not possible.\n");
            }
            else
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        C[i][j] = A[i][j] - B[i][j];
                    }
                }

                printf("\nMatrix Subtraction:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", C[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

        case 3:
            if (c1 != r2)
            {
                printf("\nMultiplication is not possible.\n");
            }
            else
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        C[i][j] = 0;
                    }
                }

                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        for (k = 0; k < c1; k++)
                        {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }

                printf("\nMatrix Multiplication:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        printf("%d\t", C[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}
