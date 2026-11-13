#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RED "\x1b[31m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"

int main()
{srand(time(0));
    int n=(rand()%100+1),N,k;
    for ( int i = 1; i < n; i++)
    {
        printf(COLOR_BLUE"\nguess the no.\n enter your no."COLOR_RESET);
        scanf("%d",&N);
        if(N>n)
        {printf(COLOR_YELLOW"too high! try a smaller number\n" COLOR_RESET);}
        else if(N<n)
        {
            printf(COLOR_RED"too low! try a biggerr no.\n "COLOR_RESET);
        }
        else if(N=n)
        {
             printf(COLOR_GREEN"%d congratulation you guessed the right no. in %d attempts\n "COLOR_RESET,N,i); 
             break;
        } }
        printf("do you wanna play again enter 0 for no and 1 for yes");
        scanf("%d",&k);
        if(k==1)
        {
            int n=(rand()%50+1),N,k;
    for ( int i = 1; i < n; i++)
    {
        printf("\nguess the no.\n enter your no.");
        scanf("%d",&N);
        if(N>n)
        {printf("too high! try a smaller number\n");}
        else if(N<n)
        {
            printf("too low! try a bigger number\n");
        }
        else if(N=n)
        {
             printf("%d congratulation you guessed the right no. in %d attempts ",N,i); 
             break;
        } 
        }

    }
    
else if (k==0)
{
    printf("thank you");
    
}












}
