#include <stdio.h>

/*
This is a simple program which takes in some text input and
removes all but one space between words.
*/
int main() {
	char c;
	int b = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			if(b == 0) putchar(c);
			b = 1;
		} else {
			b = 0;
			putchar(c);
		}
		
	}
	
}
