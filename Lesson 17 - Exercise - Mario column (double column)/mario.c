#include <stdio.h>
#include <cs50.h>

int main(){

    while(1)
    {
    int n = get_int("number of columns (1 to 8 range): ");

        if( (n>=0) && (n<=8) )
        {

            for(int i=1; i<=n; i++)
            {
                for(int k=1; k<=(n-i); k++)
                    {
                        printf(" ");
                    }

                for(int j=1; j<=i; j++)
                {

                    printf("#");
                }

                printf(" ");

                for(int j=1; j<=i; j++)
                {

                    printf("#");
                }
                printf("\n");
            }

            return 0;

        }else{
        }

    }
}
