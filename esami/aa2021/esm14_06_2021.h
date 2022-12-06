	#ifdef ESAME__14_06_2021
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (x = y++)
			
			int main() {
				int x = 0, y = 1;
				
				M(y,x);
				M(y,y);
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0, z = 0;
				
				x = (y = (z = z + 1) + 1) + (x = 1);
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 0;
				
				if((x-- || --y) && (x-- && --y))
					printf("%d %d\n",  x,  y);
				else
					printf("%d %d\n", !x, !y);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = -2;
				
				do {
					if(x++ < 2) ++x;
					else        --x;
				} while(x--);
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				static int y = -2;
				
				if(x <= ++y) return x+y;
				else         return f(x-1);
			}
			
			int main() {
				printf("%d\n", f(2));
				printf("%d\n", f(2));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				char s[6] = "ciao";
				printf("%lu %lu\n", sizeof("ciao"), sizeof(s));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int A[4][4] = {{1,2},{4,5}};
				int (*p)[2] = A;
				int (*q)[3] = A;
				
				printf("%d %d\n", p[1][2], q[1][2]);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			#include <stdio.h>

			int main() {
				int A[4][4] = {{1,2},{4,5}};
				int (*p)[4][2] = &A;
				int (*q)[4][3] = &A;
				
				printf("%d %d\n", p[0][2][0], (*q)[1][2]);
				return 0;
			}
		#endif
	#endif
