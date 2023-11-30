#include <stdio.h>
#include <stdlib.h>



int main() {

    int successes = 0;

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
        printf("%d", die);
        if (die >= 5) {
            successes++;
        }
    }

    if (successes == DC) {
        printf("%s\n", "Roll succeeded");
    }

    return 0;
}