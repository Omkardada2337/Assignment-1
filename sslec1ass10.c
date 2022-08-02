// 10.WAP to take date as an given format and convert the date
//  format and display the result

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int Day, Month, Year;
    system("cls");

    printf("Enter the Day : ");
    scanf("%d", &Day);
    printf("\nEnter the Month : ");
    scanf("%d", &Month);
    printf("\nEnter the Year : ");
    scanf("%d", &Year);
    printf("\nDay-%d ,Month-%d ,Year-%d", Day, Month, Year);

    getch();
    return 0;
}