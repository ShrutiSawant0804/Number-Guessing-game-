#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mynum,usernum;
    
    srand(time(NULL));
    mynum = rand() % 10;

    printf("I have a number in my mind (0 to 10). can you guess it?\n");

    while (1)
    {
    printf("enter your guess : ");
    scanf("%d",&usernum);

    if (mynum == usernum)
    {
        printf("Yes you got it!\n\n\n\n");
    }
    else if (mynum > usernum)
    {
        printf("My number is greater than%d. Try Again\n\n", usernum);
    }
    else{
        printf("my number is smaller than%d. Try Again\n\n", usernum);
    }
    }

    return 0;
}