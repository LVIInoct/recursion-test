#include <stdio.h>
#include <cs50.h>

int main(void) {
    string s = "Hi!";
    printf("%s\n", s); // S is a pointer to the first character in the string "Hi!"
    printf("%p\n", &s); // Address
    printf("%p\n", &s[0]); // Address of the first character 'H'
    // reminder that using & means you're asking for the address of something, not its value

    // this is also how to natively implement a string in c
    char *s = "Hi!";
    printf("%s\n", s); /* s is the address of the first character in the
    string literal "Hi!", which is stored in read-only memory. When we print s,
    it outputs the string "Hi!" because printf does a loop to print reach character until null*/

    // another way of printing -- although not very clean, but it's just to show how the pointer arithmetic works
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    
    // this next way it skips a few characters each time we use printf, given that its now a loop, not a single char
    printf("%s\n", s); // Hi!
    printf("%s\n", s + 1); // i!
    printf("%s\n", s + 2); // !
}
