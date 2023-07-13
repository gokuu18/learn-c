void KmtoMiles();
void InchestoFoot();
void CmstoInches();
void PoundtoKg();
void InchestoMetres();

#include <stdio.h>

int main()
{
    int num;
    for (int i = 1; i < 5; i++)
    {
        printf("Enter '1' to convert kilometers to Miles\nEnter '2' to convert Inches to Foot\nEnter '3' to convert Centimeters to Inches\nEnter '4' to convert pound to kilograms\nEnter '5' to convert Inches to Meters\nEnter '0' to exit :\n");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            KmtoMiles();
            break;

        case 2:
            InchestoFoot();
            break;

        case 3:
            CmstoInches();
            break;

        case 4:
            PoundtoKg();
            break;

        case 5:
            InchestoMetres();
            break;

        case 0:
            goto exit;
            break;
        }
    }
exit:
    return 0;
}

void KmtoMiles()
{
    printf("You chose to convert from Km to Miles!\n");
    float a;
    printf("Enter Kilometer number you want to convert to miles: ");
    scanf("%f", &a);

    printf("The value is %.5f!\n", a * 0.621371);
    return;
}

void InchestoFoot()
{
    printf("You chose to convert from Inches to Foot!\n");
    float a;
    printf("Enter Inches number you want to convert to Foot: ");
    scanf("%f", &a);

    printf("The value is %.6f!\n", a / 12);
    return;
}

void CmstoInches()
{
    printf("You chose to convert from Cms to Inches!\n");
    float a;
    printf("Enter Centimeters number you want to convert to Inches: ");
    scanf("%f", &a);

    printf("The value is %.6f!\n", a / 2.54);
    return;
}

void PoundtoKg()
{
    printf("You chose to convert from Pound to Kg!\n");
    float a;
    printf("Enter Pound number you want to convert to Kilometers: ");
    scanf("%f", &a);

    printf("The value is %.3f!\n", a / 2.205);
    return;
}

void InchestoMetres()
{
    printf("You chose to convert from Inches to Meters!\n");
    float a;
    printf("Enter Inches number you want to convert to Meters: ");
    scanf("%f", &a);

    printf("The value is %.3f!\n", a / 39.37);
    return;
}
