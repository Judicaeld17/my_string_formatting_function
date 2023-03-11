
// Description
// Create a my_string_formatting function which takes 3 parameters (firstname, lastname and age) and prints a string composed value.

// Formatting should be: "Hello, my name is FIRSTNAME LASTNAME, I'm AGE."

// Make sure you are printing a newline.
#include<stdio.h>
void my_string_formatting(char* firstname,char* lastname, int age){
printf("Hello, my name is %s %s, I'm %d.\n",firstname,lastname,age);
}
int main(){
char f[6]="didi";
char l[6]="po";
int a=10;
my_string_formatting(f, l, a);
return 0;
}
