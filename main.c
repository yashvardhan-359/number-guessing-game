#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{srand(time(0));
    int n=(rand()%100+1),N,k;
    for ( int i = 1; i < n; i++)
    {
        printf("\nguess the no.\n enter your no.");
        scanf("%d",&N);
        if(N>n)
        {printf("too high! try a smaller number\n");}
        else if(N<n)
        {
            printf("too low! try a biggerr no.\n ");
        }
        else if(N=n)
        {
             printf("%d congratulation you guessed the right no. in %d attempts\n ",N,i); 
             break;
        } }
        printf("do you wanna play again enter 0 for no and 1 for yes");
        scanf("%d",&k);
        if(k=1){
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
    
else{printf("come again later");}












}
