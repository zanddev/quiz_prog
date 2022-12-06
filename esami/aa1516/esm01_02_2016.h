	#ifdef ESAME__01_02_2016
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (y = x*y) + 1

			int main() {
				int x = 2;
				int y = M(1+2,x);
				
				printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				printf("%d\n", x++ && y++);
				printf("%d\n", --x || --y);
				printf("%d\n", x);
				printf("%d\n", y);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 1, z = 0;
				
				if((++x && ++y) || z--)
					printf("%d %d %d\n", x++, y++, z++);
				else
					printf("%d %d %d\n", --x, --y, --z);
				return 0;
			}
		#elif ES == 4
			#define exec

			int main() {
				int i = 0;
				while(i) {i++;}
				do {i++;} while(i)
				return 0;
			}
		#elif ES == 5
			#define exec

			int x = 1;
			
			int f(int x) {
				int x = 2;
				return x+x;
			}
			
			int main() {
				return f(x);
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				static unsigned int y = 0;
				if(x <= y) {
					return x+y;
				} else {
					y++;
					return f(x-1);
				}
			}
			
			int main() {
				printf("%u\n", f(4));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>
			
			int main() {
				enum {A = -2, B, C, D = -1};
				printf("%d %d %d %d\n", A, B, C, D);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				char *s = "ciao";
				
				s++; s++;
				printf("%c%c\n", *s, s[1]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int main() {
				int *p = (int *)malloc(2*sizeof(int));
				int A[2];
				
				p[0] = p[1] = -1;
				A[0] = A[1] =  1;
				
				p = A + 1;
				
				printf("%d %d\n", p[0], p[1]);
				return 0;
			}
		#endif
	#endif
