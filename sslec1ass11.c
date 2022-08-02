// 11.WAP to take time as an input in below given format and convert the
//  time format and display the result as given below.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int hour, minute;
    system("cls");
    printf("Enter the hour :");
    scanf("%d",&hour );
    printf("\nEnter the minutes :");
    scanf("%d",&minute );

    printf("\n\n%d hour and %d Minute",hour,minute);

    getch();
    return 0;
}