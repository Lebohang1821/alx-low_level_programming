#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CODEX_LENGTH 64


/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])


char generateCharacter(const char *input, int xorValue) {
    int len = strlen(input);
    int tmp = 0;
    
    for (int x = 0; x < len; x++) {
        tmp += input[x];
    }

    return input[(tmp ^ xorValue) & (CODEX_LENGTH - 1)];
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1;
    }

    char codex[CODEX_LENGTH] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char password[8]; // Increased password size to account for '\0'
    
    if (strlen(argv[1]) < 1) {
        printf("Input string must not be empty.\n");
        return 1;
    }

    for (int i = 0; i < 6; i++) {
        password[i] = generateCharacter(argv[1], 59 + (i * 20));
    }

    srand(argv[1][0] ^ 14);
    password[6] = codex[rand() & (CODEX_LENGTH - 1)];

    password[7] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
