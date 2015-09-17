#include<iostream>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
using namespace std;
int NotNumberFlag=0;
int GetInput(bool printGet,bool printIsNum )
{
    char *line;
    char test;
    int result = 0;
    if ((line = readline(stdin)) != NULL) {
	if (IsNumber(line,printIsNum)) {
//	    cout << "it is a number" << endl;
	    result = atoi(line);
//	    cout << "result = " << result << endl;
	} else {
            if(printGet)
	    cout << "it is not a number" << endl;
	    NotNumberFlag = 1;

//	    cout << "result = " << result << endl;
	}

    } else {
            if(printGet)
	cout << "No Input has been entered " << endl;
//	cout << "result = " << result << endl;
    }
return result;
}

char *readline(FILE * f)
{
    char *line = NULL;
    char c;
    int len = 0;

    while (((c = fgetc(f)) != EOF) && c != '\n') {
	line = (char *) realloc(line, sizeof(char) * (len + 2));
	line[len++] = c;
	line[len] = '\0';
    }
    return line;
}

bool IsNumber(char *buf,bool print)
{
    int i;
    int negative = 0;
    for (i = 0; i < strlen(buf); i++) {
	if (buf[i] == ' ') {
		
            if(print)
	    cout << "spaces are not allowed" << endl;
	    return false;
	}
	if (!IsDigit(buf[i]))
	    return false;
	if (buf[i] == '.') {
            if(print)
	    cout << "you should enter an integer number" << endl;
	    return false;
	}
	if (buf[i] == '-') {
         if(i==0)
	    negative++;
         else return false;
	}

    }
    if (negative > 1) {
	return false;
    }
    return true;

}

int IsDigit(int c)
{
    return (c >= 0x30 && c <= 0x39 || c == 0x2E || c == 0x2D);
}
