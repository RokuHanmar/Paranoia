#include <stdio.h>
#include <stdlib.h>



int main() {

    int successes = 0;
    time_t t6;
    srand ((unsigned) time (&t6));

    // Find Difficulty Class
    printf("%s", "Enter Difficulty Class: ");
    int DC;
    scanf("%d", &DC);

    // Find number of dice
    printf("%s", "Enter number of dice: ");
    int NoDe;
    scanf("%d", &NoDe);

    // Roll number of dice and count successes
    for (int i = 0; i < NoDe; i++) {
        int die = rand() % 6;
        while (die == 0) {
            die = rand() % 6;
        }
        printf("%d", die);
        if (die >= 5) {
            successes++;
        }
    }
    printf("\n");

    if (successes == 1) {
        printf("%s\n", "You have 1 success");
    } else {
        printf("%s %d %s \n", "You have", successes, "successes");
    }
    

    if (successes >= DC) {
        printf("%s\n", "Roll succeeded");
    } else {
        printf("%s\n", "Roll failed");
    }

    return 0;
}
