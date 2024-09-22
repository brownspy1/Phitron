// Created by M.Mahadi on 2024-07-05
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CODE_LENGTH 8
#define TOTAL_CODES 20

void generatePromoCode(char code[]) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (int i = 0; i < CODE_LENGTH; i++) {
        int randomIndex = rand() % (sizeof(charset) - 1);
        code[i] = charset[randomIndex];
    }
    code[CODE_LENGTH] = '\0';
}

int main() {
    char promoCodes[TOTAL_CODES][CODE_LENGTH + 1];
    srand(time(0)); // Seed for random number generation

    for (int i = 0; i < TOTAL_CODES; i++) {
        generatePromoCode(promoCodes[i]);
        printf("%s\n", promoCodes[i]);
    }

    return 0;
}
