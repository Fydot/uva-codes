#include <stdio.h>


int steps(int number)
{
    int count = 1;
    while(number != 1) {
        if(number % 2 == 1) {
            number = number * 3 + 1;
        } else {
            number /= 2;
        }
        count += 1;
    }

    return count;
}


int main(void)
{
    int start, end;
    while(~scanf("%d%d", &start, &end)) {
        int max_step = 0, i;

        for(i = (start>end?end:start); i <= (start>end?start:end); ++i) {
            int i_step = steps(i);
            if(i_step > max_step) {
                max_step = i_step;
            }
        }

        printf("%d %d %d\n", start, end, max_step);
    }

    return 0;
}
