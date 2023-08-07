#include <stdio.h>

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
