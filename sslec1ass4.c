// 4. WAP to find the area of the circle.Take radius of circle 
//     from user as input and print the result in below given fomat

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int radius;
    system("cls");

    printf("Enter the radius of circle : ");
    scanf("%d",&radius );
    printf("Area of the circle is %.3f having the radius %d", 3.14*radius*radius,radius);
    getch();
    return 0;
}