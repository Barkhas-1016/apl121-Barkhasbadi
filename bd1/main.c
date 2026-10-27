#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function / Dedd algorithm
int playGame(int gameNum) {
    int secretNum, guess, attempts = 0;
    int maxAttempts = 7; // Max 7 attempts limit

    // Random number generation (1-100)
    secretNum = (rand() % 100) + 1;

    printf("\n=== TOGLOM %d SHINYYA ===\n", gameNum);
    printf("1 thi 100 ni vacche no number vicharo (Max %d oroldlogo):\n", maxAttempts);

    do {
        // Input validation (Do-while)
        do {
            printf("[%d-ni oroldlogo] Number lakho (1-100): ", attempts + 1);
            scanf("%d", &guess);
            if (guess < 1 || guess > 100) {
                printf("Buruu input! Zovhon 1 thi 100 ni vacche lakho.\n");
            }
        } while (guess < 1 || guess > 100);

        attempts++;

        // If-else condition
        if (guess < secretNum) {
            printf("Zovlomj: Baga bina! Ikh togloroi.\n");
        } else if (guess > secretNum) {
            printf("Zovlomj: Ikh bina! Baga togloroi.\n");
        } else {
            printf("Bayar khurgiye! Zob taakhiyo! (%d oroldlogo)\n", attempts);
            return attempts;
        }

    } while (attempts < maxAttempts);

    printf("Hojgai! Zob number %d hotoi.\n", secretNum);
    return attempts;
}

int main() {
    int attemptsList[3]; // 3 games array
    srand(time(0));

    printf("=========================================\n");
    printf("       TOO TAAKHI TOGLOM (CODE QUEST)    \n");
    printf("=========================================\n");

    // 3 times game loop
    for (int i = 0; i < 3; i++) {
        attemptsList[i] = playGame(i + 1);
    }

    // Output Table Formatting
    printf("\n=========================================\n");
    printf("%-15s %-15s\n", "Toglomiin Dugaar", "Oroldlogiin Too");
    printf("-----------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("%-15d %-15d\n", i + 1, attemptsList[i]);
    }
    printf("=========================================\n");

    // Search logic for best score
    int bestGame = 0;
    for (int i = 1; i < 3; i++) {
        if (attemptsList[i] < attemptsList[bestGame]) {
            bestGame = i;
        }
    }

    printf("\nREKORD: Toglom %d ma hamgiin ochikh (%d) oroldlogoor taakhiyo!\n", 
           bestGame + 1, attemptsList[bestGame]);

    return 0;
}
