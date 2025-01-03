/*
Given: A DNA String s of length at most 1000 nt.
Return: Four integers (separated by spaces) counting the respective number of times that the symbols "A", "C", "G", and "T" occur in s.
*/

#include <stdio.h>
#include <stdlib.h>

/*
How I solved:
1. Created a char array with 1001 slots for the max number of nucleotides and terminating char.
2. 
*/

void count_dna_nucleotides(char *s) {
    int A_counter = 0, C_counter = 0, G_counter = 0, T_counter = 0;

    int i;
    for (i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
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
                printf("Dataset includes a character outside of the nucleotides A, C, G, and T");
                exit(1);
        }
    }

    printf("%d %d %d %d\n", A_counter, C_counter, G_counter, T_counter);
}

void read_dataset(char *s) {
    FILE *fptr;

    fptr = fopen("rosalind_dna.txt", "r");

    if (fptr == NULL) {
        printf("Error opening rosalind_dna.txt.\n");
        exit(1);
    }

    fscanf(fptr, "%s", s);

    fclose(fptr);
}

int main() {
    char s[1001];

    read_dataset(s);
    count_dna_nucleotides(s);

    return 0;
}