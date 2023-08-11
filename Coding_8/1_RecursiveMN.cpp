/*
Program Recursion can..
1. Calculate M^N Function
2. Show each step of recursive result
3. Show final result
=======================================================================
=========
*/
#include <stdio.h> //use printf()
#include <conio.h> //use getch()

int Power;
double Number, ans;

double PowerStep(double M, int N)
{ // Factorial Function
    int i;
    double result;
    if (N == 0)
    {
        return (1);
    }
    else
    {
        result = PowerStep(M, N - 1);
        printf("%.2lf ^ %d : ", M, N);
		
		printf("%.2lf * %.2lf : ", M, result);
        /*for (i = 1; i <= N; i++)
        {
            if (i == 1)
            {
                printf("%.2lf", M);
            }
            else
            {
                printf(" * %.2lf", M);
            }
        }
        */
        printf(" = %.2lf\n", M * result);
        return (M * result);
    }
} // End Fn

int main()
{
    printf("RECRSIVE(M^N) PROGRAM\n");
    printf("===========================\n");
    // N=0;
    while (Power >= 0)
    {
        printf("Enter Number : ");
        scanf("%lf", &Number);
        printf("Enter Power (-999 is END) : ");
        scanf("%d", &Power);
        if (Power >= 0)
        {
            printf("----Step of recursive result----\n");
            ans = PowerStep(Number, Power); // Recursive it self
            printf("\nAnswer Power %.2lf ^ %d = %.2lf\n", Number, Power, ans);
            printf("----------------Finished\n");
            getch();
        }
    } // ENd while
    return (0);
} // End Main