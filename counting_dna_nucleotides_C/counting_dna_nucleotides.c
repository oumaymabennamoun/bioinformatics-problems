/*
Given: A DNA String s of length at most 1000 nt.
Return: Four integers (separated by spaces) counting the respective number of times that the symbols "A", "C", "G", and "T" occur in s.
*/

#include <stdio.h>
#include <stdlib.h>

/*
How I solved:
1. Created a char array with 1001 slots for the max number of nt and terminating char.
2. Read the DNA string from the provided dataset into the array.
3. Iterated over the newly stored symbols for nt count.
*/

void read(char *s) {
    FILE *fptr;
    fptr = fopen("rosalind_dna.txt", "r");

    if (fptr == NULL) {
        perror("Error opening rosalind_dna.txt.\n");
        exit(1);
    }

    fscan(fptr, "%s", s);
    fclose(fptr);
}

void count(char *s) {
    int i;
    int A_counter = 0, C_counter = 0, G_counter = 0, T_counter = 0;

    for (i = 0; s[i] != '\0'; i++) {
        switch(s[i]) {
            case 'A':
                A_counter++;
                break;
            case 'C':
                C_counter++;
                break;
            case 'G':
                G_counter++;
                break;
            case 'T':
                T_counter++;
                break;
            default:
                fprintf(stderr, "Dataset includes a character outside of the nucleotides A, C, G, and T");
                exit(1);
        }
    }

    printf("%d %d %d %d\n", A_counter, C_counter, G_counter, T_counter);
}

int main() {
    char s[1001];

    read(s);
    count(s);

    return 0;
}