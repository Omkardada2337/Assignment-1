// 10.WAP to take date as an given format and convert the date
//  format and display the result

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int Day, Month, Year;
    system("cls");

    printf("Enter the Date,Month and Year in DD/MM/YYYY format");
    scanf("%d/%d/%d",&Day,&Month,&Year);
    printf("Day-%d , Month-%d ,Year-%d",Day,Month,Year);

    getch();
    return 0;
}
