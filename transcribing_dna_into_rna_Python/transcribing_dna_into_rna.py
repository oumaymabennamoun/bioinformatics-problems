# Given: A DNA String t of length at most 1000 nt.
# Return: The transcribed RNA string u by replacing all occurrences of "T" with "U".

# How I solved:
# 1. Read the DNA string from the provided dataset.
# 2. Created a new String with replaced substrings using the replace() method.

import sys

def read():
    try:
        file = open("rosalind_rna.txt", "r")
        t = file.read()
        file.close()
        return t
    except:
        print("Error opening rosalind_rna.txt.")
        exit(1)

def transcribe(t):
    u = t.replace("T", "U")
    return u

def main():
    t = read() 
    u = transcribe(t)
    print(u)

if __name__ == "__main__":
    main()
