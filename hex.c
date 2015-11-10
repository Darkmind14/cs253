#include <stdio.h>

int main(int argc, char* argv[]) {

  printf("arg count is %d.\n",argc);

  int k;

  for (k=1;k<argc;k++) {

   /*printf("%d: %s\n",k,argv[k]);*/
   int x; 

   sscanf(argv[k], "%d", &x);

   printf("0x%x\n", x);  
  }

}

/*

    Variable Declaration
   ----------------------
    type name;
    type name1, name2, name3, ...;

    Ex:
   -----

   int x; ---- -2^31 ... 2^31 -1
   int y, z, a, b;

   char c;  ----- c is an unsigned int from 0..255

   unsigned int count;  --- count is an integer from 0.. ^32

   float biggest;  ---- 6E-3 is 6 * 10^-3 = 0.006

   double reallybig;  

   int arr[50];  --- statically allocated array called arr of 50 integers

   int dynarr[];  --- unknown size, to be dynamically allocated later.

   char s[] = "Hello World";  --- statically allocated array of characters. 12                                    characters including the null terminator.

   int intArray[] = {54, 64, 32, 48};  --- statically allocated with 4 integers.

   int intArray[4] = {54, 54, 32, 48};  --- also statically allocated.

   int* xptr;  ----- pointer to an integer. The pointer is called xptr.

   char* s;  ----- pointer to a character.

   Example
   ========

   int x = 6;
   int* xptr = &x;

   char* s = "Hello World";
*/
