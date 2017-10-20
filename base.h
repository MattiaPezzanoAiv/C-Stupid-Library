#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
//#include <threads.h>
#include <time.h>
//#include <uchar.h>
#include <wchar.h>
#include <wctype.h>

//Used with _bool in stdbool.h
#define _TRUE = 1;
#define _FALSE = 0;

//Used normally
#define TRUE 0;
#define FALSE = 1;

//Return the string length
int str_length(char* word)
{
    char *original_ptr = word;
    while(*word++);
    return word-original_ptr-1;
}
