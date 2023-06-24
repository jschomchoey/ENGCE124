#include <stdio.h>
#include <math.h>

//prototype
void ModeSelect();
void DecToBin();
void BinToDec();
void DecToASCII();

int main()
{
    ModeSelect();
    return 0;
}

void ModeSelect()
{
    printf("\n");

    int mode;
    do
    {
        printf("-----------------------\n");
        printf("Mode 1 : Decimal to Binary\n");
        printf("Mode 2 : Binary to Decimal\n");
        printf("Mode 3 : Decimal to ASCII\n");
        printf("Select Mode: ");
        scanf("%d", &mode);
    } while (mode < 1 || mode > 3);
    switch (mode)
    {
    case 1:
        DecToBin();
    case 2:
        BinToDec();
    case 3:
        DecToASCII();
    }
}

void DecToBin()
{
    int dec;
    int frac[100];
    int i;

    printf("-----------------------\n");
    printf("Decimal to Binary\n");
    printf("Input Decimal Number: ");

    scanf("%d", &dec);
    printf("Result: ");
    while (dec > 0)
    {
        frac[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", frac[i]);
    }
    ModeSelect();
}

void BinToDec()
{
    int frac;
    int digit = 0;
    int bin;
    int sum;

    printf("-----------------------\n");
    printf("Binary to Decimal\n");
    printf("Input Binary Number: ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        frac = bin % 10;
        sum += frac * pow(2, digit);
        bin = bin / 10;
        digit++;
    }
    printf("Result: ");
    printf("%d", sum);
    ModeSelect();
}

void DecToASCII()
{
    int dec;

    printf("-----------------------\n");
    printf("Decimal to ASCII\n");
    printf("Input Decimal Number: ");
    scanf("%d", &dec);
    printf("Result: %c", dec);
    ModeSelect();
}