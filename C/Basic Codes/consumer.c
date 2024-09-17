#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Initial values
int mutex = 1;
int full = 0;
int empty = 10;
int x = 0;

// Producer function
void producer() {
    --mutex;
    ++full;
    --empty;
    x++;
    printf("\nProducer produces item %d", x);
    ++mutex;
}

// Consumer function
void consumer() {
    --mutex;
    --full;
    ++empty;
    printf("\nConsumer consumes item %d", x);
    x--;
    ++mutex;
}

int main() {
    int n;

    // Menu
    printf("\n1. Press 1 for producer");
    printf("\n2. Press 2 for consumer");
    printf("\n3. Press 3 for exit");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                if (mutex == 1 && empty != 0) {
                    producer();
                } else {
                    printf("\nBuffer is full");
                }
                break;

            case 2:
                if (mutex == 1 && full != 0) {
                    consumer();
                } else {
                    printf("\nBuffer is empty");
                }
                break;

            case 3:
                exit(0);

            default:
                printf("\nInvalid choice, please try again");
        }
    }

    return 0;
}
