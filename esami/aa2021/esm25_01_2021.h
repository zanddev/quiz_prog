	#ifdef ESAME__25_01_2021
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) x*y
			
			int main() {
				printf("%d %d\n", M(2+2,2+2),M(2*2,2*2));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				(x++ || y--) && (--x && --y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				if((x++ || y--) && (--x && --y))
					printf("%d %d\n",  x,  y);
				else
					printf("%d %d\n", !x, !y);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 3;
				
				while(i++)
					if(i-- && ++i) printf("%d\n", i--);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				static int y = 0;
				
				if(x <= ++y)
					return x+y;
				else
					return f(x-1);
			}
			
			int main() {
				printf("%d\n", f(2));
				printf("%d\n", f(2));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char *s1   = "string1";
				char s2[7] = "string2";
				
				printf("%c %c\n", s1[strlen(s1)-1], s2[strlen(s2)-1]);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				int A[] = {1,2,3,4,5};
				int *p1 = A, *p2 = A + sizeof(A)/sizeof(int);
				
				printf("%d %d %d\n", (int)(p2-p1), *p1, *p2);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			void f(int **p1, int **p2) {
				int x = 1, *q = (int *)malloc(sizeof(int));
				
				*p1 = &x;
				*p2 = q;
				*q  = 1;
			}
			
			int main() {
				int *p1, *p2;
				f(&p1, &p2);
				printf("%d %d\n", *p1, *p2);
				return 0;
			}
		#endif
	#endif
