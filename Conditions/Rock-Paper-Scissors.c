#include<stdio.h>

int main() {
    int i, j;
    printf("1.Rock\n");
    printf("2.Scissors\n");
    printf("3.Paper\n");
    printf("Player 1 chooses: ");
    scanf("%d", & i);
    switch (i) {

    case 1:
        printf("Player 2 chooses:");
        scanf("%d", & j);
        switch (j) {
        case 1:
            printf("Draw");
            break;
        case 2:
            printf("Player 1 wins");
            break;
        case 3:
            printf("Player 2 wins");
            break;
        default:
            printf("You must enter 1, 2 or 3");
        };
        break;
    case 2:
        printf("Player 2 chooses:");
        scanf("%d", & j);
        switch (j) {
        case 1:
            printf("Player 2 wins");
            break;
        case 2:
            printf("Draw");
            break;
        case 3:
            printf("Player 1 wins");
            break;
        default:
            printf("You must enter 1, 2 or 3");
        };
        break;
    case 3:
        printf("Player 2 chooses:");
        scanf("%d", & j);
        switch (j) {
        case 1:
            printf("Player 1 wins");
            break;
        case 2:
            printf("Player 2 wins");
            break;
        case 3:
            printf("Draw");
            break;
        default:
            printf("You must enter 1, 2 or 3");
        };
        break;
    default:
        printf("You must enter 1, 2 or 3");
    }
    return 0;
}
