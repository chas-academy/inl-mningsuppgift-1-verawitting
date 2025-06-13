#include <stdio.h>
#include <stdlib.h>

/*
Program simulating 100 dice rolls with a six-sided die.
The result is saved and analysed and prints the following:
The number of time each value of the dice was rolled,
the sum of all the values and the average vaule of all 100 rolls.
*/

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here

    int roll_values[100];
    for (int i = 0; i < 100; i++) {
        roll_values[i] = (rand() % 6) + 1;

    }

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    int sum = 0;

    for (int i = 0; i < 100; i++) {
        if (roll_values[i] == 1) {
            one++;
        }
        if (roll_values[i] == 2) {
            two++;
        }
        if (roll_values[i] == 3) {
            three++;
        }
        if (roll_values[i] == 4) {
            four++;
        }
        if (roll_values[i] == 5) {
            five++;
        }
        if (roll_values[i] == 6) {
            six++;
        }
        sum+=roll_values[i];
    }

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f", sum/100.0);

    return 0;
}
