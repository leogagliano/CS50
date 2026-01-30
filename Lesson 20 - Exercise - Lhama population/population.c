#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main()

{

    double initial_pop;

    do
    {

        initial_pop = get_double(" enter initial population: ");
        double final_pop = 0;
        int _time = 0;

        if (initial_pop >= 9)
        {

            while (final_pop < initial_pop)
            {
                final_pop = get_double("\n enter final population: ");
            }

            double _pop = initial_pop;

            while (_pop < final_pop)
            {
                _pop = (_pop) + floor(_pop / 3) - floor(_pop / 4);
                _time++;
            }

            if (initial_pop != final_pop)
            {
                //_time--;
            }

            printf("Years: %d\n", _time);
        }
        else
        {
        }
    }
    while (initial_pop < 9);

    return 0;
}
