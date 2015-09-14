#include<iostream>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
extern int NotNumberFlag;
int GetInput(bool printGet,bool printIsNum);
char *readline(FILE * f);
bool IsNumber(char *buf,bool print);
int IsDigit(int c);
