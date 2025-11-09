#include <stdio.h>

int pie = 32, soup = 55;
int ntime = 0;

void b_eat(int use_time, int money, int k) {
    char *drink = "drinks a Corn soup";
    char *eat   = "eats an Apple pie";
    char *action, *unit;

    if (k == 0) {
        money -= pie;
        k = 1;
        action = eat;
    } else {
        money -= soup;
        k = 0;
        action = drink;
    }

    if (money > 0) {
        if (money == 1) {
            unit = "dollar";
        } else {
            unit = "dollars";
        }

        printf("%d: Wayne %s, and now he has %d %s.\n",
               ntime, action, money, unit);
        ntime += use_time;
        b_eat(use_time, money, k);
    }
    else if (money == 0) {
        printf("%d: Wayne %s, and now he doesn't have money.\n",
               ntime, action);
    }
}

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    int first=pie;
    if(K)first=soup;
    if (N-first < 0) {
        printf("Wayne can't eat and drink.\n");
    } else {
        b_eat(M, N, K);
    }
    return 0;
}