# cmsc128-ay2015-16-assign002-c
A CMSC128 assignment, a Simple Bioinformatics Library in programmed in C.

## Introduction
Bioinformatics is a interdisciplinary field that analyzes biological data using software tools. This mini-project aims to 
create a simple Bioinformatics function library in C Language.

## Instructions
- **Running with CL Interface** - I've included a command line interface to use the functions. In order to run the interface, compile it and you're good to go.
- **Using as a library** - Everything from the bioinfoc-lib.h is stand-alone. Just copy it to your project folder and import it.

## Functions
- **int getHammingDistance (char *str1, char *str)** - Given two strings str1 and str2 of same length (not 0 or negative!), it gives back an integer of the number of inversions per character need to transform str1 to str2 or vise-versa.
- **int countSubstrPattern(char *original, char *pattern)** - Given a string original and pattern, counts the number of occurrence
of pattern in original.
- **int isValidString(char *string, char *alphabet)** - Given a string and the alphabet where all letters are assumed to be unique, this
function returns 1(true in c) if the string str is valid based on the alphabet. (Returns int as boolean data type is not supported in C.)
- **int getSkew(char *genome, int index)** - Given a genome string and a valid nth place of nucleotide, returns the G-C skew of the given genome.
- **int getMaxSkew(char *genome, int index)** - Given a genome string and a valid nth place of nucleotide, returns the maximum G-C skew of the given genome from the first to the nth nucleotide.
- **int getMinSkew(char *genome, int index)** - Given a genome string and a valid nth place of nucleotide, returns the minimum G-C skew of the given genome from the first to the nth nucleotide.

