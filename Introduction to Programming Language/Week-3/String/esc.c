#include <stdio.h>

int main() {
    char str[] = "Ban\\gla \tis \"beaut\0iful\" language";
    fputs(str, stdout);
}