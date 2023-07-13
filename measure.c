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
        printf("Enter '1' to convert kilometres to Miles\nEnter '2' to convert Inches to Foot\nEnter '3' to convert Centimetres to Inches\nEnter '4' to convert pound to kilograms\nEnter '5' to convert Inches to Metres\nEnter '0' to exit :\n");
        scanf("%d", &num);

        if (num == 1)
        {
            KmtoMiles();
        }
        else if (num == 2)
        {
            InchestoFoot();
        }
        else if (num == 3)
        {
            CmstoInches();
        }
        else if (num == 4)
        {
            PoundtoKg();
        }
        else if (num == 5)
        {
            InchestoMetres();
        }
        else if (num == 0)
        {
            goto label;
        }
    }
label:
    return 0;
}

void KmtoMiles()
{
    printf("You chose to convert from KmtoMiles!\n");
    float a;
    printf("Enter Kilometre number you want to convert to miles: ");
    scanf("%f", &a);

    printf("The value is %.5f!\n", a * 0.621371);
    return;
}

void InchestoFoot()
{
    printf("You chose to convert from InchestoFoot!\n");
    float a;
    printf("Enter Inches number you want to convert to Foot: ");
    scanf("%f", &a);

    printf("The value is %.6f!\n", a / 12);
    return;
}

void CmstoInches()
{
    printf("You chose to convert from CmstoInches!\n");
    float a;
    printf("Enter Centimetres number you want to convert to Inches: ");
    scanf("%f", &a);

    printf("The value is %.6f!\n", a / 2.54);
    return;
}

void PoundtoKg()
{
    printf("You chose to convert from PoundtoKg!\n");
    float a;
    printf("Enter Pound number you want to convert to Kilometres: ");
    scanf("%f", &a);

    printf("The value is %.3f!\n", a / 2.205);
    return;
}

void InchestoMetres()
{
    printf("You chose to convert from InchestoMetres!\n");
    float a;
    printf("Enter Inches number you want to convert to Metres: ");
    scanf("%f", &a);

    printf("The value is %.3f!\n", a / 39.37);
    return;
}
