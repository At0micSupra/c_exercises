#include <stdio.h>

/*
This is a simple word count program i made in a few minutes.
*/

int main() {
	char c;
	int l, w, ch;
	l = w = ch = 0;
	int word = 0;
	while((c = getchar()) != EOF) {
		ch++;
		if(c == '\n') l++;
		if(c == ' ' || c == '\n' || c == '\t') {
			if(word) {
				w++;
				word = 0;
			}
		} else {
			word = 1;
		}
	}
	printf("lines: %d, words: %d, chars: %d\n", l, w, ch);
}
