	#ifdef ESAME__17_01_2018b
		#define exam
		#if ES == 1
			#define exec

			#define M(x,y) (x = y);
			
			int main() {
				int x, y = 1;
				
				M(y,x);
				M(1,x);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 3, y = 0;
				
				printf("%d\n", (--x * --y) && (--x / --y));
				printf("%d\n", (x++ / y++) || (x++ * y++));
			/*	printf("%d %d\n", x, y);
			*/	return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				
				if(x = 2)
					printf("%d\n", !x + 1);
				else
					printf("%d\n", !x * 1);
				
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				do {
					if(--x == 1)
						x -= 1;
				} while(x++);
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			
			int F(int F) {
				int x = F;
				return F(x+1);
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 3)       return f(x-1);
				else if(x < -3) return f(x+1);
				else if(x == 0) return 0;
				else            return 1+f(x-1);
			}
			
			int main() {
				printf("%d\n", f(-5));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum {A = 1, B, C = -2, D};
			
			int main() {
				int A = 0, C = 1;
				printf("%d\n", A+B+C+D);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char A[3][2], B[5];
				printf("%lu %d\n", sizeof(A), sizeof(A) == sizeof(B));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2][2] = {{{1},{2}},{{3},{4}}};
				
				printf("%d %d\n", A[0][1][0], A[0][1][1]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 0;
				int  *p1 = &x,   *p2 = &x;
				int **q1 = &p1, **q2 = &p2;
				
				*q2 = &y;
				
				printf("%d %d\n", **q1, *p2);
				return 0;
			}
		#endif
	#endif
