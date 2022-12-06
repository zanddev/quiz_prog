	#ifdef SIMUL__18_12_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) x/y
			
			int main() {
				printf("%d\n", M(1,1+9));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 100, y = 0;
				
				printf("%d %d\n", !x, !y);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int MAX = 1;
				
				if(MAX != 1); {
					printf("%d\n", MAX);
					MAX = 0;
				}
				printf("%d\n", MAX+1);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				
				while(x++ || y++ ? x++ : y++)
					if(--x && --y ? --x : --y)
						printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 1)
					return f(x-1)+f(x-2)+f(x-3);
				else
					return 1;
			}
			
			int main() {
				printf("%d %d\n", f(3), f(4));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				char a[1], b[2], c[1][2];
				
				if(sizeof(a)+sizeof(b) < sizeof(c))
					printf("%lu %lu\n", sizeof(a)+sizeof(b),sizeof(c));
				else
					printf("%lu %lu\n", sizeof(c),sizeof(a)+sizeof(b));
				
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][3] = {0, 1, 2, 3, 4, 5};
				int (*p)[2] = A;
				int (*q)[3] = A;
				
				printf("%d %d\n", p[1][1], q[1][1]);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int  x = 1, y = 0;
				int  *p1 = &y,   *p2 = &y;
				int **q1 = &p1, **q2 = &p2;
				
				*q2 = &x;
				
				printf("%d %d\n", **q1, *p2);
				return 0;
			}
		#endif
	#endif
