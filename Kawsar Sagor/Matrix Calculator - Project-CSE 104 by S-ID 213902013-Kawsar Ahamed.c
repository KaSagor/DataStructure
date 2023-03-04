#include <stdio.h>
int main()
{

    int i, j, k;
    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int result[10][10];
    int row, col;

    int operation;//for swtich statements
    char again = 'Y';
    int sum = 0;

    while (again == 'Y')
    {
        printf("\t\tWelcome to Matrix calculator\n");
        printf("*******************************************************\n");


        printf("\nOperation Menu:\n");
        printf("\t1. to Addition\n");
        printf("\t2. to Subtraction\n");
        printf("\t3. to Multiplication\n");
        printf("\t4. to Transpose\n");
        printf("\nEnter your choice: ");
        scanf(" %d", &operation);


        switch (operation)
        {

        //addition
        case 1:
            printf("\n\t*****You choice Matrix addition******");
            printf("\n**********************************************************");

            printf("\nEnter Number of Row: ");
            scanf("%d", &row);

            printf("Enter Number of Column: ");
            scanf("%d", &col);

            printf("\n\nEnter elements for Matrix A\n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\A[%d][%d] = ", i, j);
                    scanf("%d", &matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\nEnter elements for Matrix B\n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("B[%d][%d] = ", i, j);
                    scanf("%d", &matrixB[i][j]);
                }
                printf("\n");
            }

            printf("\n[A]= \n");

            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\t%d ", matrixA[i][j]);
                }
                printf("\n");
            }
            printf("\n[B]= \n");

            for (i=0; i<row; i++)

            {
                for (j=0; j<col; j++)
                {
                    printf("\t%d ", matrixB[i][j]);
                }
                printf("\n");
            }

            printf("\n");

            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    result[i][j] = matrixA[i][j] + matrixB[i][j];
                }
            }

            printf("[A+B]= \n");

            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\t%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        //subtraction
        case 2:
            printf("\n\t*****You choice Matrix subtraction******");
            printf("\n**********************************************************");

            printf("\nEnter Number of Row: ");
            scanf("%d", &row);

            printf("Enter Number of Column: ");
            scanf("%d", &col);

            printf("\n\nEnter elements for Matrix A\n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\A[%d][%d] = ", i, j);
                    scanf("%d", &matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\nEnter elements for Matrix B\n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("B[%d][%d] = ", i, j);
                    scanf("%d", &matrixB[i][j]);
                }
                printf("\n");
            }

            printf("\n[A]= \n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\t%d ", matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\n[B]= \n");
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("\t%d ", matrixB[i][j]);
                }
                printf("\n");
            }

            printf("\n[A-B]= \n");

            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    result[i][j] = matrixA[i][j] - matrixB[i][j];
                    printf("\t%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        //multiplication
        case 3:
            printf("\n\t*****You choice Matrix multiplication******");
            printf("\n**********************************************************");

            printf("\nEnter Number of Row: ");
            scanf("%d", &row);

            printf("Enter Number of Column: ");
            scanf("%d", &col);

            if (row == col)
            {
                printf("\n\nEnter elements for Matrix A\n");
                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        printf("A[%d][%d]= ",i,j);
                        scanf("%d", &matrixA[i][j]);
                    }
                    printf("\n");
                }

                printf("\nEnter elements for Matrix B\n");

                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        printf("B[%d][%d]= ",i,j);
                        scanf("%d", &matrixB[i][j]);
                    }
                    printf("\n");
                }

                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<col; k++)
                        {
                            sum = sum + matrixA[i][k]*matrixB[k][j];
                        }

                        result[i][j] = sum;
                        sum = 0;
                    }
                }

                printf("\n[A]= \n");

                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        printf("\t");
                        printf("%d ", matrixA[i][j]);
                    }
                    printf("\n");
                }

                printf("\n[B]= \n");
                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        printf("\t");
                        printf("%d ", matrixB[i][j]);
                    }
                    printf("\n");
                }

                printf("\n[A*B]=\n");
                for(i=0; i<row; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        printf("\t");
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }

                break;
            }

            else
            {
                printf("\nColumn number and Row number are not same\n");
                break;
            }



        //transpose
        case 4:

            printf("\n\t*****You choice transpose of Matrix******");
            printf("\n**********************************************************");

            printf("\nEnter Number of Row: ");
            scanf("%d", &row);

            printf("Enter Number of Coulmn: ");
            scanf("%d", &col);

            printf("\n\nEnter elements for Matrix A\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    printf("\A[%d][%d]=",i,j);
                    scanf("%d",&matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\n[A]=\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    result[j][i]=matrixA[i][j];
                }
            }

            for(i=0; i<row; i++)
            {
                printf("\t");
                for(j=0; j<col; j++)
                {
                    printf("\t%d ",matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\nTranspose of [A]= \n");

            for(i=0; i<col; i++)
            {
                printf("\t");
                for(j=0; j<row; j++)
                {
                    printf("\t%d ",result[i][j]);
                }
                printf("\n");
            }

            break;

        default:

            printf("\nIncorrect option! Please choose the correct option.");
            break;
        }

        printf("\n\nDo you want to calculate again? Press Y for calculate again.\nTo EXIT, press any letter.\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    printf("\n\nThank you for using my calculator!\n\n");

    getch ();
    return 0;
}
